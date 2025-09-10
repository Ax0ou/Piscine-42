/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalvarad <aalvarad.studient.42lausanne.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 09:39:49 by aalvarad          #+#    #+#             */
/*   Updated: 2025/09/09 10:25:45 by aalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 
void ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	
}

/*int main (void)
{
	ft_putstr ("viva");
}*/