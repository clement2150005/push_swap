/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolin <ccolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 11:23:52 by ccolin            #+#    #+#             */
/*   Updated: 2024/07/24 09:19:58 by ccolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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