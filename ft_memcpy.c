/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 18:34:25 by mnachit           #+#    #+#             */
/*   Updated: 2023/11/07 21:24:38 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*adst;
	char	*asrc;
	size_t	i;

	i = 0;
	adst = (char *)dst;
	asrc = (char *)src;
	if (!dst && !src)
		return (NULL);
	while (n > i)
	{
		adst[i] = asrc[i];
		i++;
	}
	return (dst);
}
/*int main()
{
    char source[] = "Hello, World!";
    char destination[20];

    // Copy the contents of 'source' to 'destination'
    memcpy(destination, source, 20); // +1 to include the null terminator

    // Print the destination string
    printf("Destination: %s\n", destination);

    return 0;
}*/
