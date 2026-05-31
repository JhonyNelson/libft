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
	unsigned char	*pointer_dest;
	unsigned char	*pointer_src;

	pointer_dest = (unsigned char *)dest;
	pointer_src = (unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	while (n > 0)
	{
		*pointer_dest = *pointer_src;
		pointer_dest++;
		pointer_src++;
		n--;
	}
	return (dest);
}
