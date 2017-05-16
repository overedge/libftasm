#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int		ft_isalpha(char c);
int		ft_isdigit(char c);
int		ft_isalnum(char c);
int		ft_isascii(char c);
int		ft_isprint(char c);
int		ft_isupper(char c);
int		ft_islower(char c);
int		ft_isspace(char c);
int		ft_toupper(char c);
int		ft_tolower(char c);
void	ft_bzero(void *s, size_t n);
char	*ft_strcat(char *restrict s1, const char *restrict s2);
size_t	ft_strlen(const char *s);
int		ft_puts (const char *s);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
void	ft_putstr(const char *str);
void	*ft_memset(void *s, int c, size_t n);
void	*ft_memcpy (void *dest, const void *src, size_t n);
char	*ft_strdup(const char *s1);

int		main(void)
{
	printf("✅--- IS ALPHA TESTS ---✅ \n");
	printf("ft_isalpha('a') = %d\n", ft_isalpha('a'));
	printf("ft_isalpha('Z') = %d\n", ft_isalpha('Z'));
	printf("ft_isalpha('1') = %d\n", ft_isalpha('1'));
	printf("ft_isalpha(1) = %d\n", ft_isalpha(1));
	printf("ft_isalpha(-8) = %d\n", ft_isalpha(-8));
	printf("ft_isalpha(222) = %d\n\n", ft_isalpha(222));

	printf("✅--- IS DIGIT  TESTS ---✅ \n");
	printf("ft_isdigit('a') = %d\n", ft_isdigit('a'));
	printf("ft_isdigit('Z') = %d\n", ft_isdigit('Z'));
	printf("ft_isdigit('1') = %d\n", ft_isdigit('1'));
	printf("ft_isdigit(1) = %d\n", ft_isdigit(1));
	printf("ft_isdigit(-8) = %d\n", ft_isdigit(-8));
	printf("ft_isdigit(222) = %d\n\n", ft_isdigit(222));

	printf("✅--- IS ALNUM  TESTS ---✅ \n");
	printf("ft_isalnum('a') = %d\n", ft_isalnum('a'));
	printf("ft_isalnum('Z') = %d\n", ft_isalnum('Z'));
	printf("ft_isalnum('1') = %d\n", ft_isalnum('1'));
	printf("ft_isalnum(1) = %d\n", ft_isalnum(1));
	printf("ft_isalnum(-8) = %d\n", ft_isalnum(-8));
	printf("ft_isalnum(222) = %d\n\n", ft_isalnum(222));

	printf("✅--- IS ASCII  TESTS ---✅ \n");
	printf("ft_isascii('a') = %d\n", ft_isascii('a'));
	printf("ft_isascii('Z') = %d\n", ft_isascii('Z'));
	printf("ft_isascii('1') = %d\n", ft_isascii('1'));
	printf("ft_isascii(1) = %d\n", ft_isascii(1));
	printf("ft_isascii(-8) = %d\n", ft_isascii(-8));
	printf("ft_isascii(222) = %d\n\n", ft_isascii(222));

	printf("✅--- IS PRINT  TESTS ---✅ \n");
	printf("ft_isprint('a') = %d\n", ft_isprint('a'));
	printf("ft_isprint('Z') = %d\n", ft_isprint('Z'));
	printf("ft_isprint('1') = %d\n", ft_isprint('1'));
	printf("ft_isprint(1) = %d\n", ft_isprint(1));
	printf("ft_isprint(-8) = %d\n", ft_isprint(-8));
	printf("ft_isprint(' ') = %d\n", ft_isprint(' '));
	printf("ft_isprint('\\t') = %d\n", ft_isprint('\t'));
	printf("ft_isprint(222) = %d\n\n", ft_isprint(222));

	printf("✅--- IS UPPER TESTS ---✅ \n");
	printf("ft_isupper('a') = %d\n", ft_isupper('a'));
	printf("ft_isupper('Z') = %d\n", ft_isupper('Z'));
	printf("ft_isupper('1') = %d\n", ft_isupper('1'));
	printf("ft_isupper(1) = %d\n", ft_isupper(1));
	printf("ft_isupper(-8) = %d\n", ft_isupper(-8));
	printf("ft_isupper(' ') = %d\n", ft_isupper(' '));
	printf("ft_isupper('\\t') = %d\n", ft_isupper('\t'));
	printf("ft_isupper(222) = %d\n\n", ft_isupper(222));

	printf("✅--- IS LOWER  TESTS ---✅ \n");
	printf("ft_islower('a') = %d\n", ft_islower('a'));
	printf("ft_islower('Z') = %d\n", ft_islower('Z'));
	printf("ft_islsower('1') = %d\n", ft_islower('1'));
	printf("ft_islower(1) = %d\n", ft_islower(1));
	printf("ft_islower(-8) = %d\n", ft_islower(-8));
	printf("ft_islower(' ') = %d\n", ft_islower(' '));
	printf("ft_islower('\\t') = %d\n", ft_islower('\t'));
	printf("ft_islower(222) = %d\n\n", ft_islower(222));

	printf("✅--- IS SPACE  TESTS ---✅ \n");
	printf("ft_isspace('a') = %d\n", ft_isspace('a'));
	printf("ft_isspace('Z') = %d\n", ft_isspace('Z'));
	printf("ft_isspace('1') = %d\n", ft_isspace('1'));
	printf("ft_isspace(1) = %d\n", ft_isspace(1));
	printf("ft_isspace(-8) = %d\n", ft_isspace(-8));
	printf("ft_isspace(' ') = %d\n", ft_isspace(' '));
	printf("ft_isspace('\\t') = %d\n\n", ft_isspace('\t'));

	printf("✅--- TO UPPER TESTS ---✅ \n");
	printf("ft_toupper('a') = %c\n", ft_toupper('a'));
	printf("ft_toupper('Z') = %c\n", ft_toupper('Z'));
	printf("ft_toupper('1') = %c\n", ft_toupper('1'));
	printf("ft_toupper(1) = %c\n", ft_toupper(1));
	printf("ft_toupper(-8) = %c\n", ft_toupper(-8));
	printf("ft_toupper(' ') = %c\n", ft_toupper(' '));
	printf("ft_toupper('\\t') = %c\n", ft_toupper('\t'));
	printf("ft_toupper('222') = %c\n\n", ft_toupper(222));

	printf("✅--- TO LOWER TESTS ---✅ \n");
	printf("ft_tolower('a') = %c\n", ft_tolower('a'));
	printf("ft_tolower('Z') = %c\n", ft_tolower('Z'));
	printf("ft_tolower('1') = %c\n", ft_tolower('1'));
	printf("ft_tolower(1) = %c\n", ft_tolower(1));
	printf("ft_tolower(-8) = %c\n", ft_tolower(-8));
	printf("ft_tolower(' ') = %c\n", ft_tolower(' '));
	printf("ft_tolower('\\t') = %c\n", ft_tolower('\t'));
	printf("ft_tolower(222) = %c\n\n", ft_tolower(222));
	
	char *str;
	str = (char*)malloc(5);
	str = strcpy(str, "toto");

	printf("✅---  BZERO TESTS ---✅ \n");
	printf("STR = [%s]\n", str);
	ft_bzero(str, 2);
	printf("BZERO(STR, 2) = [%s]\n\n", str);

	char str3[50] = "coucou";
	char str4[20] = " sava !";

	printf("✅---  STRCAT TESTS ---✅ \n");
	printf("STRCAT(\"COUCOU\", \" SAVA !\") = %s \n\n", ft_strcat(str3, str4));

	printf("✅--- TO STRLEN TESTS ---✅ \n");
	printf("STRLEN(\"1234567890\") = %zu\n", ft_strlen("1234567890"));
	printf("STRLEN(\"TOTO\") = %zu\n", ft_strlen("TOTO"));
	printf("STRLEN(NULL) = %zu\n", ft_strlen(NULL));
	printf("STRLEN(\"\") = %zu\n\n", ft_strlen(""));

	printf("✅--- PUTS TESTS ---✅ \n");
	ft_puts("coucoudsssssssdddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddd ddddddddddddddddddddddddddddddddd x ddddddddddd");
	ft_puts("42");
	ft_puts(NULL);
	ft_puts("1234567890");
	ft_puts("");
	printf("\n");

	printf("✅1--- PUTSTR TESTS ---✅ \n");
	ft_putstr("coucoudsssssssdddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddd ddddddddddddddddddddddddddddddddd x ddddddddddd\n");
	ft_putstr("42\n");
	ft_putstr(NULL);
	ft_putstr("1234567890\n");
	ft_putstr("12345 😎 7890\n\n");
	ft_putstr("");


	char str5[50];
	printf("✅1--- MEMSET TESTS ---✅ \n");
	printf("MEMSET(str, '4', 10) = %s\n", ft_memset(str5, '2', 10));
	printf("MEMSET(str, '4', 10) = %s\n", ft_memset(str5, '4', 9));
	printf("MEMSET(str, '4', 10) = %s\n\n", ft_memset(str5, 'B', 3));

	char str6[50];
	printf("✅1--- MEMCPY TESTS ---✅ \n");
	printf("MEMCPY(str2, str, 0) = %s\n", ft_memcpy(str6, str5, 0));
	printf("MEMCPY(str2, NULL, 30) = %s\n", ft_memcpy(str6, NULL, 30));
	printf("MEMCPY(str2, str, 5) = %s\n\n", ft_memcpy(str6, str5, 6));



	printf("✅1--- STRDUP TESTS ---✅ \n");
	char *coucou = ft_strdup("COUCOU");
	printf("char *coucou = ft_strdup(\"COUCOU\") = %s\n\n", coucou);


	printf("✅--- STRCHR TEST ---✅ \n");
	printf("STRCHR(\"COUCOU MOI C X\", 'X') = %s\n", ft_strchr("COUCOU MOI C X", 'X'));
	printf("STRCHR(\"COUCOU MOI C X\", 'Y') = %s\n", ft_strchr("COUCOU MOI C X", 'Y'));
	printf("STRCHR(\"COUCOU MOI C X\", 'M') = %s\n\n", ft_strchr("COUCOU MOI C X", 'M'));

	printf("✅--- STRRCHR TEST ---✅ \n");
	printf("STRRCHR(\"COUCOU MOI C X\", 'U') = %s\n", ft_strrchr("COUCOU MOI C X", 'U'));
	printf("STRRCHR(\"COUCOU MOI C X\", 'X') = %s\n", ft_strrchr("COUCOU MOI C X", 'X'));
	printf("STRRCHR(\"COUCOU MOI C X\", 'Y') = %s\n\n", ft_strrchr("COUCOU MOI C X", 'Y'));

	return (0);
}
