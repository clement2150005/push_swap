/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolin <ccolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 11:23:52 by ccolin            #+#    #+#             */
/*   Updated: 2024/08/05 15:53:57 by ccolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_max(int *b, size_t size)
{
	int i;
	int	max;
	int	result;

	i = 0;
	max = b[i];
	result = i;
	while (++i < (int)size)
		if (max < b[i])
		{
			max = b[i];
			result = i;
		}
	return (result);
}

int	ft_min(int *b, size_t size)
{
	int i;
	int	min;
	int	result;

	i = 0;
	min = b[i];
	result = i;
	while (++i < (int)size)
		if (min > b[i])
		{
			min = b[i];
			result = i;
		}
	return (result);
}

int	ft_is_b_lower_than_a(int a, int *b, size_t size)
{
	int	i;

	i = 0;
	while (i < (int)size)
	{
		if (a > b[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_is_b_higher_than_a(int a, int *b, size_t size)
{
	int	i;

	i = 0;
	while (i < (int)size)
	{
		if (a < b[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_target(int a, int *b, size_t size)
{
	int	result;
	int	i;

	i = 0;
	if (!ft_is_b_lower_than_a(a, b, size))
		return (ft_max(b, size));
	while (i < (int)size && a < b[i])
		i++;
	result = i;
	if (i < (int)size)
		i++;
	while (i < (int)size)
	{
		if (b[i] < a && b[i] > b[result])
		result = i;
		i++;
	}
	return (result);
}

int	ft_targetb(int a, int *b, size_t size)
{
	int	result;
	int	i;

	i = 0;
	if (!ft_is_b_higher_than_a(a, b, size))
		return (ft_min(b, size));
	while (i < (int)size && a > b[i])
		i++;
	result = i;
	if (i < (int)size)
		i++;
	while (i < (int)size)
	{
		if (b[i] > a && b[i] < b[result])
		result = i;
		i++;
	}
	return (result);
}

// void	ft_push_target(int *target, t_stacks *stacks);
// {
	
// }

void	print_array(int *array, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		printf("%d", array[i]);
		if (i < size - 1)
			printf("\n");
		i++;
	}
	printf("\n");
}

int	*ft_find_targets(int *a, int *b, size_t size_a, size_t size_b)
{
	int	*targets;
	int	i;

	i = 0;
	targets = ft_calloc(size_a, sizeof(int));
	if (!targets)
		return (0);
	while (i < (int)size_a)
	{
		targets[i] = ft_target(a[i], b, size_b);
		i++;
	}
	// printf("targets\n");
	// print_array(targets,  stacks->size_a);
	return (targets);
}

int	*ft_find_targetsb(int *a, int *b, size_t size_a, size_t size_b)
{
	int	*targets;
	int	i;

	i = 0;
	targets = ft_calloc(size_a, sizeof(int));
	if (!targets)
		return (0);
	while (i < (int)size_a)
	{
		targets[i] = ft_targetb(a[i], b, size_b);
		i++;
	}
	// printf("targets\n");
	// print_array(targets,  stacks->size_a);
	return (targets);
}

int	ft_cost_both_up(int a, int b)
{
	int	cost;

	cost = 0;
	while (a > 0 && b > 0)
	{
		a--;
		b--;
		cost++;
	}
	if (a != 0)
		while (a != 0)
		{
			a--;
			cost++;
		}
	if (b != 0)
		while (b != 0)
		{
			b--;
			cost++;
		}
	return (cost);
}

int	ft_cost_both_down(int a, int b, size_t size_a, size_t size_b)
{
	int	cost;

	cost = 0;
	while (a < (int)size_a + 1 && b < (int)size_b + 1)
	{
		a++;
		b++;
		cost++;
	}
	if (a != (int)size_a + 1)
		while (a != (int)size_a + 1)
		{
			a++;
			cost++;
		}
	if (b != (int)size_b + 1)
		while (b != (int)size_b + 1)
		{
			b++;
			cost++;
		}
	return (cost);
}

int	ft_cost_up_down(int a, int b, size_t size_a, size_t size_b)
{
	int	cost;

	cost = 0;
	if (a > ((int)size_a / 2))
		while (a < (int)size_a + 1)
		{
			a++;
			cost++;
		}
	if (a <= ((int)size_a / 2))
		while (a > 0)
		{
			a--;
			cost++;
		}
	if (b > ((int)size_b / 2))
		while (b < (int)size_b + 1)
		{
			b++;
			cost++;
		}
	if (b <= ((int)size_b / 2))
		while (b > 0)
		{
			b--;
			cost++;
		}
	return (cost);
}

int	ft_newcost1(int new_cost, int *target, int i, int *targets)
{
	target[0] = i;
	target[1] = targets[i];
	target[2] = 1;
	return (new_cost);
}
int	ft_newcost2(int new_cost, int *target, int i, int *targets)
{
	target[0] = i;
	target[1] = targets[i];
	target[2] = 2;
	return (new_cost);
}

int	ft_newcost3(int new_cost, int *target, int i, int *targets)
{
	target[0] = i;
	target[1] = targets[i];
	target[2] = 3;
	return (new_cost);
}

int	*ft_push_cost(int *targets, size_t size_a, size_t size_b, int *target)
{
	int	cost;
	int	new_cost;
	int	i;

	i = 0;
	cost = ft_cost_up_down(i, targets[i], size_a, size_b);
	cost = ft_newcost1(cost, target, i, targets);
	while (i++ < (int)size_a - 1)
	{
		new_cost = ft_cost_up_down(i, targets[i], size_a, size_b);
		if (new_cost < cost)
			cost = ft_newcost1(new_cost, target, i, targets);
		new_cost = ft_cost_both_up(i, targets[i]);
		if (new_cost < cost)
			cost = ft_newcost2(new_cost, target, i, targets);
		new_cost = ft_cost_both_down(i, targets[i], size_a, size_b);
		if (new_cost < cost)
			cost = ft_newcost3(new_cost, target, i, targets);
	}
	return (target);
}

void	ft_up_down(t_stacks *stacks, int *target)
{
	int goal_a;
	int	goal_b;

	goal_a = stacks->a[target[0]];
	goal_b = stacks->b[target[1]];
	while (goal_a != stacks->a[0])
	{
		if (target[0] > (int)stacks->size_a / 2)
			RRA
		if (target[0] <= (int)stacks->size_a / 2)
			RA
	}
		while (goal_b != stacks->b[0])
	{
		if (target[1] > (int)stacks->size_b / 2)
			RRB
		if (target[1] <= (int)stacks->size_b / 2)
			RB
	}
	PB
}

void	ft_both_up(t_stacks *stacks, int *target)
{
	int goal_a;
	int	goal_b;

	goal_a = stacks->a[target[0]];
	goal_b = stacks->b[target[1]];
	while (goal_a != stacks->a[0] && goal_b != stacks->b[0])
		RR
	while (goal_a != stacks->a[0])
		RA
	while (goal_b != stacks->b[0])
		RB
	PB
}

void	ft_both_down(t_stacks *stacks, int *target)
{
	int goal_a;
	int	goal_b;

	goal_a = stacks->a[target[0]];
	goal_b = stacks->b[target[1]];
	while (goal_a != stacks->a[0] && goal_b != stacks->b[0])
		RRR
	while (goal_a != stacks->a[0])
		RRA
	while (goal_b != stacks->b[0])
		RRB
	PB
}

void	ft_up_downb(t_stacks *stacks, int *target)
{
	int goal_a;
	int	goal_b;

	goal_a = stacks->a[target[1]];
	goal_b = stacks->b[target[0]];
	while (goal_a != stacks->a[0])
	{
		if (target[1] > (int)stacks->size_a / 2)
			RRA
		if (target[1] <= (int)stacks->size_a / 2)
			RA
	}
		while (goal_b != stacks->b[0])
	{
		if (target[0] > (int)stacks->size_b / 2)
			RRB
		if (target[0] <= (int)stacks->size_b / 2)
			RB
	}
	PA
}

void	ft_both_upb(t_stacks *stacks, int *target)
{
	int goal_a;
	int	goal_b;

	goal_a = stacks->a[target[1]];
	goal_b = stacks->b[target[0]];
	while (goal_a != stacks->a[0] && goal_b != stacks->b[0])
		RR
	while (goal_a != stacks->a[0])
		RA
	while (goal_b != stacks->b[0])
		RB
	PA
}

void	ft_both_downb(t_stacks *stacks, int *target)
{
	int goal_a;
	int	goal_b;

	goal_a = stacks->a[target[1]];
	goal_b = stacks->b[target[0]];
	while (goal_a != stacks->a[0] && goal_b != stacks->a[0])
		RRR
	while (goal_a != stacks->a[0])
		RRA
	while (goal_b != stacks->b[0])
		RRB
	PA
}

void	ft_startpush(t_stacks *stacks)
{
	if (stacks->size_a == 4)
		PB
	else
		{
			PB
			PB
		}
}

void	ft_pushsort_to_b(t_stacks *stacks)
{
	int	*target;
	int	*targets;

	ft_startpush(stacks);
	while (stacks->size_a > 3)
	{
		targets = ft_find_targets(stacks->a, stacks->b, stacks->size_a, stacks->size_b);
		target = ft_calloc(3, sizeof(int));
		if (!target)
			return ;
		target = ft_push_cost(targets, stacks->size_a, stacks->size_b, target);
		if (target[2] == 1)
			ft_up_down(stacks, target);
		if (target[2] == 2)
			ft_both_up(stacks, target);
		if (target[2] == 3)
			ft_both_down(stacks, target);
		free(targets);
		free(target);
	}
}

void	ft_pushsort_to_a(t_stacks *stacks)
{
	int	*target;
	int	*targets;

	while (stacks->size_b > 0)
	{
		targets = ft_find_targetsb(stacks->b, stacks->a, stacks->size_b, stacks->size_a);
		target = ft_calloc(3, sizeof(int));
		if (!target)
			return ;
		target = ft_push_cost(targets, stacks->size_b, stacks->size_a, target);
		if (target[2] == 1)
			ft_up_downb(stacks, target);
		if (target[2] == 2)
			ft_both_upb(stacks, target);
		if (target[2] == 3)
			ft_both_downb(stacks, target);
		free(targets);
		free(target);
	}
}

void	ft_simple_sort_a(t_stacks *stacks)
{
	if (stacks->a[0] > stacks->a[1] && stacks->a[0] > stacks->a[2])
		RA
	if (stacks->a[1] > stacks->a[0] && stacks->a[1] > stacks->a[2])
		RRA
	if (stacks->a[0] > stacks->a[1])
		SA
}

void	ft_rotate_to_completion(t_stacks *stacks)
{
	int	min_position;

	min_position = 0;
	while (stacks->min != stacks->a[min_position])
		min_position++;
	while (stacks->a[0] != stacks->min)
	{
		if (min_position <= (int)stacks->size_a / 2)
			RA
		if (min_position > (int)stacks->size_a / 2)
			RRA
	}
}

void	ft_push_swap(t_stacks *stacks)
{
	if (stacks->size_a == 1)
		return ;
	if (stacks->size_a == 2)
	{
		if (stacks->a[0] > stacks->a[1])
			RA
		return ;
	}
	if (stacks->size_a == 3)
	{
		ft_simple_sort_a(stacks);
		return ;
	}
	ft_pushsort_to_b(stacks);
	ft_simple_sort_a(stacks);
	ft_pushsort_to_a(stacks);
	ft_rotate_to_completion(stacks);
}
