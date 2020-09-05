/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarlena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 17:01:24 by aarlena           #+#    #+#             */
/*   Updated: 2020/08/15 17:05:55 by aarlena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

char	*ft_strcpy(char *dest, char *src);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
int	ft_str_is_alpha(const char *str);
int ft_str_is_numeric(char *str);
int ft_str_is_lowercase(char *str);
int ft_str_is_uppercase(char *str);
int  ft_str_is_printable(char *str);
char *ft_strupcase(char *str);
char *ft_strlowcase(char *str);
char *ft_strcapitalize(char *str);

int main(void)
{
	char dest1[15] = "qwertyui";
	char dest2[15] = "";
	char str_ex07[10] = "qwErtY";
	char str_ex08[10] = "QWErTy";
	char str_ex09[32] = "Hello, my little pool boy/girl:3";
	int	text_flag;
	int numb_flag;
	int lowercase_letters_flag;
	int uppercase_letters_flag;
	int is_printable;
	
	//Ex00
	printf("ft_strcpy\n");
	ft_strcpy(dest1,"Test1");
	printf("Ex00 - dest: %s ", dest1);
	//Ex01
	printf("\nft_strncpy");
	ft_strncpy(dest2,"Test2",7);
	printf("\nEx01 - dest: %s size = %lu ", dest2 ,sizeof(dest2));
	printf("\n___________________________________________________________________");
	//Ex02
	printf("\nft_str_is_alpha");
	text_flag = ft_str_is_alpha("");
	printf("\nEx02 Empty line: \t\t\t\t%d (1 - only letters, 0 - other)", text_flag);
	text_flag = ft_str_is_alpha("QWERtyui");
	printf("\nEx02 Letters are here: \t\t\t%d (1 - only letters, 0 - other)", text_flag);
	text_flag = ft_str_is_alpha("234567");
	printf("\nEx02 No letters: \t\t\t\t%d (1 - only letters, 0 - other)", text_flag);
	printf("\n___________________________________________________________________");
	//Ex03
	printf("\nft_str_is_numeric");
	numb_flag = ft_str_is_numeric("");
	printf("\nEx03 Empty line: \t\t\t\t%d (1 - only letters, 0 - other)", numb_flag);
	numb_flag = ft_str_is_numeric("1234");
	printf("\nEx03 All numbers are here: \t\t%d (1 - it's digits)", numb_flag);
	numb_flag = ft_str_is_numeric("weQrt34yh");
	printf("\nEx03 Mixed literals: \t\t\t%d (1 - it's digits)", numb_flag);
	printf("\n___________________________________________________________________");
	//Ex04
	printf("\nft_str_is_lowercase");
	lowercase_letters_flag = ft_str_is_lowercase("");
	printf("\nEx04 Empty line: \t\t\t\t%d (1 - only letters, 0 - other)", lowercase_letters_flag);
	lowercase_letters_flag = ft_str_is_lowercase("qwert");
	printf("\nEx04 All letters are lowercase: %d (1 - lowercase letters, 0 - other)", lowercase_letters_flag);
	lowercase_letters_flag = ft_str_is_lowercase("QWrtyERT");
	printf("\nEx04 All letters are mixed: \t%d (1 - lowercase letters, 0 - other)", lowercase_letters_flag);
	printf("\n___________________________________________________________________");
	//Ex05
	printf("\nft_str_is_uppercase");
	uppercase_letters_flag = ft_str_is_uppercase("");
	printf("\nEx05 Empty line: \t\t\t\t%d (1 - only letters, 0 - other)", uppercase_letters_flag);
	uppercase_letters_flag = ft_str_is_uppercase("QWERTY");
	printf("\nEx05 All letters are uppercase: %d (1 - uppercase letters, 0 - other)", uppercase_letters_flag);
	uppercase_letters_flag = ft_str_is_lowercase("QWEgfRT");
	printf("\nEx05 All letters are mixed: \t%d (1 - lowercase letters, 0 - other)", uppercase_letters_flag);
	printf("\n___________________________________________________________________");
	//Ex06
	printf("\nft_str_is_printable");
	is_printable = ft_str_is_printable("");
	printf("\nEx06 Is empty: \t\t\t\t\t%d (1 yes, 0 - no)", is_printable);
	is_printable = ft_str_is_printable("qwert");
	printf("\nEx06 Is printable: \t\t\t\t%d (1 yes, 0 - no)", is_printable);
	char symbol = '\n';
	is_printable = ft_str_is_printable(&symbol);
	printf("\nEx06 Is printable: \t\t\t\t%d (1 yes, 0 - no)", is_printable);
	printf("\n___________________________________________________________________");
	//Ex07
	printf("\nEx07 ft_strupcase");
	ft_strupcase(str_ex07);
	printf("\nEx07 Strupcase: %s", str_ex07);
	printf("\n-------------------------------------------------------------------");
	printf("\nEx08 ft_strlowcase");
	ft_strlowcase(str_ex08);
	printf("\nEx08 Strlowcase: %s", str_ex08);
	printf("\n-------------------------------------------------------------------");
	printf("\nEx09 ft_strcapitalize");
	ft_strcapitalize(str_ex09);
	printf("\nEx09 Strcapitalize: %s", str_ex09);
	printf("\n-------------------------------------------------------------------\n");
	return 0;
}
