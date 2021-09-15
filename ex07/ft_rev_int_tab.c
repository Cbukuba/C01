/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbukuba <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 12:05:02 by cbukuba           #+#    #+#             */
/*   Updated: 2021/09/13 12:05:06 by cbukuba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	y;

	i = 0;
	while (i < size)
	{
		y = tab[i];
		tab[i] = tab[size - 1];
		tab [size - 1] = y;
		i ++;
		size --;
	}
}
#include <stdio.h>

int	main()
{
	int tab [] = {1,2,3,4,5};
	int size = 5;
	int i = 0;
	while (i < size)
	{
		ft_rev_int_tab(tab, size);
		printf("%d", tab[i]);
		i++;
		size --;
	}
}