/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncaiserm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 12:57:10 by ncaiserm          #+#    #+#             */
/*   Updated: 2017/07/16 16:15:40 by ncaiserm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (((str[i] >= 32) && (str[i] <= 127)) || (str[i] == ' '))
		{
			i++;
			return (1);
		}
		else
			return (0);
	}
	return (1);
}

int		main()
{
	printf("%d", ft_str_is_printable(""));
}
