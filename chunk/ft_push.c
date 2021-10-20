/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvalton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 18:32:35 by rvalton           #+#    #+#             */
/*   Updated: 2021/10/20 18:17:33 by rvalton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_elem	*ft_push_x_to_y(t_elem **x, t_elem *y, char c)
{
	int		xval;

	if (*x == NULL)
		return (y);
	xval = (*x)->val;
	y = ft_hadd_tolist(y, xval);
	*x = ft_hdelete_inlist(*x);
	if (c == 'a')
		printf("pa\n");
	else if (c == 'b')
		printf("pb\n");
	return (y);
}
