/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtaverne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 22:39:54 by gtaverne          #+#    #+#             */
/*   Updated: 2020/09/17 12:18:25 by gtaverne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int iter;
	int ln;
	int i;

	ln = 0;
	while (to_find[ln])
		ln++;
	if (to_find == '\0')
		return (str);
	iter = 0;
	while (str[iter])
	{
		i = 0;
		while (str[iter + i] == to_find[i] && i < ln)
			i++;
		if (i == ln)
			return (str + iter);
		iter++;
	}
	return (0);
}
