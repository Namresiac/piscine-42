/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncaiserm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 09:44:23 by ncaiserm          #+#    #+#             */
/*   Updated: 2017/07/12 10:06:27 by ncaiserm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int i;
	int sum;

	i = 0;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	i = 1;
	sum = nb;
	while (i < power)
	{
		sum = sum * nb;
		i++;
	}
	return (sum);
}
