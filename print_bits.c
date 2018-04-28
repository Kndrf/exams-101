/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   print_bits.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: robihaap <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/04/23 09:58:10 by robihaap     #+#   ##    ##    #+#       */
/*   Updated: 2018/04/23 10:06:13 by robihaap    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int i = 128;
	while (octet >= 0 && i)
	{
		(octet / i) ? write(1, "1", 1) : write(1, "0", 1);
		(octet / i) ? octet -= i : 0;
		i /= 2;
	}
}

int		main(void)
{
	int n = 62;
	int n1 = 63;
	int n2 = 124;
	print_bits(n);
	write(1, "\n", 1);
	print_bits(n1);
	write(1, "\n", 1);
	print_bits(n2);
	write(1, "\n", 1);
	return (0);
}
