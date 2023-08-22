/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurmuss <laurmuss@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 17:59:03 by laurmuss          #+#    #+#             */
/*   Updated: 2023/08/04 18:07:09 by laurmuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

int	ft_printf(char const *str, ...)
{
	va_list	args; 
	int		counter;
	int		i;
	int		num;

	if (str == NULL)
		return (0);
	counter = 0;
	i = 0;
	va_start(args, str); 
	while (str[i])
	{
		if (str[i] == '%')
			num = ft_tipo (str[++i], args);
		else
			num = write(1, &str[i], 1);
		if (num == -1)
			return (-1);
		counter += num;
		i++;
	}
	va_end (args);
	return (counter);
}

/*
int main()
{
	char *str = "ciaooo";
	char c = 'H';
	int	num = 12345;
	int	= 
	unsigned int hex = 4294967295;
	unsigned int hex_maius = 429495;
	int i;
	int j;

	ft_printf("Imprimi una string: %s\n", str);
	ft_printf("Imprimi un carattere: %c\n", c);
	ft_printf ("Print a percentage sign: %%\n");
	ft_printf ("scrivi un numero: %d\n", num);
	ft_printf ("scrivi un hexadecimal maiuscolo%X\n", hex_maius);
	ft_printf ("scrivi un hexadecimal minuscolo%X\n", hex);
	i = ft_printf ("%X\n", hex);
	j = printf ("%X\n", hex);
	printf ("laura %i original %i\n", i, j);

}
*/
