/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolin <ccolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 09:35:56 by ccolin            #+#    #+#             */
/*   Updated: 2024/07/23 19:55:08 by ccolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>

typedef struct stacks
{
	int		*a;
	int		*b;
	size_t	size_a;
	size_t	size_b;
}		t_stacks;

int	*ft_push_top_element(int *a, int *b, int size_b);
int	ft_ss(int *a, size_t size_a, int *b, size_t size_b);
int	*ft_remove_first_element(int *a, int size_a);
int	ft_swap(int *a, size_t size);
int	ft_pa(t_stacks *stacks);
int	ft_pb(t_stacks *stacks);
int	sa(t_stacks *stacks);
int	sb(t_stacks *stacks);

#endif