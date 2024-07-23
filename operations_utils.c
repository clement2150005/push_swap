/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolin <ccolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 13:51:56 by ccolin            #+#    #+#             */
/*   Updated: 2024/07/23 14:21:29 by ccolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* This function swaps the first two elements of the given array if the array 
contains at least two elements. If the swap is successful, it returns 0. 
Otherwise, it returns 1.
-
この関数は、配列に要素が2つ以上ある場合に、指定された配列の最初の2つの要素を交換します。交換が
成功すると0を返します。そうでない場合は1を返します。*/
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
