/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kesuzuki <kesuzuki@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 11:37:54 by kesuzuki          #+#    #+#             */
/*   Updated: 2025/04/26 11:38:14 by kesuzuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_atoi(const char *str)
{
    int i;
    int m;
    m = 1;
    i = 0;
    int x;
    x = 0;
	while(str[i] < 32)
    {
        i++;
    }
    if(str[i] == '-')
    {
        m = m * (-1);
        i++;
    }
    else if(str[i] == '+')
    {
        i++;
    }
    while(str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
    {
        x = x * 10 + (str[i] - '0');
        i++;
    }
    return (x * m);
}

int main(void)
{
    char *s;
    s = "-2aa12aa3234";
    int p;
    p = ft_atoi(s);
    printf("%d", p);
    return(0);
}