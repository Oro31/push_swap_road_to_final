/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chunk.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvalton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 19:54:08 by rvalton           #+#    #+#             */
/*   Updated: 2021/10/20 17:25:43 by rvalton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_is_chunk(t_elem *list, int *chunkt, int i)
{
	t_elem	*tmp;
	int		m;

	if (list == NULL)
		return (0);
	tmp = list;
	m = 0;
	if (i == CHUNK - 1)
		m = 1;
	while (tmp)
	{
		if (tmp->val >= chunkt[i] && tmp->val < chunkt[i + 1] + m)
			return (1);
		tmp = tmp->nxt;
	}
	return (0);
}

int		*ft_get_chunkt(t_elem *a)
{
	int		*chunkt;
	int		*sort;
	int		size;
	int		i;

	sort = ft_list_to_tab(a);
	size = ft_size_list(a);
	sort = ft_sort(sort, size);
	chunkt = malloc(sizeof(int) * (CHUNK + 1));
	chunkt[0] = sort[0];
	chunkt[CHUNK] = sort[size - 1];
	i = 0;
	while (++i < CHUNK)
		chunkt[i] = sort[i * (size / CHUNK)];
	free(sort);
	return (chunkt);
}

/*int		ft_is_chunk(int c, t_elem *list)
{
	t_elem	*tmp;

	if (list == NULL)
		return (0);
	tmp = list;
	while (tmp->val > c && tmp->nxt)
		tmp = tmp->nxt;
	if (tmp->val < c)
		return (1);
	return (0);
}

int		*ft_get_chunk(int n, int size, int *sorted)
{
	int		*chunk;
	int		alpha;
	int		i;

	chunk = malloc(sizeof(int) * (n + 1));
	if (!chunk)
		return (0);
	alpha = size / (n + 1);
	i = -1;
	while (++i < n)
		chunk[i] = sorted[alpha * (i + 1)];
	chunk[n] = sorted[size - 1] + 1;
	return (chunk);
}

void	ft_chunk_a(t_elem **a, t_elem **b, int *chunk, int lastchunk)
{
	t_elem	*tmp;
	int		i;

	tmp = *a;
	i = 0;
	while (ft_is_chunk(chunk[lastchunk], *a))
	{
		while (ft_is_chunk(chunk[i], *a))
		{
			if (tmp->val < chunk[i])
			{
				if (ft_is_min(*b, tmp->val))
					*b = ft_set_min_before_pb(*b, tmp->val);
				else
					*b = ft_set_inter_before_pb(*b, tmp->val);
				*b = ft_push_x_to_y(a, *b, 'b');
				tmp = *a;
			}
			else
			{
				*a = ft_ra_or_rra(*a, chunk[i]);
				tmp = *a;
			}
		}
		i++;
	}
}*/
