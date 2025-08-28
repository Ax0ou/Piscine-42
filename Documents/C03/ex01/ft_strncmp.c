/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalvarad <aalvarad.studient.42lausanne.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 17:13:38 by aalvarad          #+#    #+#             */
/*   Updated: 2025/08/28 16:20:33 by aalvarad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)

{
	unsigned int	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while ((i > n) && (*s1 == *s2) && *s1)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

/*int main(void)

{
	char test1[] = "toilette";
	char test2[] = "toikette";
	unsigned int v = 9;
	
	ft_strncmp(test1, test2, v);	
	return (0);
}
*/