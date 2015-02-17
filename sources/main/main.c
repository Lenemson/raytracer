/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jibanez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/02 16:31:40 by jibanez           #+#    #+#             */
/*   Updated: 2015/02/17 17:15:06 by jibanez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "camera.h"


int			main(void)
{
	t_camera	camera;
	t_vertex	viewplane_pos;

	camera = get_new_camera(800, 600);
	camera = set_fov(camera, 60);
	camera = set_camera_pos(camera, 1, 1, 1);
	viewplane_pos = get_viewplane_pos(camera);
	ft_putnbr(viewplane_pos.x);ft_putchar('\n');////
	ft_putnbr(viewplane_pos.y);ft_putchar('\n');////
	ft_putnbr(viewplane_pos.z);ft_putchar('\n');////
	return (0);
}
