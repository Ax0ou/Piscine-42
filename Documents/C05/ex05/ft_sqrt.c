/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalvarad <aalvarad.studient.42lausanne.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 14:49:16 by aalvarad          #+#    #+#             */
/*   Updated: 2025/09/03 15:11:41 by aalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	result;
	int	i;

	result = 0;
	i = 0;
	if (nb < 0)
		return (0);
	while (result < nb && i <= 46340)
	{
		result = i * i;
		if (result == nb)
			return (i);
		i++;
	}
	return (0);
}
