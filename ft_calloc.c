/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:26:47 by mnachit           #+#    #+#             */
/*   Updated: 2023/11/07 18:41:46 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*calloc(size_t nmemb, size_t size)
{
	char	*s;

	s = malloc(nmemb * size);
	if (!s)
		return (0);
	ft_bzero(s, nmemb * size);
	return (s);
}
