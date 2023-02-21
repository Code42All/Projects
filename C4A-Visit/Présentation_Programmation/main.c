/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 10:45:26 by eblondee          #+#    #+#             */
/*   Updated: 2023/02/21 10:53:55 by eblondee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int index;

	index = 0;
	while (str[index] != 0)
		index = index + 1;
	return (index);
}

int	main(void)
{
	int	size_dev;
	int	size_programmation;

	size_dev = ft_strlen("dev");
	size_programmation = ft_strlen("programmation");

	if (size_programmation > size_dev)
		printf("The word programmation is longer than the word dev.\n");

	return (0);
}
