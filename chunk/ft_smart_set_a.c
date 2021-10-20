/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ra_or_rra.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvalton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 19:26:08 by rvalton           #+#    #+#             */
/*   Updated: 2021/10/20 17:36:09 by rvalton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_smart_set_a(t_elem *a, int *chunkt, int i)
{
	int		*tab;
	int		tsize;
	int		j;
	int		k;

	tab = ft_list_to_tab(a);
	tsize = ft_size_list(a);
	j = 0;
	while (tab[j] != chunkt[i + 1])
		j++;
	k = tsize - 1;
	while (tab[k] != chunkt[i + 1])
		k--;
	k = tsize - k;
	free(tab);
	if (j == 0 || k == 0)
		return (0);
	else if (j < k)
		return (1);
	else
		return (2);
}

/*int		ft_smart_set_a(t_elem *a, int *sort, int size, int i)
{
	int		*tab;
	int		tsize;
	int		j;
	int		k;
	int		l;

	tab = ft_list_to_tab(a);
	tsize = ft_size_list(a);
	l = 1;
	if (i == 0)
		l = 0;
	j = 0;
	while (tab[j] != sort[(i + 1) * (size / CHUNK) - l])
		j++;
	k = tsize - 1;
	while (tab[k] != sort[(i + 1) * (size / CHUNK) - l])
		k--;
	k = tsize - k;
	if (j == 0 || k == 0)
		return (0);
	else if (j < k)
		return (1);
	else
		return (2);
}*/
