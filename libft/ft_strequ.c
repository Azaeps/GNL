/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strequ.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: thperchi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/11 03:21:17 by thperchi     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/12 05:42:52 by thperchi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	int x;

	x = 0;
	if (s1 == NULL || s2 == NULL)
		return (0);
	while (s1[x] && s2[x])
	{
		if (s1[x] != s2[x])
			return (0);
		x++;
	}
	if (s1[x] != s2[x])
		return (0);
	return (1);
}
