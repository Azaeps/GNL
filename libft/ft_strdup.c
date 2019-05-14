/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strdup.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: thperchi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/08 03:18:12 by thperchi     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/22 10:27:58 by thperchi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*str;
	int		x;
	int		y;

	x = 0;
	y = 0;
	while (src[x] != '\0')
		x++;
	if (!(str = (char*)malloc(sizeof(*str) * (x + 1))))
	{
		str = NULL;
		return (str);
	}
	while (src[y] != '\0')
	{
		str[y] = src[y];
		y++;
	}
	str[y] = '\0';
	return (str);
}
