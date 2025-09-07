/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalvarad <aalvarad.studient.42lausanne.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 15:49:46 by aalvarad          #+#    #+#             */
/*   Updated: 2025/09/07 14:12:22 by aalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strdup(char *src)
{
	char	*dup;
	int		i;

	i = 0;
	while (src[i])
		i++;
	i++;
	dup = malloc (i * sizeof(char));
	if (dup == 0)
		return (0);
	i = 0;
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	return (dup);
}

/*pour le strdup on initialise un pointeur de char *dup  avec un i pour while dans lnotre string.
petit tricks une fois qu'on renvoi l'incrementation (i++) il faut en revoyer un autre (i++) afin
de pouvoir ajouter notre (\0) a la fin de notre while. Une fois fait on s'occupe du malloc on 
lui reserve in espace memoire heap avec (dup = malloc (i * sizeof(char)))*/