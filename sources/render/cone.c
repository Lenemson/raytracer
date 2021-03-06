/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cone.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jibanez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/22 10:47:46 by jibanez           #+#    #+#             */
/*   Updated: 2015/05/29 13:36:42 by jibanez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "render.h"
#include <math.h>

float			intersect_cone(t_ray const ray)
{
	float		a;
	float		b;
	float		c;

	a = pow(ray.dir.x, 2) + pow(ray.dir.z, 2) - pow(ray.dir.y, 2);
	b = (2 * ray.o.x * ray.dir.x)
		+ (2 * ray.o.z * ray.dir.z)
		- (2 * ray.o.y * ray.dir.y);
	c = pow(ray.o.x, 2) + pow(ray.o.z, 2) - pow(ray.o.y, 2);
	return (solve_quadratic(a, b, c));
}

t_vector		cone_normal(t_vertex const p)
{
	t_vector	normal;

	normal.x = p.x;
	normal.y = -p.y;
	normal.z = p.z;
	return (normal);
}
