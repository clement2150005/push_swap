/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolin <ccolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 09:35:56 by ccolin            #+#    #+#             */
/*   Updated: 2024/08/01 15:26:06 by ccolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include "libft.h"
# include "ft_printf.h"

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
	int		max;
	size_t	size_a;
	size_t	size_b;
}		t_stacks;

typedef struct target
{
	int	b;
	int	difference;
}		t_target;


void	print_stacks(t_stacks *stacks);


void		ft_ps_initialize(int argc, char **argv, t_stacks *stacks);
int			*ft_push_top_element(int *a, int *b, int size_b);
int			*ft_remove_first_element(int *a, int size_a);
void		ft_rotate_to_completion(t_stacks *stacks);
int			ft_error_check(int argc, char **argv);
char		**ft_set_array(int argc, char **argv);
int			ft_is_sorted(int *array, int size);
void		ft_set_min_max(t_stacks *stacks);
void		ft_freedoublearray(char **array);
int			ft_is_finished(t_stacks *stacks);
void		ft_free_stacks(t_stacks *stacks);
void		ft_simple_sort(t_stacks *stacks);
void		ft_push_swap(t_stacks *stacks);
int			ft_swap(int *a, size_t size);
void		ft_rrotate(int *a, size_t b);
int			ft_isduplicate(char **array);
void		ft_rotate(int *a, size_t b);
long long	ft_char_to_long(char *str);
int			ft_islimits(char **array);
int			ft_isnumber(char **array);
void		ft_rra(t_stacks *stacks);
void		ft_rrb(t_stacks *stacks);
void		ft_rrr(t_stacks *stacks);
int			ft_is_empty(int *array);
void		ft_ra(t_stacks *stacks);
void		ft_rb(t_stacks *stacks);
void		ft_rr(t_stacks *stacks);
void		ft_pa(t_stacks *stacks);
void		ft_pb(t_stacks *stacks);
int			ft_ss(t_stacks *stacks);
void		ft_sa(t_stacks *stacks);
void		ft_sb(t_stacks *stacks);


#endif