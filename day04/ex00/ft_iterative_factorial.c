/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fit_iterative_factoriel.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncaiserm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 13:24:15 by ncaiserm          #+#    #+#             */
/*   Updated: 2017/07/12 10:39:44 by ncaiserm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int	i;
	int resul;

	i = 1;
	resul = 1;
	if (nb < 0 || nb > 12)
		return (0);
	while (i <= nb)
	{
		resul = (i * resul);
		i++;
	}
	return (resul);
}
