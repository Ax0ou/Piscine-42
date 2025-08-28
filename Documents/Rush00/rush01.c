/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajewell <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 13:17:23 by ajewell           #+#    #+#             */
/*   Updated: 2025/08/23 18:22:02 by jturrel          ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_first_line(int i, int x, char *str)//print first line
{
	if (i == 0)
	{
		ft_putchar(str[0]);
	}
	else if (i == x - 1)
	{
		ft_putchar(str[1]);
	}
	else
	{
		ft_putchar(str[2]);
	}
}

void	ft_last_line(int i, int x, char *str)//print last line
{
	if (i == 0)
	{
		ft_putchar(str[1]);
	}
	else if (i == x - 1)
	{
		ft_putchar(str[0]);
	}
	else
	{
		ft_putchar(str[2]);
	}
}

void	ft_middle_line(int i, int x, char *str)//print middle line
{
	if (i == 0)
		ft_putchar(str[2]);
	else if (i == x - 1)
	{
		ft_putchar(str[2]);
	}
	else
	{
		ft_putchar(str[3]);
	}
}

void	ft_draw_rectangle(int x, int y, char *str)//draw rectangle
{
	int	i;
	int	j;

	j = 0;
	while (j < y)
	{
		i = 0;
		while (i < x)
		{
			if (j == 0)
				ft_first_line(i, x, str);
			else if (j == y - 1)
				ft_last_line(i, x, str);
			else
				ft_middle_line(i, x, str);
			i++;
		}
		ft_putchar(str[4]);
		j++;
	}
}

void	rush(int x, int y)//main function (print 0 if negative or 0 values)
{
	char	*str;

	str = "/\\* \n";
	if (x <= 0 || y <= 0)
	{
		ft_putchar('0');
		ft_putchar('\n');
	}
	else
	{
		ft_draw_rectangle(x, y, str);
	}
}
