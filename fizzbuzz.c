/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   fizzbuzz.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: robihaap <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/04/12 03:30:21 by robihaap     #+#   ##    ##    #+#       */
/*   Updated: 2018/04/12 04:28:48 by robihaap    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putendc(char c)
{
	write(1, &c, 1);
	ft_putchar('\n');
}

void	ft_putstr(char *str)
{
	int i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putendl(char *str)
{
	int i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

void	ft_easynbr(int nb)
{
	if (nb < 10)
	{
		ft_putchar(nb + '0');
		return ;
	}
	ft_easynbr(nb / 10);
	ft_putchar((nb % 10) + '0');
	return ;
}




int		main(void)
{
	int i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			if ((i % 3 == 0) && (i % 5 == 0))
			{
				ft_putendl("fizzbuzz");
			}
			else if ((i % 3 == 0) && (i % 5 != 0))
			{
				ft_putendl("fizz");
			}
			else if ((i % 3 != 0) && (i % 5 == 0))
			{
				ft_putendl("buzz");
			}
		}
		else
		{
			ft_easynbr(i);
			ft_putchar('\n');
		}
		i++;
	}
}
