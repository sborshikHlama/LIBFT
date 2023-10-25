/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aevstign <aevstign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 18:11:55 by aevstign          #+#    #+#             */
/*   Updated: 2023/10/25 15:08:18 by aevstign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	if (!dest || !src)
		return (NULL);
	if (n != 0)
	{
		while (n > 0)
		{
			*(char *)dest = *(char *)src;
			dest++;
			src++;
			n--;
		}
	}
	return ((void *)dest);
}

// int main () {
//    const char src[50] = "https://www.tutorialspoint.com";
//    char dest[50];
//    strcpy(dest,"Heloooo!!");
//    printf("Before memcpy dest = %s\n", dest);
//    memcpy(dest, src, strlen(src)+1);
//    printf("After memcpy dest = %s\n", dest);

//    return(0);
// }