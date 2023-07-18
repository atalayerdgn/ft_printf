/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerdogan <aerdogan@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 11:17:09 by aerdogan          #+#    #+#             */
/*   Updated: 2023/07/17 11:50:35 by aerdogan         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int	ft_putstr(char *s)
{
	if (!s)
		s = "(null)";
	if (write(1, s, ft_strlen(s)) == -1)
		return (-1);
	return (ft_strlen(s));
}

int	ft_putnbr(int nb)
{
	long	n;
	int		i;
	int		tmp;

	i = 0;
	n = nb;
	if (nb < 0)
	{
		if (write(1, "-", 1) == -1)
			return (-1);
		n = -n;
		i++;
	}
	if (n > 9)
	{
		tmp = ft_putnbr(n / 10);
		if (tmp == -1)
			return (-1);
		i += tmp;
	}
	if (ft_putchar(n % 10 + 48) == -1)
		return (-1);
	return (++i);
}

int	ft_putnbr_unsigned(unsigned int nb)
{
	int	i;
	int	tmp;

	i = 0;
	if (nb > 9)
	{
		tmp = ft_putnbr_unsigned(nb / 10);
		if (tmp == -1)
			return (-1);
		i += tmp + 1;
		if (ft_putnbr_unsigned(nb % 10) == -1)
			return (-1);
	}
	else
	{
		if (ft_putchar(nb + 48) == -1)
			return (-1);
		i++;
	}
	return (i);
}
