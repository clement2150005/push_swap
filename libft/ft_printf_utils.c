/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolin <ccolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 13:40:38 by ccolin            #+#    #+#             */
/*   Updated: 2024/08/05 18:55:37 by ccolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_freeall(int **i, t_opts **opts)
{
	free(*i);
	free(*opts);
}

char	*ft_strdup_printf(const char *s1)
{
	int		i;
	int		sze;
	char	*ptr;

	if (!s1)
	{
		ptr = ft_calloc(7, sizeof(char));
		if (!ptr)
			return (NULL);
		ft_strlcpy((char *)ptr, "(null)", 7);
		return (ptr);
	}
	i = 0;
	sze = ft_strlen(s1);
	ptr = ft_calloc(sze + 1, sizeof(char));
	if (ptr == NULL)
		return (NULL);
	while (s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

int	ft_is_fmt_nbr(t_opts *opts)
{
	if ((opts->fmt == 'd' || opts->fmt == 'i' || opts->fmt == 'u' || \
	opts->fmt == 'x' || opts->fmt == 'X'))
		return (1);
	return (0);
}
