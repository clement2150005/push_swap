/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolin <ccolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 10:14:34 by ccolin            #+#    #+#             */
/*   Updated: 2024/07/23 19:56:30 by ccolin           ###   ########.fr       */
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
int	ft_ss(t_stacks *stacks)
{
	int	temp;

	if (stacks->size_a < 2 || stacks->size_b < 2)
		return (1);
	temp = stacks->a[0];
	stacks->a[0] = stacks->a[1];
	stacks->a[1] = temp;
	temp = stacks->b[0];
	stacks->b[0] = stacks->b[1];
	stacks->b[1] = temp;
	ft_printf("ss\n");
	return (0);
}

int	ft_pa(t_stacks *stacks)
{
	stacks->a = ft_push_top_element(stacks->b, stacks->a, stacks->size_a);
	stacks->b = ft_remove_first_element(stacks->b, stacks-> size_b);
	stacks->size_b--;
	stacks->size_a++;
	return (0);
}

int	ft_pb(t_stacks *stacks)
{
	stacks->b = ft_push_top_element(stacks->a, stacks->b, stacks->size_b);
	stacks->a = ft_remove_first_element(stacks->b, stacks-> size_a);
	stacks->size_a--;
	stacks->size_b++;
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
int main()
{
    t_stacks stacks;
    stacks.size_a = 3;
    stacks.size_b = 3;
    stacks.a = (int *)malloc(stacks.size_a * sizeof(int));
    stacks.b = (int *)malloc(stacks.size_b * sizeof(int));

    stacks.a[0] = 1;
    stacks.a[1] = 2;
    stacks.a[2] = 3;

    stacks.b[0] = 4;
    stacks.b[1] = 5;
    stacks.b[2] = 6;

    printf("Before ft_ss: a = [%d, %d, %d], b = [%d, %d, %d]\n", stacks.a[0], stacks.a[1], stacks.a[2], stacks.b[0], stacks.b[1], stacks.b[2]);
    ft_ss(stacks.a, stacks.size_a, stacks.b, stacks.size_b);
    printf("After ft_ss: a = [%d, %d, %d], b = [%d, %d, %d]\n", stacks.a[0], stacks.a[1], stacks.a[2], stacks.b[0], stacks.b[1], stacks.b[2]);

    printf("Before ft_pa: a = [%d, %d, %d], b = [%d, %d, %d]\n", stacks.a[0], stacks.a[1], stacks.a[2], stacks.b[0], stacks.b[1], stacks.b[2]);
    ft_pa(&stacks);
    printf("After ft_pa: a = [%d, %d, %d, %d], b = [%d, %d]\n", stacks.a[0], stacks.a[1], stacks.a[2], stacks.a[3], stacks.b[0], stacks.b[1]);

    printf("Before ft_pb: a = [%d, %d, %d, %d], b = [%d, %d]\n", stacks.a[0], stacks.a[1], stacks.a[2], stacks.a[3], stacks.b[0], stacks.b[1]);
    ft_pb(&stacks);
    printf("After ft_pb: a = [%d, %d, %d], b = [%d, %d, %d]\n", stacks.a[0], stacks.a[1], stacks.a[2], stacks.b[0], stacks.b[1], stacks.b[2]);

    printf("Before sa: a = [%d, %d, %d], b = [%d, %d, %d]\n", stacks.a[0], stacks.a[1], stacks.a[2], stacks.b[0], stacks.b[1], stacks.b[2]);
    sa(&stacks);
    printf("After sa: a = [%d, %d, %d], b = [%d, %d, %d]\n", stacks.a[0], stacks.a[1], stacks.a[2], stacks.b[0], stacks.b[1], stacks.b[2]);

    printf("Before sb: a = [%d, %d, %d], b = [%d, %d, %d]\n", stacks.a[0], stacks.a[1], stacks.a[2], stacks.b[0], stacks.b[1], stacks.b[2]);
    sb(&stacks);
    printf("After sb: a = [%d, %d, %d], b = [%d, %d, %d]\n", stacks.a[0], stacks.a[1], stacks.a[2], stacks.b[0], stacks.b[1], stacks.b[2]);

    free(stacks.a);
    free(stacks.b);

    return 0;
}