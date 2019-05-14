/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strmap.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: thperchi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/11 02:20:40 by thperchi     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/11 17:43:30 by thperchi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	unsigned int	x;
	char			*str;

	x = 0;
	if (s == NULL)
		return (NULL);
	while (s[x])
		x++;
	if (!(str = (char *)malloc(sizeof(char) * (x + 1))))
		return (NULL);
	x = 0;
	while (s[x])
	{
		str[x] = f(s[x]);
		x++;
	}
	str[x] = '\0';
	return (str);
}
