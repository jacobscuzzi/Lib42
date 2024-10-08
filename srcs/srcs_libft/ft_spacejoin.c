/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spacejoin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbaumfal <jbaumfal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 18:30:02 by jbaumfal          #+#    #+#             */
/*   Updated: 2024/10/03 00:18:52 by jbaumfal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_spacejoin(char *s1, char *s2)
{
	size_t	len1;
	size_t	len2;
	size_t	i;
	char	*cat;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	cat = (char *)malloc(len1 + len2 + 2);
	i = 0;
	if (!cat)
		return (NULL);
	while (i < len1)
	{
		cat[i] = s1[i];
		i++;
	}
	cat[i++] = ' ';
	while (i < len1 + len2 + 1)
	{
		cat[i] = s2[i - len1 - 1];
		i++;
	}
	cat[i] = '\0';
	free (s1);
	return (cat);
}
