/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 10:13:59 by mnachit           #+#    #+#             */
/*   Updated: 2023/11/07 21:25:14 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		while (needle[j] == haystack[i + j])
		{
			j++;
			if (needle[j] == '\0')
				return ((char *)haystack + i);
		}
		i++;
	}
	return (0);
}
/*int main()
{
    char str[] = "moulad nachit";
    char to_find[] = "ad";
    char *ls = strnstr(str, to_find  , 5);
    printf("%s\n" , ls);
    return (0);
}*/
