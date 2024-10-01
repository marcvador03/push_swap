/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfleury <mfleury@student.42barcelona.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 13:26:16 by mfleury           #+#    #+#             */
/*   Updated: 2024/10/01 13:04:02 by mfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_spec	fill_specs(t_stack *stk, t_stack *target)
{
	t_spec	s;

	s.size = stack_size(stk);
	s.rel_pos = search_pos(target, stk);
	stk = stk->head;
	s.min = stk->value;
	s.max = stk->value;
	s.n_min = stk->n_value;
	s.n_max = stk->n_value;
	while (stk != NULL)
	{
		if (s.min > stk->value)
			s.min = stk->value;
		if (s.n_min > stk->n_value)
			s.n_min = stk->n_value;
		if (s.max < stk->value)
			s.max = stk->value;
		if (s.n_max < stk->n_value)
			s.n_max = stk->n_value;
		stk = stk->next;
	}
	s.med = s.size / 2;
	return (s);
}

int	is_sorted(t_stack *stk)
{
	int		prev;
	t_stack	*head;

	head = stk;
	prev = stk->value;
	while (stk != NULL)
	{
		if (prev <= stk->value)
		{
			prev = stk->value;
			stk = stk->next;
		}
		else
			return (0) ;
	}
	stk = head;
	return (1);
}

int	almost_sorted(t_stack stk)
{
	t_stack	head;
	t_stack	tmp;
	t_spec	s;

	head = stk;
	s = fill_specs(&stk, NULL);
	while (stk.value != s.min)
	{
		if (stk.next == NULL)
			stk.next = &head;
		tmp = stk;
		stk = *stk.next;
	}
	tmp.next = NULL;
	return (is_sorted(&stk));
}

int	min(int x, int y)
{
	if (x > y)
		return (y);
	else
		return (x);
}

int	max(int x, int y)
{
	if (x < y)
		return (y);
	else
		return (x);
}
