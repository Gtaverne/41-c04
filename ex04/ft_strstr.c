/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtaverne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 22:39:54 by gtaverne          #+#    #+#             */
/*   Updated: 2020/09/20 21:01:08 by gtaverne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (!str || !to_find)
		return (NULL);
	if (to_find[0] == 0)
		return (str);
	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] == to_find[j])
		{
			while (to_find[j] && str[i + j] && str[i + j] == to_find[j])
				j++;
			if (to_find[j] == 0)
				return (&str[i]);
			j = 0;
		}
		i++;
	}
	return (NULL);
}
