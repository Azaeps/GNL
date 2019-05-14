/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstdel.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: thperchi <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/18 06:49:22 by thperchi     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/24 10:53:47 by thperchi    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *new;
	t_list *tmp;

	new = *alst;
	while (new)
	{
		tmp = new->next;
		del(new->content, new->content_size);
		free(new);
		new = tmp;
	}
	*alst = new;
	*alst = NULL;
}
