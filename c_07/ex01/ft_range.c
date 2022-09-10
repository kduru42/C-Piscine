/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kduru <kduru@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 22:46:25 by kduru             #+#    #+#             */
/*   Updated: 2022/02/28 22:47:38 by kduru            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	i = 0;
	if (min >= max)
		tab = NULL;
	else
	{
		tab = malloc(sizeof(int) * (max - min));
		while (min != max)
		{
			tab[i] = min;
			i++;
			min++;
		}
	}
	return (tab);
}
