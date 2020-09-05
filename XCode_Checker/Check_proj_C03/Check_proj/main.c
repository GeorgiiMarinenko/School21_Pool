//
//  main.c
//  Check_proj
//
//  Created by Aragog Arlena on 8/16/20.
//  Copyright © 2020 Aragog Arlena. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2);
int ft_strncmp(char *s1, char *s2, unsigned int n);
char *ft_strcat(char *dest, char *src);
char *ft_strncat(char *dest, char *src, unsigned int nb);
char *ft_strstr(char *str, char *to_find);

int main(void)
{
	int	flag_ex00;
	//int	flag_ex01;
	char dest[20] = "123";
	char dest0[20] = "123";
	char dest1[20] = "123";
	char dest2[20] = "123";
	char dest3[30] = "This is School 21, bb!";
	char dest4[30] = "This is School 21, bb!";
	//char dest5[30] = "1234";
	flag_ex00 = 0;
	
	printf("ft_strcmp = %d ", ft_strcmp("aa", "aa"));
	printf("\nft_strcmp = %d ", ft_strcmp("aa", "ab"));
	printf("\nft_strcmp = %d ", ft_strcmp("ab", "aa"));
	printf("\n----");
	printf("\nstrcmp = %d ", flag_ex00 = strcmp("aa", "aa"));
	printf("\nstrcmp = %d ", flag_ex00 = strcmp("aa", "ab"));
	printf("\nstrcmp = %d ", flag_ex00 = strcmp("ab", "aa"));
	printf("\n******************************//");
	printf("\n1. aaa - aaa\n   aaa - abb\n   baa - aaa");
	printf("\n0 elem: ft_strncmp = %d ", ft_strncmp("aaa", "aaa",0));
	printf("\n0 elem: ft_strncmp = %d ", ft_strncmp("aaa", "abb",0));
	printf("\n0 elem: ft_strncmp = %d ", ft_strncmp("baa", "aaa",0));
	printf("\n----");
	printf("\n1 elem: ft_strncmp = %d ", ft_strncmp("aaa", "aaa",1));
	printf("\n1 elem: ft_strncmp = %d ", ft_strncmp("aaa", "abb",1));
	printf("\n1 elem: ft_strncmp = %d ", ft_strncmp("baa", "aaa",1));
	printf("\n----");
	printf("\n2 elem: ft_strncmp = %d ", ft_strncmp("aaa", "aaa",2));
	printf("\n2 elem: ft_strncmp = %d ", ft_strncmp("aaa", "abb",2));
	printf("\n2 elem: ft_strncmp = %d ", ft_strncmp("baa", "aaa",2));
	printf("\n----------------------");
	printf("\n0 elem: strncmp = %d ", strncmp("aaa", "aaa",0));
	printf("\n0 elem: strncmp = %d ", strncmp("aaa", "abb",0));
	printf("\n0 elem: strncmp = %d ", strncmp("baa", "aaa",0));
	printf("\n----");
	printf("\n1 elem: strncmp = %d ", strncmp("aaa", "aaa",1));
	printf("\n1 elem: strncmp = %d ", strncmp("aaa", "abb",1));
	printf("\n1 elem: strncmp = %d ", strncmp("baa", "aaa",1));
	printf("\n----");
	printf("\n2 elem: strncmp = %d ", strncmp("aaa", "aaa",2));
	printf("\n2 elem: strncmp = %d ", strncmp("aaa", "abb",2));
	printf("\n2 elem: strncmp = %d ", strncmp("baa", "aaa",2));
	printf("\n******************************//");
	printf("\ndest: 123 + src: qwerty");
	ft_strcat(dest0, "qwerty");
	printf("\nft_strcat dest: %s ", dest0);
	strcat(dest, "qwerty");
	printf("\nstrcat dest: \t%s", dest);
	printf("\n******************************//");
	printf("\ndest: 123 + src: qwerty (ONLY 5 symbols)");
	printf("\nft_strncat dest: %s ", ft_strncat(dest1, "qwerty",4));
	printf("\nft_strncat dest: %s", strncat(dest2, "qwerty", 4));
	printf("\n******************************//");
	printf("\nText dest: %s \nFIND: 'School ...'", dest4);
	printf("\nstrstr dest: %s", strstr(dest3, "School"));
	printf("\nft_strstr dest: %s", ft_strstr(dest4, "School"));
	printf("\n******************************//\n");
	//strlcat(dest5, "School", 3);
	//printf("\ndest: %d", strlcat(dest5, "School",10));
	
	return 0;
}
