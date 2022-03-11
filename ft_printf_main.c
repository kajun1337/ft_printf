/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhozkan <muhozkan@student.42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 23:22:06 by muhozkan          #+#    #+#             */
/*   Updated: 2022/03/11 23:22:06 by muhozkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int	ft_printf(const char *str, ...);

int main(void)

{

int sayi = 1;

char a = 'b';

char *p = &a;

char *str = "string";

int u = 1234;

int x = 123456789;

int xx = 123456789;

printf("uzunluk:%d\n",ft_printf("*%c* *%s* *%p* *%d* *%u* *%x* *%X* *%%*\n", a, str, p, sayi, u, x, xx));

printf("\nuzunluk:%d",printf("*%c* *%s* *%p* *%d* *%u* *%x* *%X* *%%*\n", a, str, p, sayi, u, x, xx));

}