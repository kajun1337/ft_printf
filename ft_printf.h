/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhozkan <muhozkan@student.42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 14:33:18 by muhozkan          #+#    #+#             */
/*   Updated: 2022/03/11 23:21:01 by muhozkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "stdio.h"
# include "unistd.h"
# include "stdarg.h"
# include "stdlib.h"

int		ft_printf(const char *str, ...);
int		ft_formats(va_list args, const char format);
int		ft_printstr(char *str);
int		ft_putchar(int c);
int		ft_print_ptr(unsigned long long p);
int		ft_print_hex(unsigned int n, const char format);
void	ft_put_hex(unsigned int hex, const char format);
int		ft_number_count_hex(unsigned int nmbr);
int		ft_printnbr(int nbr);
int		ft_print_unsigned(unsigned int unmbr);
int		ft_putnbr(long int nbr);
void	ft_put_ptr(unsigned long long p);
int		ft_ptrlen(unsigned long long p);
int		ft_number_count(long long int nmbr);

#endif