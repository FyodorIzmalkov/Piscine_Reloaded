/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsandor- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 12:46:48 by lsandor-          #+#    #+#             */
/*   Updated: 2018/11/20 15:51:49 by lsandor-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_putstr(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
			ft_putchar(argv[i][j++]);
		ft_putchar('\n');
		i++;
	}
}

int		main(int argc, char **argv)
{
	int		k;
	int		j;
	char	*temp;

	k = 1;
	temp = 0;
	while (k < argc)
	{
		j = k + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[k], argv[j]) > 0)
			{
				temp = argv[k];
				argv[k] = argv[j];
				argv[j] = temp;
			}
			j++;
		}
		k++;
	}
	ft_putstr(argc, argv);
	return (0);
}
