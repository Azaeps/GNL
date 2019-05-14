/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putendl.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: thperchi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/11 03:45:28 by thperchi     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/10 19:02:37 by thperchi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl(char const *str)
{
	int x;

	x = 0;
	if (!str)
		return ;
	while (str[x])
	{
		ft_putchar(str[x]);
		x++;
	}
	ft_putchar('\n');
}
