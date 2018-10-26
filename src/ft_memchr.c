/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vraia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 14:22:02 by vraia             #+#    #+#             */
/*   Updated: 2018/10/25 16:54:31 by vraia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*str;

	str = (const char*)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (const char)c)
			return (str + i);
		i++;
	}
	return (NULL);
}
