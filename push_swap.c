/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolin <ccolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 11:23:52 by ccolin            #+#    #+#             */
/*   Updated: 2024/08/01 18:18:56 by ccolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_target(int a, int *b, size_t size)
{
	int	i;
	int	lowest_diff;
	int	new_diff;
	int	result;

	i = 0;
	lowest_diff = a - b[i];
	if (lowest_diff < 0)
		lowest_diff = - lowest_diff;
	result = 0;
	i++;
	while (i < (int)size)
	{
		new_diff = a - b[i];
		if (new_diff < 0)
		new_diff = - new_diff;
		if (new_diff < lowest_diff)
		{
			lowest_diff = new_diff;
			result = i;
		}
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

int	*ft_find_targets(t_stacks *stacks)
{
	int	*targets;
	int	i;

	i = 0;
	targets = malloc(sizeof(int) * stacks->size_a - 1);
	if (!targets)
		return (0);
	while (i < (int)stacks->size_a)
	{
		targets[i] = ft_target(stacks->a[i], stacks->b, stacks->size_b);
		i++;
	}
	return (targets);
}

int	*ft_push_cost(int *targets, t_stacks *stacks)
{
	
}

void	ft_pushsort_to_b(t_stacks *stacks)
{
	int	*target;

	target = malloc(sizeof(int) * 3);
	if (!target)
		return (NULL);
	PB
	PB
	if (stacks->b[0] < stacks->b[1])
		RA

}

// void	ft_pushsort_to_a(t_stacks *stacks)
// {

// }

void	ft_simple_sort(t_stacks *stacks)
{
	if (stacks->a[0] < stacks->a[1] && stacks->a[1] < stacks->a[2])
		return ;
	if (stacks->a[0] < stacks->a[1] && stacks->a[1] > stacks->a[2])
	{
		RRA
		SA
	}
	if (stacks->a[0] > stacks->a[1] && stacks->a[0] > stacks->a[2])
		RA
	if (stacks->a[0] > stacks->a[1] && stacks->a[1] > stacks->a[2])
	{
		SA
		RRA
	}
	if (stacks->a[0] > stacks->a[1] && stacks->a[1] < stacks->a[2])
		SA
	if ((stacks->a[0] < stacks->a[1] && stacks->a[1] > stacks->a[2])\
	 && stacks->size_a > 2)
		RRA
}

void	ft_rotate_to_completion(t_stacks *stacks)
{
	int	min_position;

	min_position = 0;
	while (stacks->min != stacks->a[min_position])
		min_position++;
	while (stacks->a[0] != stacks->min)
	{
		if (min_position < (int)stacks->size_a / 2)
			RA
		if (min_position > (int)stacks->size_a / 2)
			RRA
		else
			RA
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
	// while (stacks-> size_a > 3)
		ft_pushsort_to_b(stacks);
	// ft_simple_sort(stacks);
	// while (stacks->size_b > 0)
	// 	ft_pushsort_to_a(&stacks);
	// ft_rotate_to_completion(stacks);
}