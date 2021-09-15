/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbukuba <chrisbukuba058@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 19:54:25 by cbukuba           #+#    #+#             */
/*   Updated: 2021/09/09 21:03:54 by cbukuba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	y;

	y = *a;
	*a = *a / *b;
	*b = y % *b;
}

/*int	main(void)
{
	int	u = 58;
	int	v = 10;
	ft_ultimate_div_mod(&u, &v);
	printf("div = %d\nmod = %d", u, v);
}*/