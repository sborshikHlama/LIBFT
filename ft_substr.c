/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aevstign <aevstign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 19:36:25 by aevstign          #+#    #+#             */
/*   Updated: 2023/10/22 20:23:53 by aevstign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start,
size_t len)
{
	char	*substr;
	char	*substr_start;
	size_t	i;

	substr = (char *)malloc((len + 1) * sizeof(char));
	if (!substr || start > (unsigned int)ft_strlen((char *)s))
		return (NULL);
	substr_start = substr;
	i = 0;
	while (s[start + i] != 0 && i < len)
	{
		*substr = s[start + i];
		substr++;
		i++;
	}
	*substr = '\0';
	return (substr_start);
}

// int	main(void)
// {
// 	printf("%s", ft_substr("string", 3, 6));
// 	return (0);
// }
