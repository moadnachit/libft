/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 09:18:22 by mnachit           #+#    #+#             */
/*   Updated: 2023/11/17 06:12:33 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dest;
	unsigned char	*source;

	if (dst == NULL && src == NULL)
		return (NULL);
	dest = (unsigned char *)dst;
	source = (unsigned char *)src;
	if (dest > source)
	{
		while (len > 0)
		{
			len--;
			dest[len] = source[len];
		}
		return (dest);
	}
	else
		ft_memcpy(dest, source, len);
	return (dest);
}
