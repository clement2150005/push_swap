/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolin <ccolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 08:42:33 by ccolin            #+#    #+#             */
/*   Updated: 2024/08/05 18:55:37 by ccolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**ft_set_array(int argc, char **argv)
{
	int		i;
	char	**array;

	i = 0;
	if (argc == 2)
		array = ft_split(argv[1], ' ');
	else
	{
		array = ft_calloc(argc, sizeof(char *));
		if (!array)
			return (NULL);
		while (i < argc - 1)
		{
			array[i] = ft_calloc(ft_strlen(argv[i + 1]) + 1, sizeof(char));
			if (!array[i])
				return (NULL);
			ft_strlcpy(array[i], argv[i + 1], ft_strlen(argv[i + 1]) + 1);
			i++;
			array[i] = NULL;
		}
	}
	return (array);
}

void	ft_set_min(t_stck *stck)
{
	int	i;

	i = 0;
	stck->min = stck->a[i];
	while ((size_t)i < stck->sze_a)
	{
		if (stck->a[i] < stck->min)
			stck->min = stck->a[i];
		i++;
	}
}

void	ft_ps_initialize(int argc, char **argv, t_stck *stck)
{
	int		i;
	int		arrsze;
	char	**array;

	arrsze = 0;
	array = ft_set_array(argc, argv);
	while (array[arrsze])
		arrsze++;
	stck->a = ft_calloc(arrsze + 1, sizeof(int));
	if (stck->a == NULL)
		return ;
	stck->b = ft_calloc(arrsze + 1, sizeof(int));
	if (stck->b == NULL)
		return ;
	i = 0;
	while (i < arrsze)
	{
		stck->a[i] = (int)ft_char_to_long(array[i]);
		i++;
	}
	ft_freedoublearray(array);
	stck->sze_a = arrsze;
	stck->sze_b = 0;
	ft_set_min(stck);
}
