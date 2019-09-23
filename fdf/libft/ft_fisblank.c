/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fisblank.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helamri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/29 18:53:42 by helamri           #+#    #+#             */
/*   Updated: 2018/12/29 18:53:44 by helamri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_fisblank(char c)
{
	if (c == '\t' || c == '\n' || c == '\r'
			|| c == '\f' || c == '\v' || c == ' ')
		return (1);
	return (0);
}