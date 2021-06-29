/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 12:42:59 by jporta            #+#    #+#             */
/*   Updated: 2021/06/29 18:05:21 by jporta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	t;
	int	i;

	i = 0;
	while (i <= (size / 2))
	{
		t = *(tab + i);
		*(tab + i) = *(tab + (size - 1 - i));
		*(tab + (size - 1 - i)) = t;
		i++;
	}
}
