/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncaiserm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 11:04:23 by ncaiserm          #+#    #+#             */
/*   Updated: 2017/07/16 13:51:53 by ncaiserm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	while (str[i])
	{
		j = 0;
		while (to_find[j] == str[i + j] && to_find[j])
			j++;
		if (!to_find[j])
			return (char*)&str[i];
		i++;
	}
	return (0);
}

int		main(void)
{
	printf("%s", ft_strstr("coucou les amis de la lune", "la"));
}
