/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalvarad <aalvarad.studient.42lausanne.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 13:50:52 by aalvarad          #+#    #+#             */
/*   Updated: 2025/09/09 15:05:14 by aalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nb)
{
	long int a;
	
	a = nb;
	if(a < 0)
	{
		ft_putchar('-');
		a = a * -1;
	}
	if (a >= 10)
	{
		ft_putnbr(a / 10);
	}
	ft_putchar((a % 10) + 48);
}

int main(void)
{
	ft_putnbr(-5845);
	return(0);
}