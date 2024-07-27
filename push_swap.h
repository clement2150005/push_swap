/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolin <ccolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 09:35:56 by ccolin            #+#    #+#             */
/*   Updated: 2024/07/27 11:04:58 by ccolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include "libft.h"
# include "ft_printf.h"

typedef struct stacks
{
	int		*a;
	int		*b;
	int		min;
	int		max;
	size_t	size_a;
	size_t	size_b;
}		t_stacks;

void	ft_ps_initialize(int argc, char **argv, t_stacks *stacks);
int		*ft_push_top_element(int *a, int *b, int size_b);
int		*ft_remove_first_element(int *a, int size_a);
int		ft_swap(int *a, size_t size);
void	ft_rrotate(int *a, size_t b);
void	ft_rotate(int *a, size_t b);
void	ft_rra(t_stacks *stacks);
void	ft_rrb(t_stacks *stacks);
void	ft_rrr(t_stacks *stacks);
void	ft_ra(t_stacks *stacks);
void	ft_rb(t_stacks *stacks);
void	ft_rr(t_stacks *stacks);
void	ft_pa(t_stacks *stacks);
void	ft_pb(t_stacks *stacks);
int		ft_ss(t_stacks *stacks);
void	ft_sa(t_stacks *stacks);
void	ft_sb(t_stacks *stacks);

#endif