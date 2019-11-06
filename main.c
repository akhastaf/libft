/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhastaf <akhastaf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 03:39:57 by akhastaf          #+#    #+#             */
/*   Updated: 2019/10/29 17:29:02 by akhastaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	ft_print_result(char const *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}
/*void 	*lstmap_f(void *content) {
	(void)content;
	return ("OK !");
}
void			lstdelmap_f(void *d) {
	(void)d;
}
int		main()
{
	void *(*f)(void*) = &lstmap_f;
	void (*del)(void*) = &lstdelmap_f;
	t_list *l = ft_lstnew(ft_strdup(" 1 2 3 "));
	t_list *ret;
	
	
	l->next = ft_lstnew(ft_strdup("ss"));
	l->next->next = ft_lstnew(ft_strdup("-_-"));
	ret = ft_lstmap(l, f, del);
	
	while (ret)
	{
		printf("%s\n", ret->content);
		ret = ret->next;
	}
	printf("___________\n");
	while (l)
	{
		printf("%s\n", l->content);
		l = l->next;
	}
	return 0;
}
*/

void	*ft_memcpy(void * restrict dst, const void * restrict src, size_t n)
{
	unsigned char	*cdst;
	unsigned char	*csrc;
	size_t			i;

	cdst = (unsigned char*)dst;
	csrc = (unsigned char*)src;
	i = 0;
	/*if (cdst == csrc)
		return (cdst);*/
	if (!cdst && !csrc)
		return (NULL);
	while (i < n)
	{
		cdst[i] = csrc[i];
		i++;
	}
	return (dst);
}

int	main()
{
	//printf("%s\n", strnstr("lorem ipsum dolor sit amet", "ipsumm", 30));
	//printf("%s\n", strnstr("lorem ipsum dolor sit amet", "consectetur", 30));
	//printf("%d\n", ft_strncmp("abcdghfh", "abcdwxyz", 4));  // -18  0
	//printf("%d\n", strncmp("zyxbcdefgh", "abcdwxyz", 0)); // 25 0
	//printf("%d\n", strncmp("abcdefgh", "", 0)); //97  0
	//printf("%d\n", ft_strncmp("", "test", 4));  // 0 -116
	//char b[] = "NULL";
	printf("%s\n", ft_memcpy("HULL", "HULL", 2));
}
