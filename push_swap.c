/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolin <ccolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 11:23:52 by ccolin            #+#    #+#             */
/*   Updated: 2024/07/27 11:11:33 by ccolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "push_swap.h"

int	main(int argc, char *argv[]) {
	t_stacks	stacks;

	stacks.a = malloc((argc - 1) * sizeof(int));
	stacks.b = malloc((argc - 1) * sizeof(int));
	if (!stacks.a || !stacks.b) {
		perror("Failed to allocate memory");
		return (EXIT_FAILURE);
	}
	ft_ps_initialize(argc, argv, &stacks);

	printf("Stack A (size: %zu): ", stacks.size_a);
	for (size_t i = 0; i < stacks.size_a; i++) {
		printf("%d ", stacks.a[i]);
	}
	printf("\n");

	printf("Stack B (size: %zu): ", stacks.size_b);
	for (size_t i = 0; i < stacks.size_b; i++) {
		printf("%d ", stacks.b[i]);
	}
	printf("\n");

	printf("Min value: %d\n", stacks.min);
	printf("Max value: %d\n", stacks.max);

	free(stacks.a);
	free(stacks.b);
	return (0);
}
