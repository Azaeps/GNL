/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_itoa.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: thperchi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/14 22:22:40 by thperchi     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/12 00:31:03 by thperchi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static int		ft_len(int n)
{
	int x;

	x = 0;
	while (n /= 10)
		x++;
	return (x);
}

char			*ft_itoa(int n)
{
	char	*str;
	int		x;
	int		y;

	x = ft_len(n);
	y = n;
	if (y == -2147483648)
	{
		str = ft_strdup("-2147483648");
		return (str);
	}
	if (n < 0)
	{
		y = -n;
		x++;
	}
	if (!(str = (char *)malloc(sizeof(char) * (x + 2))))
		return (NULL);
	str[x + 1] = '\0';
	str[x] = y % 10 + '0';
	while (y /= 10)
		str[--x] = y % 10 + '0';
	if (n < 0)
		str[0] = '-';
	return (str);
}
