/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 18:06:32 by jporta            #+#    #+#             */
/*   Updated: 2021/06/30 16:10:43 by jporta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	t;
	int	i;
	int	flag;

	i = 0;
	flag = 1;
	while (i == 0 && flag != 0)
	{
		flag = 0;
		while (i <= size - 1)
		{
			if (*(tab + i) > *(tab + i + 1))
			{
				t = *(tab + i);
				*(tab + i) = *(tab + i + 1);
				*(tab + i + 1) = t;
				t = 0;
				i++;
				flag = 1;
			}		
			i++;
		}
		i = 0;
	}
}
