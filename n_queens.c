/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   n_queens.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishaaq <ishaaq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 07:55:01 by ishaaq            #+#    #+#             */
/*   Updated: 2025/08/08 08:22:48 by ishaaq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "n_queens.h"

void	n_queens(int *set, int size, int num)
{
	int	*new_set;

	for (int i=0; i < size; i++)
	{
		if (check_in_set(set, size, i) == 1)
			continue ;
		if (check_in_diagonal(set, size, i) == 1)
			continue ;
		new_set = add_to_set(set, size, i);
		n_queens(new_set, size + 1, num);
	}
	if (size == num)
	{
		printf("here");
		print_set(set, size);
	}
	free(set);
}

int	main(int ac, char **av)
{
	int	num;
	int	*set;

	if (ac != 2)
		return (1);
	num = atoi(av[1]);
	if (num < 1)
		return (1);
	set = calloc(num, sizeof(int));
	n_queens(set, 0, num);
}