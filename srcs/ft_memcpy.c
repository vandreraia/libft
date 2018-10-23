/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vraia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 14:22:20 by vraia             #+#    #+#             */
/*   Updated: 2018/10/22 14:22:21 by vraia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*xdest;
	const char	xsrc;

	i = 0;
	xdest = dest;
	xsrc = src;
	while (n > i)
	{
		xdest[i] = xsrc[i];
		i++;
	}
	return (dest);
}
