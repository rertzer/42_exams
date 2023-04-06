/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rertzer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 13:50:23 by rertzer           #+#    #+#             */
/*   Updated: 2023/04/04 08:57:09 by rertzer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

int	ft_put_str(char *str)
{
	int	len = -1;

	if (str == NULL)
		str = "(null)";
	while (str[++len]);
	write(1, str, len);
	return (len);
}

int	ft_put_nb(long long nb, int base)
{
	int 	len = 0;
	char	unit;
	char	basestr[] = "0123456789abcdef";

	if (nb < 0)
	{
		len += write(1, "-", 1);
		nb *= -1;
	}
	if (nb >= base)
		len += ft_put_nb(nb / base, base);
	unit = basestr[nb % base];
	len += write(1, &unit, 1);
	return (len);
}

int	ft_printf(const char *format, ...)
{
	int		len = 0;
	int		i = -1;
	va_list	pointer;

	va_start(pointer, format);
	while (format[++i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 's')
				len += ft_put_str(va_arg(pointer, char *));
			else if (format[i + 1] == 'd')
				len += ft_put_nb((long long)va_arg(pointer, int), 10);
			else if (format[i + 1] == 'x')
				len += ft_put_nb((long long)va_arg(pointer, unsigned int), 16);
			i++;
			continue ;
		}
		len += write(1, &format[i], 1);
	}
	va_end(pointer);
	return (len);
}

int	main()
{
	int	ret;

	ret = ft_printf("%s\n", "toto");
	ft_printf("return value: %d\n", ret);
	ret = ft_printf("Magic %s is %d", "number", 42);
	ft_printf("return value: %d\n", ret);
	ret = ft_printf("Hexadecimal for %d if %x\n", 42, 42);
	ft_printf("return value: %d\n", ret);
	ret = ft_printf("null string is _%s_\n", NULL);
	ft_printf("return value: %d\n", ret);
	ret = ft_printf("neg is %d\n", -123456789);
	ft_printf("return value: %d\n", ret);
	return (0);
}
