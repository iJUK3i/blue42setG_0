/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   full_char.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmurray <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 19:04:25 by kmurray           #+#    #+#             */
/*   Updated: 2016/11/14 21:16:01 by kmurray          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char	full_char(char *str)
{
	return (str[ft_strlen(str) - 2]);
}