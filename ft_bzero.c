/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aevstign <aevstign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 19:56:43 by aevstign          #+#    #+#             */
/*   Updated: 2023/10/21 16:22:08 by aevstign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*str;

	if (n != 0)
	{
		str = (char *)s;
		*(unsigned char *)str = 0;
		str++;
		n--;
	}
	return ;
}
// int main () {
//     char str[] = "abcdcdee";
//     int c = 6;
//     ft_bzero(str, c);
//     printf("String after first |%d| bytes changes to 0 is - |%s|\n", c, str);
//    return(0);
// }
