/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strim.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aevstign <aevstign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 20:24:14 by aevstign          #+#    #+#             */
/*   Updated: 2023/10/23 16:15:32 by aevstign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	size_t	result_len;
	char const	*end;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	if (*s1 == '\0')
		return (ft_strdup(""));
	end = (s1 + (ft_strlen((char *)s1) - 1));
	while (*end > *s1 && ft_strchr(set, *end))
		end++;
	result_len = end - s1;
	result = malloc((result_len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	result[result_len] = '\0';
	ft_strlcpy(result, s1, result_len);
	return (result);
}

int	main(void)
{
	char *j = ft_strtrim("   Hello   ", " ");
	printf("%s", j);
	free(j);
	return (0);
}
