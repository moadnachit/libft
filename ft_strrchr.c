/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 12:40:54 by mnachit           #+#    #+#             */
/*   Updated: 2023/11/07 19:58:17 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	i--;
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)s + i);
		i--;
	}
	if (c == '\0')
		return ((char *)&s[i]);
	return (0);
}
/*int main() {
    char s[] = "mouad nachit";
    char c = 'a';
    char* result = strrchr(s, c);

    if (result != 0) {
        printf("Character '%c' found at position: %s\n", c, result);
    } else {
        printf("Character '%c' not found in the string.\n", c);
    }

    return 0;
}*/
