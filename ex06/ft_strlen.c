/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbukuba <cbukuba@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 10:31:50 by cbukuba           #+#    #+#             */
/*   Updated: 2021/09/13 10:31:55 by cbukuba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*void	ft_putchar(char c);*/
int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		c ++;
	}
	return (c);
}