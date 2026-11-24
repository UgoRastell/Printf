/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: urastell <urastell@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/24 13:09:15 by urastell          #+#    #+#             */
/*   Updated: 2026/11/24 17:20:01 by urastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	arg_ptr;
	int		args;
	va_list	args_copy;

	va_start(arg_ptr, format);
	va_copy(args_copy, arg_ptr);
	args = 0;
	while (arg_ptr)
	{
	}
}

int	main(void)
{
	printf("%u", -1);
}
