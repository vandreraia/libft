/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vraia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 22:24:24 by vraia             #+#    #+#             */
/*   Updated: 2018/10/26 20:59:31 by vraia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t end;

	i = 0;
	j = 0;
	if (size <= ft_strlen(dst))
		return (ft_strlen(src) + size);
	while (dst[i] && i < size)
		i++;
	end = i;
	while (src[j] && i < size)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	if (end < size)
		dst[i] = '\0';
	return (end + strlen(src));
}
