/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   targets.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolin <ccolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 17:33:58 by ccolin            #+#    #+#             */
/*   Updated: 2024/08/05 17:47:18 by ccolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	return (targets);
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
	return (targets);
}