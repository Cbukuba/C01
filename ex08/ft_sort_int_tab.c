/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbukuba <cbukuba@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 20:28:39 by cbukuba           #+#    #+#             */
/*   Updated: 2021/09/14 20:28:42 by cbukuba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	y;

	i = 0;
	while (i <= size)
	{
		y = 0;
		if (tab[i] > tab[i + 1])
		{
			y = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = y;
		}
		i ++;
	}
}

/*int	main()
{
	int tab [5];
	tab [0] = 1;
	tab [1] = 6;
	tab [2] = 4;
	tab [3] = 3;
	tab [4] = 5;
	int size = 5;
	ft_sort_int_tab(tab, size);
	printf("%d,%d,%d,%d,%d", tab[0], tab[1], tab[2], tab[3], tab[4]);
}*/