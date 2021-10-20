/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvalton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 11:32:58 by rvalton           #+#    #+#             */
/*   Updated: 2021/10/20 17:50:02 by rvalton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# define CHUNK 15 

typedef struct	s_elem t_elem;

struct	s_elem
{
	int			val;
	t_elem		*nxt;
};

t_elem	*ft_hadd_tolist(t_elem *list, int value);
t_elem	*ft_eadd_tolist(t_elem *list, int value);
t_elem	*ft_hdelete_inlist(t_elem *list);
t_elem	*ft_edelete_inlist(t_elem *list);
void	ft_print_list(t_elem *list);

int		ft_size_list(t_elem *list);

t_elem	*ft_swap(t_elem *list, char c);

t_elem	*ft_rotate(t_elem *list, char c);

t_elem	*ft_push_x_to_y(t_elem **x, t_elem *y, char c);

t_elem	*ft_reverse_rotate(t_elem *list, char c);

void	ft_push_swap(t_elem **a, t_elem **b);

void	ft_three(t_elem **a);

int		ft_smart_rotate_a(t_elem *a, int *chunkt, int i);
int		ft_smart_rotate_a_max(t_elem *a, int *chunkt);

int		ft_smart_set_a(t_elem *a, int *chunkt, int i);

int		ft_smart_rotate_b(t_elem *b, int *sort, int size);

int		ft_is_chunk(t_elem *list, int *chunkt, int i);
int		*ft_get_chunkt(t_elem *a);

int		ft_is_list_sort(t_elem *list);
int		ft_is_tab_sort(int *tab, int size);
int		*ft_list_to_tab(t_elem *list);
int		*ft_sort(int *tab, int size);

void	ft_copy_list(t_elem *b, t_elem **copy);

#endif
