/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolin <ccolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 11:40:27 by ccolin            #+#    #+#             */
/*   Updated: 2024/07/27 16:36:48 by ccolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isduplicate(int *array, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (i <= size -1)
	{
		while (j <= size - 2)
		{
			if (array[i] == array[j++])
				return (1);
		}
		j = 0;
		i++;
	}
	return (0);
}

int	ft_isarg(int argc)
{
	if (argc <= 1)
		return (1);
	return (0);
}

int	ft_isnumber(char **array)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (array[i])
	{
		if (array[i][j] == '-')
		{
			j++;
			if (!array[i][j])
				return (1);
		}
		while (array[i][j])
		{
			if (!ft_isdigit((int)array[i][j]))
				return (1);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}

int	ft_islimits(char **array, int argc)
{
	int			i;
	long long	*intar;

	intar = malloc(sizeof(int) * (argc - 1));
	if (!intar)
		return (0);
	i = 0;
	if (ft_array_to_longlong(array, intar))
	{
		free(intar);
		return (1);
	}
	while (array[i])
	{
		if (intar[i] < INT_MIN || intar[i] > INT_MAX)
		{
			free(intar);
			return (1);
		}
		i++;
	}
	free(intar);
	return (0);
}

int	ft_error_check(int argc, char **argv)
{
	char	**array;

	array = ft_set_array(argc, argv);
	if (ft_isarg(argc))
	{
		ft_freedoublearray(array);
		ft_putstr_fd("Error", 2);
		return (1);
	}
	if (ft_isnumber(array))
	{
		ft_freedoublearray(array);
		ft_putstr_fd("Error", 2);
		return (1);
	}
	if (ft_islimits(array, argc))
	{
		ft_freedoublearray(array);
		ft_putstr_fd("Error", 2);
		return (1);
	}
	ft_freedoublearray(array);
	return (0);
}
