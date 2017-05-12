#include <stdio.h>

int		ft_isalpha(char c);
int		ft_isdigit(char c);
int		ft_isalnum(char c);
int		ft_isascii(char c);
int		ft_isprint(char c);
int		ft_isupper(char c);
int		ft_islower(char c);
int		ft_toupper(char c);
int		ft_tolower(char c);

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

	return (0);
}
