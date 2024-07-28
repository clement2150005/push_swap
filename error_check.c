/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolin <ccolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 11:40:27 by ccolin            #+#    #+#             */
/*   Updated: 2024/07/28 14:15:16 by ccolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isduplicate(char **array)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (array[j])
	{
		while (array[j])
		{
			if (ft_atoi((const char *)array[i]) == \
				ft_atoi((const char *)array[j]))
				return (1);
			j++;
		}
		i++;
		j = i + 1;
	}
	return (0);
}

int	ft_isnumber(char **array)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!array[i])
		return (1);
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

long long	ft_char_to_long(char *str)
{
	int			i;
	int			is_minus;
	long long	nbr;

	i = 0;
	is_minus = 0;
	nbr = 0;
	if (str[i] == '-')
		is_minus = ++i;
	while (str[i])
	{
		nbr = nbr * 10 + (str[i++] - '0');
	}
	if (is_minus)
		nbr = -nbr;
	return (nbr);
}

int	ft_islimits(char **array)
{
	int			i;
	long long	nbr;

	i = 0;
	while (array[i])
	{
		nbr = ft_char_to_long(array[i++]);
		if (nbr > INT_MAX || nbr < INT_MIN)
			return (1);
	}
	return (0);
}

int	ft_error_check(int argc, char **argv)
{
	char	**array;

	if (argc <= 1)
		return (1);
	array = ft_set_array(argc, argv);
	if (ft_isnumber(array) || ft_islimits(array) || \
	ft_isduplicate(array))
	{
		ft_freedoublearray(array);
		ft_putstr_fd("Error\n", 2);
		return (1);
	}
	ft_freedoublearray(array);
	return (0);
}
