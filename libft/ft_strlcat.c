/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolin <ccolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 14:40:30 by ccolin            #+#    #+#             */
/*   Updated: 2024/08/05 18:55:37 by ccolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dst, const char *src, unsigned int dstsze)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (i < dstsze && dst[i])
		i++;
	while (i + j + 1 < dstsze && src[j])
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i != dstsze)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));
}

// #include <stdio.h>
// #include <string.h>

// int main() {
//    // Test cases
//    char dst[20] = "Hello ";
//    const char src[] = "world!";
//    // Perform strlcat
//    unsigned int result = ft_strlcat(dst, src, sizeof(dst));
//    // Print the result
//    printf("Concatenated string: %s\n", dst);
//    printf("Result: %u\n", result);
//    return 0;
// }