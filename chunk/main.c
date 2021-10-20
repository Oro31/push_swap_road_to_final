/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvalton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 19:48:39 by rvalton           #+#    #+#             */
/*   Updated: 2021/10/20 17:47:45 by rvalton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_elem	*a;
	t_elem	*b;
	int		i;

	a = malloc(sizeof(t_elem));
	if (!a)
		return (0);
	a = NULL;
	b = malloc(sizeof(t_elem));
	if (!b)
		return (0);
	b = NULL;
	i = 0;
	while (++i < argc)
		a = ft_eadd_tolist(a, atoi(argv[i]));
	ft_push_swap(&a, &b);
	ft_print_list(a);
	return (0);
}
