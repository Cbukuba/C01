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

	*a = *a / *b;
	y = *a;
	*b = *a % *b;
}

/*int	main(void)
{
	int	u = 9;
	int	v = 2;
	ft_ultimate_div_mod(&u, &v);
	printf("div = %d", u);
}*/