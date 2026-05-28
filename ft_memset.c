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
	unsigned char	*pointer;

	pointer = (unsigned char *)s;
	while (n > 0)
	{
		*pointer = c;
		pointer++;
		n--;
	}
	return (s);
}

#include <stdio.h>

int	main(void)
{
	char buffer[] = "abcdef";

	printf("antes: %s\n", buffer);
	ft_memset(buffer, 'x', 5);
	printf("depois: %s\n", buffer);

	printf("posicoes: \n");
	printf("buffer[0] = %c\n", buffer[0]);
	printf("buffer[1] = %c\n", buffer[1]);
	printf("buffer[2] = %c\n", buffer[2]);
	printf("buffer[3] = %c\n", buffer[3]);
	printf("buffer[4] = %c\n", buffer[4]);
	printf("buffer[5] = %c\n", buffer[5]);
	return (0);
}
