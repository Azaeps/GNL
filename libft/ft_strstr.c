/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strstr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: thperchi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/08 03:46:36 by thperchi     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/22 13:37:21 by thperchi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int x;
	int y;

	x = 0;
	y = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[x])
	{
		while (needle[y] == haystack[x + y])
		{
			if (needle[y + 1] == '\0')
				return ((char *)haystack + x);
			y++;
		}
		y = 0;
		x++;
	}
	return (0);
}
