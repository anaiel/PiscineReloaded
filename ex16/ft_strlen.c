/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anleclab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 17:00:45 by anleclab          #+#    #+#             */
/*   Updated: 2018/11/05 17:05:50 by anleclab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
