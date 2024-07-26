/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolin <ccolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 13:51:56 by ccolin            #+#    #+#             */
/*   Updated: 2024/07/26 20:11:30 by ccolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_swap(int *a, size_t size)
{
	int	temp;

	if (size < 2)
		return (1);
	temp = a[0];
	a[0] = a[1];
	a[1] = temp;
	return (0);
}

int	*ft_push_top_element(int *a, int *b, int size_b)
{
	int	*new_b;
	int	i;
	int	j;

	i = 0;
	j = 1;
	new_b = malloc(sizeof(int) * size_b + 1);
	if (!new_b)
		return (NULL);
	new_b[0] = a[0];
	while (i < size_b)
		new_b[j++] = b[i++];
	free(b);
	return (new_b);
}

int	*ft_remove_first_element(int *a, int size_a)
{
	int	*new_a;
	int	i;
	int	j;

	i = 0;
	j = 1;
	new_a = malloc(sizeof(int) * size_a + 1);
	if (!new_a)
		return (NULL);
	while (j < size_a)
		new_a[i++] = a[j++];
	free(a);
	return (new_a);
}

void	ft_rotate(int *a, size_t b)
{
	int	i;
	int	temp;

	i = 0;
	temp = a[0];
	while (i <= (int)b)
	{
		a[i] = a[i + 1];
		i++;
	}
	a[i] = temp;
}

void	ft_rrotate(int *a, size_t b)
{
	int	i;
	int	temp;

	i = b - 1;
	temp = a[b];
	while (i <= 0)
	{
		a[i] = a[i - 1];
		i--;
	}
	a[i] = temp;
}
