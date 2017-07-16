/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncaiserm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 12:45:29 by ncaiserm          #+#    #+#             */
/*   Updated: 2017/07/16 16:26:06 by ncaiserm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (((str[i] >= 'a') && (str[i] <= 'z')) ||
			((str[i] >= 'A') && (str[i] <= 'Z')))
		{
			i++;
			return (0);
		}
		else
			return (1);
	}
	return (1);
}
