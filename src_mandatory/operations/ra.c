/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuuki <tyuuki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 14:04:02 by tyuuki            #+#    #+#             */
/*   Updated: 2022/02/09 16:31:02 by tyuuki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include <stdio.h>

/* first elem in stack A becoming last */
void	ra(t_stacks **stack_a)
{
	t_stacks	*p_tmp;
	t_stacks	*tmp_l;
	t_stacks	*tmp_h;

	if (ft_lenlist(*stack_a) < 2)
		return ;
	tmp_h = *stack_a;
	tmp_l = ft_lastelem(*stack_a);
	p_tmp = (*stack_a)->next;
	tmp_l->next = tmp_h;
	tmp_h->next = NULL;
	*stack_a = p_tmp;
	write(1, "ra\n", 3);
}
