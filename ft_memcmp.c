/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 20:45:09 by mnachit           #+#    #+#             */
/*   Updated: 2023/11/08 18:18:42 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*st1;
	char	*st2;

	i = 0;
	st1 = (char *)s1;
	st2 = (char *)s2;
	while (st1[i] && st2[i] && i < n)
	{
		if (st1[i] != st2[i])
			return (st1[i] - st2[i]);
		i++;
	}
	return (0);
}
/*int main() {
    int s[] = {1, 2, 3, 4, 5};
    int sq[] = {9, 2, 3, 4, 6}; // Note the difference in the last element
    int l = memcmp(s, sq, 6);
    printf("%d\n", l);
    return 0;
}*/
