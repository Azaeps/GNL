/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   get_next_line.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: thperchi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/04 05:01:39 by thperchi     #+#   ##    ##    #+#       */
/*   Updated: 2018/11/27 18:12:26 by thperchi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "get_next_line.h"

int		get_next_line(const int fd, char **line)
{
	static t_glist	*list = NULL;
	char			buf[BUFF_SIZE + 1];

	if (fd < 0 || BUFF_SIZE < 1 || !line || read(fd, buf, 0) == -1)
		return (-1);
	if (!list)
	{
	if(!(list = malloc(sizeof(t_glist))))
			return (-1);
		list->line = ft_strnew(1);
		list->fd = fd;
		list->next = NULL;
	}
	list->line;
	return (0);
}
