/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsenii <arsenii@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 19:56:43 by aevstign          #+#    #+#             */
/*   Updated: 2023/10/26 00:32:35 by arsenii          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	if (!s)
		return ;
	i = 0;
	while (i < n)
	{
		*(char *)(s + i) = 0;
		i++;
	}
}

// int main () {
//     char str[] = "abcdcdee";
//     int c = 6;
//     ft_bzero(str, c);
//     printf("String after first |%d| bytes changes to 0 is - |%s|\n", c, str);
//    return(0);
// }
