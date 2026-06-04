/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhcosta- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 15:21:16 by jhcosta-          #+#    #+#             */
/*   Updated: 2026/06/04 15:21:18 by jhcosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*s_aux;

	i = 0;
	s_aux = (const unsigned char *)s;
	while (i < n)
	{
		if (s_aux[i] == (unsigned char)c)
		{
			return (&s_aux[i]);
		}
		i++;
	}
	return (NULL);
}
