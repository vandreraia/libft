/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vraia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 14:22:20 by vraia             #+#    #+#             */
/*   Updated: 2018/10/25 16:54:11 by vraia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*xdest;
	const char	*xsrc;

	i = 0;
	xdest = (char*)dest;
	xsrc = (char*)src;
	while (n > i)
	{
		xdest[i] = xsrc[i];
		i++;
	}
	return (dest);
}
