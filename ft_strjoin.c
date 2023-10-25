/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aevstign <aevstign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 18:23:00 by aevstign          #+#    #+#             */
/*   Updated: 2023/10/25 17:54:19 by aevstign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_compute_final_len(char **strings, int size, int sep_length)
{
	int	final_length;
	int	i;

	final_length = 0;
	i = 0;
	while (i < size)
	{
		final_length += ft_strlen(strings[i]);
		final_length += sep_length;
		i++;
	}
	final_length -= sep_length;
	return (final_length);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		full_length;
	int		i;
	char	*string;
	char	*d;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	full_length = ft_compute_final_len(strs, size, ft_strlen(sep));
	string = malloc((full_length + 1) * sizeof(char));
	d = string;
	if (!string)
		return (0);
	i = 0;
	while (i < size)
	{
		ft_strcpy(string, strs[i]);
		if (i < size - 1)
			string += ft_strlen(strs[i]);
		if (i++ < size - 1)
		{
			ft_strcpy(string, sep);
			string += ft_strlen(sep);
		}
		i++;
	}
	*d = '\0';
	return (string);
}

// int	main(void)
// {
// 	char *strings1[] = {"Hello", "world", "!"};
// 	char *strings2[] = {"This", "is", "a", "test"};
// 	char *sep1 = ", ";
// 	char *sep2 = "-";
// 	char *sep3 = "";

// 	char *result1 = ft_strjoin(3, strings1, sep1);
// 	printf("Expected: Hello, world, ! | Got: %s\n", result1);
// 	free(result1);

// 	char *result2 = ft_strjoin(4, strings2, sep2);
// 	printf("Expected: This-is-a-test | Got: %s\n", result2);
// 	free(result2);

// 	char *result3 = ft_strjoin(2, strings1, sep3);
// 	printf("Expected: Helloworld | Got: %s\n", result3);
// 	free(result3);

// 	return (0);
// }
