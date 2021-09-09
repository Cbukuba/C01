/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbukuba <chrisbukuba058@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 19:36:26 by cbukuba           #+#    #+#             */
/*   Updated: 2021/09/09 19:52:08 by cbukuba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int	x = 8;
	int	y = 3;
	int	div;
	int	mod;
	
	ft_div_mod(x, y, &div, &mod);
	printf("a/b = %d\nle reste = %d", div, mod);
	return (0);
}*/