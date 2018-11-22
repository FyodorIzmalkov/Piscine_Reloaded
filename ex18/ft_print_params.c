/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsandor- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 12:36:31 by lsandor-          #+#    #+#             */
/*   Updated: 2018/11/20 12:45:39 by lsandor-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int i;
	int k;

	k = 1;
	while (k < argc)
	{
		i = 0;
		while (argv[k][i] != '\0')
		{
			ft_putchar(argv[k][i]);
			i++;
		}
		ft_putchar('\n');
		k++;
	}
	return (0);
}
