/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memccpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: thperchi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/10 03:40:44 by thperchi     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/09 16:37:49 by thperchi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned int x;

	x = 0;
	if (n == 0)
		return (NULL);
	while (x < n && ((unsigned char*)src)[x] != (unsigned char)c)
	{
		((unsigned char *)dst)[x] = ((unsigned char *)src)[x];
		x++;
	}
	if (x == n)
		return (NULL);
	((unsigned char *)dst)[x] = ((unsigned char *)src)[x];
	return (&dst[x + 1]);
}
