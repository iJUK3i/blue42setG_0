/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksmith <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 03:43:09 by ksmith            #+#    #+#             */
/*   Updated: 2016/11/13 17:08:22 by ksmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	ft_putstr(char *str)
{
	int output;

	output = 0;
	while (str[output] != '\0')
	{
		ft_putchar(str[output]);
		output++;
	}
}