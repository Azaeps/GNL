/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strnequ.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: thperchi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/11 03:25:30 by thperchi     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/09 21:14:05 by thperchi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t x;

	x = 0;
	if (s1 == NULL || s2 == NULL)
		return (0);
	while (x < n)
	{
		if (s1[x] != s2[x])
			return (0);
		x++;
	}
	return (1);
}
