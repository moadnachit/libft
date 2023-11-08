/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 11:46:39 by mnachit           #+#    #+#             */
/*   Updated: 2023/11/07 19:43:30 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	length;
	size_t	i;

	length = 0;
	while (src[length])
		length++;
	i = 0;
	while (src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (length);
}
/*int main() {
    char dest[20];
    const char *src = "Hello, World!";
    size_t result = strlcpy(dest, src, sizeof(dest));

    printf("Copied: %s\n", dest);
    printf("Length of source: %zu\n", result);

    return 0;
}*/
