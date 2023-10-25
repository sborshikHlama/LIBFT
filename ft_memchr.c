/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aevstign <aevstign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:19:50 by aevstign          #+#    #+#             */
/*   Updated: 2023/10/20 18:34:19 by aevstign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	const unsigned char	*ptr;

	if (n != 0)
	{
		ptr = str;
		while (n != 0)
		{
			if (*ptr == c)
				return ((void *)(ptr - 1));
			ptr++;
			n--;
		}
	}
	return (NULL);
}

// int main () {
//    const char str[] = "https://www.tutorialspoint.com";
//    const char ch = '.';
//    char *ret;

//    ret = ft_memchr(str, ch, strlen(str));

//    printf("String after |%c| is - |%s|\n", ch, ret);

//    return(0);
// }
