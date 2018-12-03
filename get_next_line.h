/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   get_next_line.h                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: thperchi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/04 05:02:56 by thperchi     #+#   ##    ##    #+#       */
/*   Updated: 2018/12/03 15:03:07 by thperchi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 32

# include "./libft/libft.h"
# include <stdlib.h>
# include <unistd.h>

typedef struct			s_fdlist
{
	char				*str;
	int					fd;
	struct s_fdlist		*next;
}						t_fdlist;

int						get_next_line(const int fd, char **line);

#endif
