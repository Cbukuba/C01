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
	while (i <= size)
	{
		y = tab[i];
		tab[i] = tab[size - 1];
		tab [size - 1] = y;
		i ++;
		size --;
	}
}

/*int	main()
{
	int tab [5];
	tab [0] = 1;
	tab [1] = 2;
	tab [2] = 3;
	tab [3] = 4;
	tab [4] = 5;
	int size = 5;
	ft_rev_int_tab(tab, size);
	printf("%d,%d,%d,%d,%d", tab[0], tab[1], tab[2], tab[3], tab[4]);
}*/