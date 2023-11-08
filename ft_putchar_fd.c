/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:50:36 by mnachit           #+#    #+#             */
/*   Updated: 2023/11/08 11:52:46 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
/*int main()
{
    int fd1 = open("a.txt" , O_WRONLY | O_CREAT | O_RDONLY);
    int fd2 = open("p.txt" , O_WRONLY | O_CREAT | O_RDONLY);
    printf("%d    %d", fd1,fd2);
    ft_putchar_fd('A', fd2);
}*/