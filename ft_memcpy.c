/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhcosta- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 19:21:44 by jhcosta-          #+#    #+#             */
/*   Updated: 2026/05/28 19:21:46 by jhcosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*dest_aux;
	const unsigned char	*src_aux;
	site_t				i;

	dest_aux = (unsigned char *)dest;
	src_aux = (const unsigned char *)src;
	if (!dest && !src)
		return (dest);
	i = 0;
	while (i < n)
	{
		dest_aux[i] = src_aux[i];
		i++;
	}
	return (dest);
}
