/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trgts_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolin <ccolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 17:36:46 by ccolin            #+#    #+#             */
/*   Updated: 2024/08/05 18:47:55 by ccolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_max(int *b, size_t sze)
{
	int	i;
	int	max;
	int	result;

	i = 0;
	max = b[i];
	result = i;
	while (++i < (int)sze)
	{
		if (max < b[i])
		{
			max = b[i];
			result = i;
		}
	}
	return (result);
}

int	ft_min(int *b, size_t sze)
{
	int	i;
	int	min;
	int	result;

	i = 0;
	min = b[i];
	result = i;
	while (++i < (int)sze)
	{
		if (min > b[i])
		{
			min = b[i];
			result = i;
		}
	}
	return (result);
}

int	ft_is_b_lower_than_a(int a, int *b, size_t sze)
{
	int	i;

	i = 0;
	while (i < (int)sze)
	{
		if (a > b[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_is_b_higher_than_a(int a, int *b, size_t sze)
{
	int	i;

	i = 0;
	while (i < (int)sze)
	{
		if (a < b[i])
			return (1);
		i++;
	}
	return (0);
}
