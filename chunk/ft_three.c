/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_three.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvalton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 18:03:27 by rvalton           #+#    #+#             */
/*   Updated: 2021/10/14 18:15:26 by rvalton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_three(t_elem **a)
{
	int		*tab;

	tab = ft_list_to_tab(*a);
	if (tab[0] > tab[1] && tab[0] < tab[2] && tab[1] < tab[2])
		*a = ft_swap(*a, 'a');
	else if (tab[0] > tab[1] && tab[1] > tab[2])
	{
		*a = ft_swap(*a, 'a');
		*a = ft_reverse_rotate(*a, 'a');
	}
	else if (tab[0] > tab[1] && tab[0] > tab[2] && tab[1] < tab[2])
		*a = ft_rotate(*a, 'a');
	else if (tab[0] < tab[1] && tab[0] > tab[2] && tab[1] > tab[2])
	{
		*a = ft_swap(*a, 'a');
		*a = ft_rotate(*a, 'a');
	}
	else if (tab[0] < tab[1] && tab[0] > tab[2] && tab[1] > tab[2])
		*a = ft_reverse_rotate(*a, 'a');
}
