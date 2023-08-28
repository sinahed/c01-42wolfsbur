/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shedayat <shedayat@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 12:34:24 by shedayat          #+#    #+#             */
/*   Updated: 2023/08/28 12:34:52 by shedayat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	index;
	int	n;
	int	c;

	index = 0;
	c = 0;
	while (index < size)
	{
		n = index + 1;
		while (n < size)
		{
			if (tab[index] > tab[n])
			{
				c = tab[n];
				tab[n] = tab[index];
				tab[index] = c;
			}
			n++;
		}
		index++;
	}
}
