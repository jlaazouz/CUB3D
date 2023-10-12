/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks_player.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaazouz <jlaazouz@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 19:25:47 by jlaazouz          #+#    #+#             */
/*   Updated: 2023/10/12 21:41:13 by jlaazouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub.h"

int	check_player_surrounding(t_data *cub)
{	if (cub->player.x == 0)
		return (ft_error(PLAYER_BAD_POS));
	if (!(cub->map_grid[cub->player.y][cub->player.x + 1] == '0'
		|| cub->map_grid[cub->player.y][cub->player.x + 1] == '1'))
		return (ft_error(PLAYER_BAD_POS));
	else if (!(cub->map_grid[cub->player.y][cub->player.x - 1] == '0'
		|| cub->map_grid[cub->player.y][cub->player.x - 1] == '1'))
		return (ft_error(PLAYER_BAD_POS));
	else if (!(cub->map_grid[cub->player.y + 1][cub->player.x] == '0'
		|| cub->map_grid[cub->player.y + 1][cub->player.x] == '1'))
		return (ft_error(PLAYER_BAD_POS));
	else if (!(cub->map_grid[cub->player.y - 1][cub->player.x] == '0'
		|| cub->map_grid[cub->player.y - 1][cub->player.x] == '1'))
		return (ft_error(PLAYER_BAD_POS));
	return (EXIT_SUCCESS);
}

int	ft_more_than_one_player(t_data *cub)
{
	int	i;
	int	j;
	int	count;

	count = 0;
	i = 0;
	while (cub->map_grid[i])
	{
		j = 0;
		while (cub->map_grid[i][j])
		{
			if (cub->map_grid[i][j] == 'N' || cub->map_grid[i][j] == 'S'
				|| cub->map_grid[i][j] == 'W' || cub->map_grid[i][j] == 'E')
			{
				cub->player.x = j;
				cub->player.y = i;
				count++;
			}
			j++;
		}
		i++;
	}
	if (count != 1)
		return (ft_error(PLAYER_OCCURENCE));
	return (EXIT_SUCCESS);
}
