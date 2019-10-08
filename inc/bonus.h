/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hberger <hberger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 10:27:50 by hberger           #+#    #+#             */
/*   Updated: 2019/10/08 10:34:32 by hberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BONUS_H
# define BONUS_H

# include <stdlib.h>
# include <string.h>


typedef struct	s_list
{
	void				*content;
	struct s_list		*next;
}				t_list;

void			ft_lstadd_front(t_list **alst, t_list *new);
void			ft_lstclear(t_list **lst, void (*del)(void *));
void			ft_lstdelone(t_list *lst, void (*del)(void *));
void			ft_lstiter(t_list *lst, void (*f)(t_list *elem));
void			ft_lstadd_back(t_list **alst, t_list *new);
int				ft_lstsize(t_list *lst);
t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list*));
t_list			*ft_lstnew(void const *content);
t_list			*ft_lstlast(t_list *lst);

#endif
