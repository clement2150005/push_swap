/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolin <ccolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 09:35:56 by ccolin            #+#    #+#             */
/*   Updated: 2024/07/23 14:21:24 by ccolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>

typedef struct stacks
{
	int		*a;
	int		*b;
	size_t	size_a;
	size_t	size_b;
}		t_stacks;

int	ft_ss(int *a, size_t size_a, int *b, size_t size_b);
int	ft_swap(int *a, size_t size);
int	sa(t_stacks *stacks);
int	sb(t_stacks *stacks);

#endif