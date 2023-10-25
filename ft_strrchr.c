/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aevstign <aevstign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:15:47 by aevstign          #+#    #+#             */
/*   Updated: 2023/10/20 17:35:19 by aevstign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *str, int c)
{
	char	*result;

	result = NULL;
	while (*str)
	{
		if (*str == c)
			result = str;
		str++;
	}
	return (result);
}

// int main () {
// 	char str[] = "https://www.tutorialspoint.com";
//    char ch = '.';
//    char *ret;
//    ret = ft_strrchr(str, ch);
//    printf("%s", ret);
//    return(0);
// }