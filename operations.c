/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolin <ccolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 10:14:34 by ccolin            #+#    #+#             */
/*   Updated: 2024/07/23 14:18:14 by ccolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* This function performs the "sa" operation in the push_swap program, which 
swaps the first two elements of stack A if there are at least two elements. If 
the swap is successful, it prints "sa" and returns 0. Otherwise, it returns 1.
-
この関数は、push_swapプログラムにおける "sa" 操作を実行し、要素が2つ以上ある場合にスタックA
の最初の2つの要素を交換します。交換が成功すると "sa" を表示し、0を返します。そうでない場合は1
を返します。*/
int	sa(t_stacks *stacks)
{
	if (ft_swap(stacks-> a, stacks-> size_a) == 0)
	{
		ft_printf("sa\n");
		return (0);
	}
	return (1);
}

/* This function performs the "sb" operation in the push_swap program, which 
swaps the first two elements of stack B if there are at least two elements. If 
the swap is successful, it prints "sb" and returns 0. Otherwise, it returns 1.
-
この関数は、push_swapプログラムにおける "sb" 操作を実行し、要素が2つ以上ある場合にスタックB
の最初の2つの要素を交換します。交換が成功すると "sb" を表示し、0を返します。そうでない場合は1
を返します。*/
int	sb(t_stacks *stacks)
{
	if (ft_swap(stacks-> b, stacks-> size_b) == 0)
	{
		ft_printf("sb\n");
		return (0);
	}
	return (1);
}

/* This function performs the "ss" operation in the push_swap program, which 
simultaneously swaps the first two elements of both stack A and stack B if there 
are at least two elements in each stack. If the swap is successful for both 
stacks, it prints "ss" and returns 0. Otherwise, it returns 1.
-
この関数は、push_swapプログラムにおける "ss" 操作を実行し、両方のスタックAおよびスタックBにおいて
要素がそれぞれ2つ以上ある場合に同時に最初の2つの要素を交換します。交換が両方のスタックで成功すると
"ss" を表示し、0を返します。そうでない場合は1を返します。*/
int	ft_ss(int *a, size_t size_a, int *b, size_t size_b)
{
	int	temp;

	if (size_a < 2 || size_b < 2)
		return (1);
	temp = a[0];
	a[0] = a[1];
	a[1] = temp;
	temp = b[0];
	b[0] = b[1];
	b[1] = temp;
	ft_printf("ss\n");
	return (0);
}
