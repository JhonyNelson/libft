/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhcosta- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 19:21:22 by jhcosta-          #+#    #+#             */
/*   Updated: 2026/06/04 19:21:23 by jhcosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*s1_aux;
	const unsigned char *s2_aux;
	size_t				i;

	s1_aux = (const unsigned char *)s1;
	s2_aux = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (s1_aux[i] != s2_aux[i])
		{
			return (s1_aux[i] - s2_aux[i]);
		}
		i++;
	}
	return (0);
}
