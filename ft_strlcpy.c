/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aevstign <aevstign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 18:14:57 by aevstign          #+#    #+#             */
/*   Updated: 2023/10/25 14:48:31 by aevstign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	str_length;

	i = 0;
	str_length = 0;
	if (!dst || !src)
		return (0);
	str_length = ft_strlen(src);
	if (str_length != 0)
	{
		while (i < (size - 1) && src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (str_length);
}

// int main () {
//    char src[40];
//    char dest[100];

//    ft_memset(dest, '\0', sizeof(dest));
//    strcpy(src, "This is tutorialspoint.com");
//    strcpy(dest, src);

//    printf("Final copied string : %s\n", dest);

//    return(0);
// }