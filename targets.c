/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trgts.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolin <ccolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 17:33:58 by ccolin            #+#    #+#             */
/*   Updated: 2024/08/05 18:47:54 by ccolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_trgt(int a, int *b, size_t sze)
{
	int	result;
	int	i;

	i = 0;
	if (!ft_is_b_lower_than_a(a, b, sze))
		return (ft_max(b, sze));
	while (i < (int)sze && a < b[i])
		i++;
	result = i;
	if (i < (int)sze)
		i++;
	while (i < (int)sze)
	{
		if (b[i] < a && b[i] > b[result])
			result = i;
		i++;
	}
	return (result);
}

int	ft_trgtb(int a, int *b, size_t sze)
{
	int	result;
	int	i;

	i = 0;
	if (!ft_is_b_higher_than_a(a, b, sze))
		return (ft_min(b, sze));
	while (i < (int)sze && a > b[i])
		i++;
	result = i;
	if (i < (int)sze)
		i++;
	while (i < (int)sze)
	{
		if (b[i] > a && b[i] < b[result])
			result = i;
		i++;
	}
	return (result);
}

int	*ft_find_trgtsb(int *a, int *b, size_t sze_a, size_t sze_b)
{
	int	*trgts;
	int	i;

	i = 0;
	trgts = ft_calloc(sze_a, sizeof(int));
	if (!trgts)
		return (0);
	while (i < (int)sze_a)
	{
		trgts[i] = ft_trgtb(a[i], b, sze_b);
		i++;
	}
	return (trgts);
}

int	*ft_find_trgts(int *a, int *b, size_t sze_a, size_t sze_b)
{
	int	*trgts;
	int	i;

	i = 0;
	trgts = ft_calloc(sze_a, sizeof(int));
	if (!trgts)
		return (0);
	while (i < (int)sze_a)
	{
		trgts[i] = ft_trgt(a[i], b, sze_b);
		i++;
	}
	return (trgts);
}
