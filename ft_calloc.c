/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luinasci <luinasci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:42:17 by luinasci          #+#    #+#             */
/*   Updated: 2024/10/14 15:50:01 by luinasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//This function will allocate memory, and fill the memory with zeros.
//It's a bit like running malloc, and right after running memset, to prevent any
//issues with unexpected behavior.
#include <stddef.h>

void	*ft_calloc(size_t number, size_t size)
{
	size_t	total_size;
	size_t	i;
	void	*ptr;

	total_size = number * size;
	i = 0;
	ptr = malloc(total_size);
	if (!ptr)
	{
		return (NULL);
	}
	while (i < total_size)
	{
		((unsigned char *)ptr)[i] = 0;
		i++;
	}
	return (ptr);
}
