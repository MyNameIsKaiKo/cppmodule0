/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   magaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleray <marvin@d42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/16 07:03:49 by jleray            #+#    #+#             */
/*   Updated: 2026/05/16 07:03:49 by jleray           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(int ac, char **av)
{
	std::string input;
	int i;

	if (ac > 2)
		return (1);
	if (ac == 1)
	{
		input = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
		std::cout << input << std::endl;
		return (0);
	}
	input = av[1];
	i = 0;
	while (input[i])
	{
		if (input[i] >= 97 && input[i] <= 122)
			input[i] -= 32;
		i++;
	}
	std::cout << input << std::endl;
	return (0);
}
