/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalvarad <aalvarad.studient.42lausanne.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 15:46:31 by aalvarad          #+#    #+#             */
/*   Updated: 2025/09/08 12:13:22 by aalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*tab;

	i = 0;
	if (min >= max)
	{
		return (0);
	}
	tab = malloc((max - min) * sizeof(int));
	if (tab == 0)
	{
		return (NULL);
	}
	while (i < max - min)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
