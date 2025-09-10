/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalvarad <aalvarad.studient.42lausanne.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 11:04:16 by aalvarad          #+#    #+#             */
/*   Updated: 2025/09/09 11:23:02 by aalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int ft_strlen(char *str)
{
	int i;
	
	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int main(void)
{
	printf("%i", ft_strlen("troubadidou"));
}