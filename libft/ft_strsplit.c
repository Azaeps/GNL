/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strsplit.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: thperchi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/14 18:21:44 by thperchi     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/15 13:13:24 by thperchi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static char		**fill(char *str, char **tab, char c)
{
	int x;
	int y;
	int z;

	x = 0;
	y = 0;
	z = 0;
	while ((str[x] == c) && str[x])
		x++;
	while (str[x])
	{
		z = 0;
		while (str[x] != c && str[x])
		{
			tab[y][z] = str[x];
			x++;
			z++;
		}
		while ((str[x] == c) && str[x])
			x++;
		tab[y++][z] = '\0';
	}
	tab[y] = NULL;
	return (tab);
}

static char		**memmalloc(char *str, char **tab, char c)
{
	int x;
	int y;
	int z;

	x = 0;
	y = 0;
	z = 0;
	while ((str[x] == c) && str[x])
		x++;
	while (str[x])
	{
		z = 0;
		while (str[x] != c && str[x])
		{
			x++;
			z++;
		}
		while ((str[x] == c) && str[x])
			x++;
		if (!(tab[y++] = (char*)malloc(sizeof(char) * (z + 1))))
			return (NULL);
	}
	return (tab);
}

char			**ft_strsplit(char const *str, char c)
{
	int		x;
	int		y;
	char	**tab;

	x = 0;
	y = 0;
	if (!str)
		return (NULL);
	while ((str[x] == c) && str[x])
		x++;
	while (str[x])
	{
		while (str[x] != c && str[x])
			x++;
		while ((str[x] == c) && str[x])
			x++;
		y++;
	}
	if (!(tab = (char**)malloc(sizeof(char*) * (y + 1))))
		return (0);
	if (!(tab = memmalloc((char *)str, tab, c)))
		return (NULL);
	tab = fill((char *)str, tab, c);
	return (tab);
}
