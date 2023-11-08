/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 20:29:13 by mnachit           #+#    #+#             */
/*   Updated: 2023/11/08 18:18:38 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)s;
	while (str[i] && i < n)
	{
		if (str[i] == (char)c)
			return ((void *)str + i);
		i++;
	}
	return (0);
}
/*int main() {
 char buffer[] = "This is a test string.";
 char search_char = 'i';

const void *result = memchr(buffer, search_char, strlen(buffer));

 if (result != NULL) {
 printf("'%c' found at position: %ld\n", search_char, (char*)result - buffer);
 } else {
  printf("'%c' not found in the string.\n", search_char);
 }
return 0;
}*/
