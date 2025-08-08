/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   n_queens.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishaaq <ishaaq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 08:03:16 by ishaaq            #+#    #+#             */
/*   Updated: 2025/08/08 08:14:56 by ishaaq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef N_QUEENS_H
# define N_QUEENS_H

# include <stdio.h>
# include <stdlib.h>

int		*add_to_set(int *set, int size, int val);
int		check_in_set(int *set, int size, int val);
int		check_in_diagonal(int *set, int size, int val);
void	print_set(int *set, int size);


#endif