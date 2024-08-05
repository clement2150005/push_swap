/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolin <ccolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 09:35:56 by ccolin            #+#    #+#             */
/*   Updated: 2024/08/05 18:00:10 by ccolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include "libft.h"
# include "ft_printf.h"

# define ABSS(x) ((x) < 0 ? -(x) : (x))

# define SA ft_sa(stacks);
# define SB ft_sb(stacks);
# define SS ft_ss(stacks);
# define PA ft_pa(stacks);
# define PB ft_pb(stacks);
# define RA ft_ra(stacks);
# define RB ft_rb(stacks);
# define RR ft_rr(stacks);
# define RRA ft_rra(stacks);
# define RRB ft_rrb(stacks);
# define RRR ft_rrr(stacks);

typedef struct stacks
{
	int		*a;
	int		*b;
	int		min;
	size_t	size_a;
	size_t	size_b;
}		t_stacks;

int	*ft_find_targets(int *a, int *b, size_t size_a, size_t size_b);
int	ft_is_b_higher_than_a(int a, int *b, size_t size);
void	ft_push_swap(t_stacks *stacks);
void	ft_both_up(t_stacks *stacks, int *target);
void	ft_startpush(t_stacks *stacks);
int	*ft_push_cost(int *targets, size_t size_a, size_t size_b, int *target);
int	ft_newcost3(int new_cost, int *target, int i, int *targets);
void	ft_rrr(t_stacks *stacks);
void	ft_rr(t_stacks *stacks);
void	ft_pb(t_stacks *stacks);
void	ft_rrotate(int *a, size_t b);
int	ft_is_sorted(int *array, int size);
void	ft_ps_initialize(int argc, char **argv, t_stacks *stacks);
int	ft_error_check(int argc, char **argv);
void	ft_freedoublearray(char **array);
char	**ft_set_array(int argc, char **argv);
long long	ft_char_to_long(char *str);
void	ft_free_stacks(t_stacks *stacks);
int	ft_swap(int *a, size_t size);
int	*ft_push_top_element(int *a, int *b, int size_b);
int	*ft_remove_first_element(int *a, int size_a);
void	ft_rotate(int *a, size_t b);
int	ft_cost_both_up(int a, int b);
int	ft_cost_both_down(int a, int b, size_t size_a, size_t size_b);
int	ft_cost_up_down(int a, int b, size_t size_a, size_t size_b);
int	ft_newcost1(int new_cost, int *target, int i, int *targets);
int	ft_newcost2(int new_cost, int *target, int i, int *targets);
void	ft_sa(t_stacks *stacks);
void	ft_sb(t_stacks *stacks);
int	ft_ss(t_stacks *stacks);
void	ft_pa(t_stacks *stacks);
void	ft_ra(t_stacks *stacks);
void	ft_rb(t_stacks *stacks);
void	ft_rr(t_stacks *stacks);
void	ft_rra(t_stacks *stacks);
void	ft_rrb(t_stacks *stacks);
int	*ft_find_targetsb(int *a, int *b, size_t size_a, size_t size_b);
void	ft_both_down(t_stacks *stacks, int *target);
void	ft_up_downb(t_stacks *stacks, int *target);
void	ft_both_upb(t_stacks *stacks, int *target);
void	ft_both_downb(t_stacks *stacks, int *target);
void	ft_up_down(t_stacks *stacks, int *target);
int	ft_max(int *b, size_t size);
int	ft_min(int *b, size_t size);
int	ft_is_b_lower_than_a(int a, int *b, size_t size);

#endif