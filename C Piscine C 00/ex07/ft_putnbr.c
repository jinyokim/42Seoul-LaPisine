/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jko <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 19:43:48 by jko               #+#    #+#             */
/*   Updated: 2020/01/22 20:09:31 by jko              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr(int nb)
{
	char	c;
	int		nums[10];
	int		index;

	index = 0;
	if (nb < 0)
	{
		c = '-';
		write(1, &c, 1);
		nums[index++] = (nb % 10) * -1;
		nb /= -10;
	}
	while (nb / 10 > 0)
	{
		nums[index++] = nb % 10;
		nb /= 10;
	}
	nums[index] = nb;
	while (index >= 0)
	{
		c = nums[index--] + 48;
		write(1, &c, 1);
	}
}
