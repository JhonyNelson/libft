/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhcosta- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 11:40:36 by jhcosta-          #+#    #+#             */
/*   Updated: 2026/05/29 11:40:38 by jhcosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	copy_backward(void *dest, const void *src, size_t n)
{
	unsigned char		*dest_aux;
	const unsigned char	*src_aux;

	dest_aux = (unsigned char *)dest;
	src_aux = (const unsigned char *)src;
	while (n > 0)
	{
		n--;
		dest_aux[n] = src_aux[n];
	}
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (!dest && !src)
		return (dest);
	if (dest > src)
		copy_backward(dest, src, n);
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
