/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memchr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: thperchi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/10 04:59:07 by thperchi     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/12 05:11:15 by thperchi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s2;
	unsigned int	x;

	s2 = (unsigned char *)s;
	x = 0;
	while (x < n)
	{
		if (s2[x] == (unsigned char)c)
			return ((void *)s + x);
		x++;
	}
	return (NULL);
}
