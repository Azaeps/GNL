/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strcapitalize.c                               .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: thperchi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/23 13:16:07 by thperchi     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/23 13:17:11 by thperchi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

static char		*ft_strlowcase(char *str)
{
	int x;

	x = 0;
	while (str[x])
	{
		if (str[x] >= 'A' && str[x] <= 'Z')
			str[x] = str[x] + 32;
		x++;
	}
	return (str);
}

char			*ft_strcapitalize(char *str)
{
	int x;

	x = 0;
	str = ft_strlowcase(str);
	while (str[x])
	{
		if ((str[x] >= 'a' && str[x] <= 'z')
			&& !(str[x - 1] >= 'A' && str[x - 1] <= 'Z')
			&& !(str[x - 1] >= 'a' && str[x - 1] <= 'z')
			&& !(str[x - 1] >= '0' && str[x - 1] <= '9'))
			str[x] = str[x] - 32;
		x++;
	}
	return (str);
}
