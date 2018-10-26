/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vraia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 14:22:57 by vraia             #+#    #+#             */
/*   Updated: 2018/10/25 23:18:45 by vraia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*tmp;

	if (!(tmp = (char *)malloc(n)))
		return (NULL);
	ft_memcpy(tmp, src, n);
	ft_memcpy(dest, tmp, n);
	return (dest);
}
