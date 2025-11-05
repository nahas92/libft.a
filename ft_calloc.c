/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalnahas <aalnahas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 15:15:12 by aalnahas          #+#    #+#             */
/*   Updated: 2025/10/31 15:32:55 by aalnahas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*p;
	size_t	sum;

	sum = count * size;
	p = malloc(sum);
	if (p == NULL)
		return (NULL);
	ft_memset(p, 0, sum);
	return (p);
}
