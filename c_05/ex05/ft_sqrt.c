/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kduru <kduru@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 15:40:43 by kduru             #+#    #+#             */
/*   Updated: 2022/02/27 15:40:57 by kduru            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	root;

	root = 1;
	if (nb > 0)
	{
		while (root * root <= nb)
		{
			if (root * root == nb)
				return (root);
			else if (root >= 46341)
				return (0);
			root++;
		}
	}
	return (0);
}
