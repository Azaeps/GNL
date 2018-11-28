/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   get_next_line.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: thperchi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/21 18:57:51 by thperchi     #+#   ##    ##    #+#       */
/*   Updated: 2018/11/27 18:00:55 by thperchi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "./get_next_line.h"

static char		*readline(char *str, char *buff, int rd, int fd)
{
	char		*temp;

	temp = NULL;
	if (read(fd, buff, 0) == -1)
		return (NULL);
	while (!ft_strchr(str, '\n') && rd)
	{
		rd = read(fd, buff, BUFF_SIZE);
		buff[rd] = '\0';
		temp = ft_strsub(str, 0, ft_strlen(str));
		free(str);
		str = ft_strjoin(temp, buff);
		free(temp);
	}
	return (str);
}

int				get_next_line(const int fd, char **line)
{
	static char		*str = NULL;
	int				rd;
	int				i;
	char			buff[BUFF_SIZE + 1];

	if (!line || fd < 0 || BUFF_SIZE < 1)
		return (-1);
	rd = 1;
	if (!str)
		str = ft_strnew(0);
	if (!(str = readline(str, buff, rd, fd)))
		return (-1);
	if (ft_isnewline(buff) == 1)
		return (1);
	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	*line = ft_strsub(str, 0, i);
	str = ft_strsub(str, i + 1, ft_strlen(str));
	return (0);
}

int			main(int argc, char **argv)
{
	int				fd;
	char			*line;
	static int		mes_couilles_lourdes;
	int				tmp;

	mes_couilles_lourdes = 1;
	tmp = mes_couilles_lourdes;
	fd = open(argv[1], O_RDONLY);
	if (argc == 2)
	{
		while (tmp != 0)
		{
			get_next_line(fd, &line);
			ft_putstr(line);
			ft_putchar('\n');
			tmp--;
		}
		mes_couilles_lourdes++;
	}
	return (1);
}
