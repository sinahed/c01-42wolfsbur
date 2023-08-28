/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shedayat <shedayat@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 17:28:20 by shedayat          #+#    #+#             */
/*   Updated: 2023/08/28 13:40:18 by shedayat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div_a;
	int	div_b;

	div_a = *a / *b;
	div_b = *a % *b;
	*a = div_a;
	*b = div_b;
}
