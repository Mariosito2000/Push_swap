/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_selector.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marias-e <marias-e@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 11:56:02 by marias-e          #+#    #+#             */
/*   Updated: 2022/12/14 17:27:39 by marias-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_selector(int size, t_list **stack_a)
{
	if (size == 2)
		ft_sort_2(stack_a);
	else if (size == 3)
		ft_sort_3(stack_a);
	else if (size == 4)
		ft_sort_4(stack_a);
/*
	else if (size == 5)
		ft_sort_5(stack_a);
	else if (size > 5)
		ft_big_sort(stack_a);
*/
}
