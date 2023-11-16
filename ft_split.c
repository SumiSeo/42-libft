/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumseo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 13:34:26 by sumseo            #+#    #+#             */
/*   Updated: 2023/11/16 16:26:56 by sumseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>
#include <stdlib.h>




size_t	count_words(char const *str, char c)
{
	size_t	length;
	size_t	count;
	count= 0;
	length = 0;
	while(str[length])
	{
		if(str[length]==c)
		{
			printf("Find seperator %c\n", str[length]);
			count++;
		}
		length++;
	}
	printf("words count %ld\n",count);
	return count+1;
}


char *allocate_malloc(char const *str,char c,size_t total)
{

		char **casted_s;
		casted_s = (char**) malloc(sizeof(char*) * total);
		casted_s[0][0]=str[0];
		
/*		while(str[i])
		{	
			j = 0;
			while(str[i] !=c)
			{
				casted_s[i][j] = str[i];
				j++;
			}
			i++;

		}*/
		printf("%c\n",c);
		return "test";
}

char	**ft_split(char const *s, char c)
{
		char *temp = "test";
		char **temp2 = &temp;
		size_t total = count_words(s,c);
		allocate_malloc(s,c,total);
		printf("test");		
		if(!c || !s)
			return NULL;
		
		
		return temp2;
}	


int	main()
{
	char *a = "This-is-the-test-string";
	char b = '-'; 
	ft_split(a,b);
}
