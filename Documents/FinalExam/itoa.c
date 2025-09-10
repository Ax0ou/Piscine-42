/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalvarad <aalvarad.studient.42lausanne.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 10:23:25 by aalvarad          #+#    #+#             */
/*   Updated: 2025/09/10 11:39:32 by aalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int count_size(int nb)
{
	int i;

	i = 0;
	if (nb < 0)
	{
		nb *-1;
		i++;
	}
	while (nb != 0)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int nbr)
{
	char *dest;
	int	i;
	int count;
	long int n;

	n = nbr;
	i = 0;
	count = count_size(nbr);
	dest = malloc((count + 1) * sizeof(char));
	if (!dest)
		return (0);
		if (n < 0)
	{
		n *= -1;
		dest[0] = '-';
		i++;
	}
	while (count > i)
	{
		count--;
		dest[count] = (n % 10) + 48;
		n /= 10;
	}
	dest[count_size(nbr)] = '\0';
	return (dest);
}
