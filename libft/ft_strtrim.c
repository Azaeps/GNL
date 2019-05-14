/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strtrim2.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: thperchi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/23 02:37:29 by thperchi     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/16 15:52:54 by thperchi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*str;
	int		x;
	int		y;
	int		z;

	if (!s)
		return (NULL);
	x = 0;
	y = ft_strlen(s);
	z = 0;
	while (s[x] == ' ' || s[x] == '\n' || s[x] == '\t')
		x++;
	while (s[y] == ' ' || s[y] == '\n' || s[y] == '\t' || s[y] == '\0')
		y--;
	if (!(str = (char *)malloc(sizeof(char) * ((ft_strlen(s)) + 2))))
		return (NULL);
	while (x <= y)
		str[z++] = s[x++];
	str[z] = '\0';
	return (str);
}
