/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalvarad <aalvarad@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 21:53:57 by aalvarad          #+#    #+#             */
/*   Updated: 2025/08/20 21:58:41 by aalvarad         ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	abd;

	abd = 'a';
	while (abd <= 'z')
	{
		write (1, &abd, 1);
		abd++;
	}
}

//int	main(void)
//{
//	ft_print_alphabet();
//	return (0);
//}
