/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosoyan <mmosoyan@student.42yerevan.am    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 21:02:42 by mmosoyan          #+#    #+#             */
/*   Updated: 2024/03/20 21:47:05 by mmosoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stddef.h>

int		ft_printf(char const *str, ...);
int		ft_putchar(char c);
int		ft_putstr(char const *str);
int		ft_putnbr_base(long long n, char *base);
int		is_valid(char *base);
int		ft_strlen(char *base);
int		ft_putptr(unsigned long p, char *base);
int		ft_checktype(char const *str, va_list list, int i);

#endif
