/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaazouz <jlaazouz@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:23:01 by jlaazouz          #+#    #+#             */
/*   Updated: 2023/10/12 21:39:36 by jlaazouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub.h"

void	ft_init(t_data *cub)
{
	cub->file = NULL;
	cub->file_len = 0;
	cub->map_len = 0;
	cub->map_start = 0;
	cub->visuals_len = 0;
	cub->file_len = 0;
	cub->max_len = 0;
	cub->map_grid = NULL;
	cub->visual_data = NULL;
	cub->visuals = (t_visuals *)ft_calloc(1, sizeof(t_visuals));
}

int	main(int ac, char **av)
{
	t_data	cub;

	ft_init(&cub);
	if (ft_map_checks(&cub, ac, av[1]))
		return (EXIT_FAILURE);
	// system("leaks cub");
	return (0);
}
