/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 19:34:25 by jporta            #+#    #+#             */
/*   Updated: 2021/07/01 12:19:48 by jporta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	d;
	int	m;

	d = *div;
	d = a / b;
	*div = d;
	m = *mod;
	m = a % b;
	*mod = m;
}
