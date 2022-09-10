/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kduru <kduru@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 23:09:01 by kduru             #+#    #+#             */
/*   Updated: 2022/03/01 00:32:44 by kduru            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tab;
	int	i;

	i = 0;
	if (min >= max)
	{
		tab = NULL;
		return (tab);
	}
	else
	{
		tab = (*range)malloc(sizeof(int) * (max - min));
		if (!tab)
			return (-1);
		else
		{
			while (min != max)
			{
				tab[i] = min;
				i++;
				min++;
			}
		}
	}
	return (max - min);
}
