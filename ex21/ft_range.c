/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsandor- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 14:04:41 by lsandor-          #+#    #+#             */
/*   Updated: 2018/11/20 14:22:38 by lsandor-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *arr;
	int i;
	int k;
	int j;

	j = 0;
	k = max - min;
	i = min;
	if (min >= max)
		return (NULL);
	arr = (int *)malloc(sizeof(int *) * k + 1);
	while (i < max)
	{
		arr[j] = i;
		i++;
		j++;
	}
	return (arr);
}
