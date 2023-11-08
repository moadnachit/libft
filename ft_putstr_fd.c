/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 13:33:55 by mnachit           #+#    #+#             */
/*   Updated: 2023/11/07 19:16:18 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
		write(fd, &s[i++], 1);
}
/*int main()
{
    char s[] = "mouad nachit";
    int fd = open("misi.txt", O_CREAT | O_RDWR);
    ft_putstr_fd(s, fd);
}*/
