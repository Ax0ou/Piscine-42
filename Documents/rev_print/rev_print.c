/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalvarad <aalvarad.studient.42lausanne.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 14:29:42 by aalvarad          #+#    #+#             */
/*   Updated: 2025/09/10 15:42:47 by aalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int     ft_strlen(char *str)
{
    int     i;
    i = 0;
    while (str[i])
            i++;
    return (i);
}
char    *rev_print (char *str)
{
    int     i;

    i = ft_strlen(str);
	i = i - 1;
    while (i >= 0)
    {
		write (1, &str[i], 1);
		i--;
    }
    return (str);
}

/*int	main(void)
{
	rev_print("rainbow dash");
	write(1, "\n", 1);
	rev_print("Ponies are awesome");
	write(1, "\n", 1);
	rev_print("");
	write(1, "\n", 1);
	return (0);
}*/