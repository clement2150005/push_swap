/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolin <ccolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 09:35:56 by ccolin            #+#    #+#             */
/*   Updated: 2024/08/05 19:28:32 by ccolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include "libft.h"
# include "ft_printf.h"

typedef struct stck
{
	int		*a;
	int		*b;
	int		min;
	size_t	sze_a;
	size_t	sze_b;
}		t_stck;

void		ft_pa(t_stck *stck);
void		ft_ra(t_stck *stck);
void		ft_rb(t_stck *stck);
void		ft_rr(t_stck *stck);
void		ft_rrb(t_stck *stck);
void		ft_startpush(t_stck *stck);
void		ft_free_stck(t_stck *stck);
long long	ft_char_to_long(char *str);
int			ft_max(int *b, size_t sze);
void		ft_rrotate(int *a, size_t b);
int			ft_cost_both_up(int a, int b);
void		ft_up_down(t_stck *stck, int *trgt);
void		ft_both_upb(t_stck *stck, int *trgt);
int			ft_error_check(int argc, char **argv);
void		ft_both_down(t_stck *stck, int *trgt);
void		ft_both_downb(t_stck *stck, int *trgt);
void		ft_costplus_indexminus(int *cost, int *index);
int			ft_is_b_higher_than_a(int a, int *b, size_t sze);
int			ft_newcost3(int new_cost, int *trgt, int i, int *trgts);
int			ft_newcost1(int new_cost, int *trgt, int i, int *trgts);
int			ft_cost_both_down(int a, int b, size_t sze_a, size_t sze_b);
int			*ft_find_trgtsb(int *a, int *b, size_t sze_a, size_t sze_b);
int			*ft_push_cost(int *trgts, size_t sze_a, size_t sze_b, int *trgt);
int			*ft_find_trgts(int *a, int *b, size_t sze_a, size_t sze_b);
int			ft_cost_up_down(int a, int b, size_t sze_a, size_t sze_b);
int			ft_newcost2(int new_cost, int *trgt, int i, int *trgts);
void		ft_ps_initialize(int argc, char **argv, t_stck *stck);
int			*ft_push_top_element(int *a, int *b, int sze_b);
int			ft_is_b_lower_than_a(int a, int *b, size_t sze);
void		ft_costplus_indexplus(int *cost, int *index);
int			*ft_remove_first_element(int *a, int sze_a);
char		**ft_set_array(int argc, char **argv);
void		ft_up_downb(t_stck *stck, int *trgt);
void		ft_both_up(t_stck *stck, int *trgt);
int			ft_is_sorted(int *array, int sze);
void		ft_freedoublearray(char **array);
int			ft_swap(int *a, size_t sze);
void		ft_rotate(int *a, size_t b);
void		ft_push_swap(t_stck *stck);
int			ft_min(int *b, size_t sze);
void		ft_rra(t_stck *stck);
void		ft_rrr(t_stck *stck);
void		ft_rr(t_stck *stck);
void		ft_pb(t_stck *stck);
void		ft_sa(t_stck *stck);

#endif