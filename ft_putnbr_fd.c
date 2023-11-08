/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 13:46:40 by mnachit           #+#    #+#             */
/*   Updated: 2023/11/07 19:14:48 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb *= -1;
	}
	if (nb >= 0 && nb <= 9)
	{
		ft_putchar_fd(nb + 48, fd);
	}
	else if (nb > 9)
	{
		ft_putnbr_fd(nb % 10, fd);
		ft_putnbr_fd(nb / 10, fd);
	}
}
/*int main()
{
    int i = 777;
    int fd = open("nachit.txt", O_RDWR | O_CREAT);
    printf("%d", fd);
    ft_putnbr_fd(i , fd); 
}*/
