/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 11:57:54 by mnachit           #+#    #+#             */
/*   Updated: 2023/11/07 21:26:35 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		i;
	int		size;
	char	*ls;

	i = 0;
	size = 0;
	while (src[size] != '\0')
		size++;
	ls = malloc((size + 1) * sizeof(char));
	if (!ls)
		return (0);
	while (src[i] != '\0')
	{
		ls[i] = (char )src[i];
		i++;
	}
	ls[i] = '\0';
	return (ls);
}
