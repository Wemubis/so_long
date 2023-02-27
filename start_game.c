/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start_game.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-boud <mle-boud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 12:19:03 by mle-boud          #+#    #+#             */
/*   Updated: 2023/02/27 17:14:05 by mle-boud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	init_window(char **map, t_image *img, void *win, void *ptr)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(map[0]);
	while (map[i])
		i++;
	win = mlx_new_window(ptr, (len * img->width), (i * img->height), "So_long");
	if (!win)
		kill_all();
}

void	start_game(t_start *start)
{
	//
	init_window(start->map, start->img, start->win, start->ptr);
	//
	// draw_window(start);
	mlx_loop(start->ptr);
	// kill_all();
}
