/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 09:18:22 by mnachit           #+#    #+#             */
/*   Updated: 2023/11/08 18:18:47 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dest;
	char	*source;

	dest = (char *)dst;
	source = (char *)src;
	len--;
	if (dest > source)
	{
		while (len > 0)
		{
			dest[len] = source[len];
			len--;
		}
		return (dest);
	}
	else
		memcpy(dest, source, len);
	return (dest);
}
/*int main()
{
    char s[] = "ABCDEF";
    memmove(s + 2 , s , 4);
    printf("%s", s);
}*/
