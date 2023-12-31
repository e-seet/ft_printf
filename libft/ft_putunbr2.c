/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseet <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 18:37:31 by eseet             #+#    #+#             */
/*   Updated: 2023/10/05 18:37:32 by eseet            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putunbr(unsigned int n, int *ptrnum)
{
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, ptrnum);
		if (*ptrnum == -1)
			return ;
	}
	ft_helper(write(1, &"0123456789"[n % 10], 1), 1, ptrnum);
}

// if (n < 0)
// 	{
// 		ft_putchar('-');
// 		n = -n;
// 	}
// 	else
// 		n = n;
// 	if (n >= 10)
// 	{
// 		ft_putnbr_fd(n / 10);
// 	}
// 	write(1, &"0123456789"[n % 10], 1);
