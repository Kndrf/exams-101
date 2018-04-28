/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   caca.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: robihaap <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/04/28 01:43:56 by robihaap     #+#   ##    ##    #+#       */
/*   Updated: 2018/04/28 01:57:58 by robihaap    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	if (!*s1)
		return(char *) NULL;
	const char *c;
	while (*s1)
	{
		c = s2;
		while (*c)
		{
			if (*s1 == *c)
				break;
			c++;
		}
		if (*c)
			break;
		s1++;
	}
	if (s2 == '\0')
		return (char *) NULL;
	return (char *) s1;
}

int		main()
{
	char str[] = "a former cop, undercover just got shot, now recovering whaaa";
	char key[] = "i e a i a i o";
	char *p;
	printf("Les voyelles de '%s' : ", str);
	p = ft_strpbrk(str, key);
	while (p != NULL)
	{
		printf("%c", *p);
		p++;
		p = ft_strpbrk(p, key);
	}
	printf("\n");
	return 0;
}

