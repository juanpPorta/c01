/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporta <jporta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 18:06:32 by jporta            #+#    #+#             */
/*   Updated: 2021/06/29 19:46:25 by jporta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void ft_sort_int_tab(int *tab, int size)
{
   
    int t;
    int i;
    i = 0;
    
    

    if(i <= size - 1)
    {
        
        while(*(tab + i) > *(tab + i + 1))
        {
            t = *(tab + i);
            *(tab + i) = *(tab + i + 1);
            *(tab + i + 1) = t;
            t = 0;
            
            i++;
        }
       i++;

    }
    else 
    {

     i = 0;
    }
}

int main()
{
    

	int tabb[10] = {4,2,1,7,3,8,6};
	int n80;
	ft_sort_int_tab(&tabb[0], 10);
	printf("%d\n", tabb[n80]);
	
}