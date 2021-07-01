/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_putstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 11:48:37 by jporta            #+#    #+#             */
/*   Updated: 2021/07/01 18:34:05 by jporta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_print(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_print(*str);
		str++;
	}
}

int main()
{
	printf("\n");
	printf("EX05\n");
	ft_putstr("raquel\n");

}