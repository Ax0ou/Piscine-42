/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalvarad <aalvarad@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 22:01:56 by aalvarad          #+#    #+#             */
/*   Updated: 2025/08/20 22:24:01 by aalvarad         ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_is_negative(int n)
{
	char	a;

	if (n < 0)
	{
		a = 'N';
		write (1, &a, 1);
	}
	else
	{
		a = 'P';
		write (1, &a, 1);
	}
}

//int	main(void)
//
//{
//	int test, test1, test2;
//
//	test = -2;
//	test1 = 0;
//	test2 = 1;
//	ft_is_negative(test);
//	ft_is_negative(test1);
//	ft_is_negative(test2);
//	return (0);
//}
