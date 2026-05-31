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
	unsigned char	*reverse_dest;
	unsigned char	*reverse_src;

	reverse_dest = (unsigned char *)dest + (n - 1);
	reverse_src = (unsigned char *)src + (n - 1);
	while (n > 0)
	{
		*reverse_dest = *reverse_src;
		reverse_dest--;
		reverse_src--;
		n--;
	}
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (!dest && !src)
		return (NULL);
	if (dest > src)
	{
		copy_backward(dest, src, n);
	}
	else
	{
		ft_memcpy(dest, src, n);
	}
	return (dest);
}
