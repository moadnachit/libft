/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 10:32:02 by mnachit           #+#    #+#             */
/*   Updated: 2023/11/08 18:19:20 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)s + i);
		i++;
	}
	if (c == '\0')
		return ((char *)&s[i]);
	return (0);
}
/*int main() {
    char s[] = "mouad nachit";
    char c = 'it';
    char* result = strchr(s, c);

    if (result != 0) {
        printf("Character '%c' found at position: %s\n", c, result);
    } else {
        printf("Character '%c' not found in the string.\n", c);
    }

    return 0;
}*/
