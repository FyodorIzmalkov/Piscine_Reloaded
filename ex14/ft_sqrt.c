/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsandor- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 12:02:01 by lsandor-          #+#    #+#             */
/*   Updated: 2018/11/20 12:19:18 by lsandor-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int i;
	int sqr;

	i = 2;
	sqr = 0;
	if (nb == 1 || nb == 0)
		return (nb);
	else
	{
		while (sqr <= nb)
		{
			sqr = i * i;
			if (sqr == nb)
				return (i);
			i++;
		}
	}
	return (0);
}
