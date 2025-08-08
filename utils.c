/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishaaq <ishaaq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 08:02:36 by ishaaq            #+#    #+#             */
/*   Updated: 2025/08/08 08:16:49 by ishaaq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "n_queens.h"

int	*add_to_set(int *set, int size, int val)
{
	int	*new_set;
	int	i;

	new_set = calloc((size + 1), sizeof(int));
	i = -1;
	while (++i < size)
		new_set[i] = set[i];
	new_set[i] = val;
	return (new_set);
}

int	check_in_diagonal(int *set, int size, int val)
{
	int	i;

	i = -1;
	while (++i < size)
	{
		if (abs(val - set[i]) == (size - i))
			return (1);
	}
	return (0);
}

int	check_in_set(int *set, int size, int val)
{
	int	i;

	i = 0;
	while (i < size && set[i] != val)
		i++;
	if (set[i] == val)
		return (1);
	return (0);
}

void	print_set(int *set, int size)
{
	int	i;

	i = -1;
	while (++i < size)
	{
		printf("%d", set[i]);
		if (i != size)
			printf(" ");
	}
}

int	abs(int val)
{
	if (val < 0)
		return (-val);
	return(val);
}
