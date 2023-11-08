/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:30:36 by mnachit           #+#    #+#             */
/*   Updated: 2023/11/07 19:39:01 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_len(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	return (i + j);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		length;
	int		i;
	int		j;

	i = 0;
	j = 0;
	length = ft_len((char *)s1, (char *)s2);
	str = malloc(length + 1);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i])
	{
		str[j] = s2[i];
		i++;
		j++;
	}
	str[j] = '\0';
	return (str);
}
/*int main()
{
    char s[] = "abdrahman";
    char l[] = "l3a";
    printf("%s", ft_strjoin(s, l));
}*/
