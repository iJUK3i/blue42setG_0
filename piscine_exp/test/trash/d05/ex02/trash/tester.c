/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newv3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksmith <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 21:04:59 by ksmith            #+#    #+#             */
/*   Updated: 2016/10/31 22:04:15 by ksmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	ft_atoi(char *str)
{
	int i;
	int sign;
	int res;

	res = 0;
	sign = 1;
	i = 0;
	if (str[0] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] != '\0')
	{
		res = res * (int)strtol(str, (char **)NULL, 10);
		i++;
	}
	return (sign * res);
}

int	main()
{
	char str[] = "abcd";
	int val = ft_atoi(str);

	printf("%d ", val);
	return (1);
}
