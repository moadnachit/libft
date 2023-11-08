/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 09:29:53 by mnachit           #+#    #+#             */
/*   Updated: 2023/11/08 18:19:14 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nachit(char const s, char c)
{
	if (s == c)
		return (1);
	else
		return (0);
}

static int	ft_len(char const *s, char c)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	while (s[i])
	{
		if (ft_nachit((s[i]), c) == 1)
			i++;
		else if (ft_nachit(s[i], c) == 0)
		{
			while (s[i] != c && s[i])
				i++;
			j++;
		}
	}
	return (j);
}

char	**ft_daym(char const *s, char **str, char c, size_t length)
{
	size_t	i;
	size_t	start;
	size_t	end;

	i = 0;
	start = 0;
	end = 0;
	while (i < length)
	{
		while (s[start] == c && s[start])
			start++;
		end = start;
		while (s[end] != c && s[end])
			end++;
		str[i] = ft_substr(s, start, end - start);
		i++;
		start = end;
	}
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	length;

	length = ft_len(s, c);
	str = (char **)malloc((length) * sizeof(char *));
	if (!str)
		return (0);
	return (ft_daym(s, str, c, length));
}
/*int main ()
{
    char const s[] = "         it:      lss   m";
    char c = ' ';
    char **s1 = ft_split(s, c);
    for(int i = 0; i < 6;i++){
        printf("%s\n", s1[i]);
        free(s1[i]); // Free each string in the array.
    }
    free(s1);
}
*/