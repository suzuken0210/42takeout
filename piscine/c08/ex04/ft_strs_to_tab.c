/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kesuzuki <kesuzuki@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 19:43:49 by kesuzuki          #+#    #+#             */
/*   Updated: 2025/01/28 13:33:32 by kesuzuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "ft_stock_str.h"

void	ft_show_tab(struct s_stock_str *par);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *str)
{
	int		len;
	char	*copy;
	int		i;

	len = ft_strlen(str);
	copy = (char *)malloc(sizeof(char) * (len + 1));
	i = 0;
	while (str[i] != '\0')
	{
		copy[i] = str[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*tab;
	int					i;

	tab = (struct s_stock_str *)malloc(sizeof(struct s_stock_str) * (ac + 1));
	i = 0;
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		if (tab[i].copy == NULL)
		{
			return (NULL);
		}
		i++;
	}
	tab[ac].str = 0;
	return (tab);
}

// int main(int argc, char **argv) {
//   struct s_stock_str *structs;

//   structs = ft_strs_to_tab(argc, argv);
//   if (structs == NULL) {
//     printf("エラー: メモリの確保に失敗しました\n");
//     return 1;
//   }

//   ft_show_tab(structs);

//   for (int i = 0; i < argc; i++) {
//     free(structs[i].copy);
//   }
//   free(structs);

//   return 0;
// }
