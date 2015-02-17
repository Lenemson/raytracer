/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camera.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jibanez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/17 13:20:45 by jibanez           #+#    #+#             */
/*   Updated: 2015/02/17 16:47:26 by jibanez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAMERA_H
# define CAMERA_H

# include "vector.h"

struct			s_camera
{
	int			viewplane_width;
	int			viewplane_height;
	float		view_distance;
	t_vertex	pos;
	t_vector	forward;
	t_vector	up;
	t_vector	right;
};

typedef struct s_camera	t_camera;

t_camera		get_new_camera(int width, int height);
t_camera		set_fov(t_camera camera, float fov);
t_vertex		get_viewplane_pos(t_camera camera);

#endif