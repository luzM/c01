/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartiro <luz.martirosyan@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 16:18:27 by lmartiro          #+#    #+#             */
/*   Updated: 2026/10/19 16:51:40 by lmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	n;

	n = 0;
	i = 0;
	while (n < (size - 1))
	{
		while (i < (size - (n + 1)))
		{
			if (*(tab + i) > *(tab + (i + 1)))
			{
				j = *(tab + i);
				*(tab + i) = *(tab + (i + 1));
				*(tab + (i + 1)) = j;
			}
			i++;
		}
		i = 0;
		n++;
	}
}
