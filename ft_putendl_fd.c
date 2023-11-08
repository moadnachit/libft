/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <mnachit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:57:32 by mnachit           #+#    #+#             */
/*   Updated: 2023/11/07 19:12:35 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
/*int main ()
{
    char s[] = "mouad nachit";
    int fd = open("mouad.txt" , O_WRONLY | O_CREAT | O_RDONLY, 0777);
    ft_putendl_fd(s, 3);   
}*/
