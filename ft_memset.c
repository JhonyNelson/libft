/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhcosta- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 16:31:12 by jhcosta-          #+#    #+#             */
/*   Updated: 2026/05/28 16:31:14 by jhcosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*s_aux;
	size_t			i;

	s_aux = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		s_aux[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
