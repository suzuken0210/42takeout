/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kesuzuki <kesuzuki@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 19:43:49 by kesuzuki          #+#    #+#             */
/*   Updated: 2025/01/28 13:21:42 by kesuzuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  FT_POINT_H
# define FT_POINT_H

typedef struct s_point
{
	int	x;
	int	y;
}	t_point;

void	set_point(t_point *point);

#endif
