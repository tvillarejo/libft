/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 18:12:00 by tvillare          #+#    #+#             */
/*   Updated: 2022/10/01 16:41:00 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*pnt;

	pnt = (t_list *)malloc(sizeof(*pnt));
	if (!pnt)
		return (NULL);
	pnt->content = content;
	pnt->next = NULL;
	return (pnt);
}
