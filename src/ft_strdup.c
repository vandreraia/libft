/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vraia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 14:25:06 by vraia             #+#    #+#             */
/*   Updated: 2018/10/25 18:44:18 by vraia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strdup(const char *str)
{
	char	*dup;
	int		i;

	if (str == NULL)
		return (NULL);
	while (str[i])
		i++;
	dup = (char *)malloc(sizeof(dup) * (i + 1));
	i = 0;
	while (str[i])
	{
		dup[i] = str[i];
		i++;
	}
	dup[i++] = '\0';
	return (dup);
}
