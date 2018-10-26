/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vraia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 14:21:55 by vraia             #+#    #+#             */
/*   Updated: 2018/10/25 16:55:29 by vraia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t		i;
	char		xdest;
	const char	xsrc;

	i = 0;
	xdest = dest;
	xsrc = src;
	while (i < n)
	{
		xdest[i] = xsrc[i];
		if (xdest[i] == (char)c)
			return ((void*)dest + i + 1);
		i++;
	}
	return (NULL);
}
