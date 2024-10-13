/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_libft.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iriadyns <iriadyns@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 08:07:37 by iriadyns          #+#    #+#             */
/*   Updated: 2024/10/09 12:58:55 by iriadyns         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <string.h>
#include <unistd.h>
#include "libft.h"

void	test_ft_strlen()
{
	printf("Testing ft_strlen:\n");

	const char *str1 = "Hello, World!";
	const char *str2 = "";
	const char *str3 = "42";

	printf("ft_strlen('%s') = %zu, strlen('%s') = %zu\n", str1, ft_strlen(str1), str1, strlen(str1));
	printf("ft_strlen('%s') = %zu, strlen('%s') = %zu\n", str2, ft_strlen(str2), str2, strlen(str2));
	printf("ft_strlen('%s') = %zu, strlen('%s') = %zu\n", str3, ft_strlen(str3), str3, strlen(str3));
	printf("\n");
}

void	test_ft_memset()
{
	printf("Testing ft_memset:\n");

	char buffer1[10] = "abcdefghi";
	char buffer2[10] = "abcdefghi";

	ft_memset(buffer1, 'X', 5);
	memset(buffer2, 'X', 5);
	printf("ft_memset: %s\n", buffer1);
	printf("memset:    %s\n", buffer2);
	printf("\n");
}

void	test_ft_isalpha()
{
	printf("Testing ft_isalpha:\n");
	printf("ft_isalpha('A') = %d, isalpha('A') = %d\n", ft_isalpha('A'), isalpha('A'));
	printf("ft_isalpha('z') = %d, isalpha('z') = %d\n", ft_isalpha('z'), isalpha('z'));
	printf("ft_isalpha('1') = %d, isalpha('1') = %d\n", ft_isalpha('1'), isalpha('1'));
	printf("ft_isalpha('!') = %d, isalpha('!') = %d\n", ft_isalpha('!'), isalpha('!'));
	printf("\n");
}

void	test_ft_isdigit()
{
	printf("Testing ft_isdigit:\n");
	printf("ft_isdigit('A') = %d, isdigit('A') = %d\n", ft_isdigit('A'), isdigit('A'));
	printf("ft_isdigit('z') = %d, isdigit('z') = %d\n", ft_isdigit('z'), isdigit('z'));
	printf("ft_isdigit('1') = %d, isdigit('1') = %d\n", ft_isdigit('1'), isdigit('1'));
	printf("ft_isdigit('!') = %d, isdigit('!') = %d\n", ft_isdigit('!'), isdigit('!'));
	printf("\n");
}

void	test_ft_isalnum()
{
	printf("Testing ft_isalnum:\n");
	printf("ft_isalnum('A') = %d, isalnum('A') = %d\n", ft_isalnum('A'), isalnum('A'));
	printf("ft_isalnum('z') = %d, isalnum('z') = %d\n", ft_isalnum('z'), isalnum('z'));
	printf("ft_isalnum('1') = %d, isalnum('1') = %d\n", ft_isalnum('1'), isalnum('1'));
	printf("ft_isalnum('!') = %d, isalnum('!') = %d\n", ft_isalnum('!'), isalnum('!'));
	printf("\n");
}

void	test_ft_isascii()
{
	printf("Testing ft_isascii:\n");
	printf("ft_isascii('A') = %d, isascii('A') = %d\n", ft_isascii('A'), isascii('A'));
	printf("ft_isascii('z') = %d, isascii('z') = %d\n", ft_isascii('z'), isascii('z'));
	printf("ft_isascii('1') = %d, isascii('1') = %d\n", ft_isascii('1'), isascii('1'));
	printf("ft_isascii('!') = %d, isascii('!') = %d\n", ft_isascii('!'), isascii('!'));
	printf("\n");
}

void	test_ft_isprint()
{
	printf("Testing ft_isprint:\n");
	printf("ft_isprint('A') = %d, isprint('A') = %d\n", ft_isprint('A'), isprint('A'));
	printf("ft_isprint('z') = %d, isprint('z') = %d\n", ft_isprint('z'), isprint('z'));
	printf("ft_isprint('1') = %d, isprint('1') = %d\n", ft_isprint('1'), isprint('1'));
	printf("ft_isprint('!') = %d, isprint('!') = %d\n", ft_isprint('!'), isprint('!'));
	printf("\n");
}

void	test_ft_bzero()
{
	printf("Testing ft_bzero:\n");

	char buffer1[10] = "abcdefghi";
	char buffer2[10] = "abcdefghi";

	ft_bzero(buffer1, 5);
	bzero(buffer2, 5);
	printf("ft_bzero: ");
	printf("%02x %02x %02x %02x %02x %02x %02x %02x %02x %02x\n",
		(unsigned char)buffer1[0], (unsigned char)buffer1[1], (unsigned char)buffer1[2],
		(unsigned char)buffer1[3], (unsigned char)buffer1[4], (unsigned char)buffer1[5],
		(unsigned char)buffer1[6], (unsigned char)buffer1[7], (unsigned char)buffer1[8],
		(unsigned char)buffer1[9]);
	printf("bzero: ");
	printf("%02x %02x %02x %02x %02x %02x %02x %02x %02x %02x\n",
		(unsigned char)buffer2[0], (unsigned char)buffer2[1], (unsigned char)buffer2[2],
		(unsigned char)buffer2[3], (unsigned char)buffer2[4], (unsigned char)buffer2[5],
		(unsigned char)buffer2[6], (unsigned char)buffer2[7], (unsigned char)buffer2[8],
		(unsigned char)buffer2[9]);
	printf("\n");
}

void	test_ft_memcpy()
{
	printf("Testing ft_memcpy:\n");

	char source[] = "Hello, World!";
	char dest1[20];
	char dest2[20];

	ft_memcpy(dest1, source, strlen(source) + 1);
	memcpy(dest2, source, strlen(source) + 1);
	printf("ft_memcpy: %s\n", dest1);
	printf("memcpy: %s\n", dest2);
	printf("\n");
}

void test_ft_memmove()
{
	printf("Testing ft_memmove:\n");

	char src1[] = "Hello, World!";
	char dest1[20];
	char dest1_compare[20];

	ft_memmove(dest1, src1, 13);
	memmove(dest1_compare, src1, 13);

	printf("ft_memmove (no overlap): '%s'\n", dest1);
	printf("memmove (no overlap):    '%s'\n", dest1_compare);

	char overlap_src1[] = "0123456789";
	char overlap_src_compare1[] = "0123456789";

	ft_memmove(overlap_src1 + 2, overlap_src1, 8);
	memmove(overlap_src_compare1 + 2, overlap_src_compare1, 8);

	printf("ft_memmove (overlap, dest before src): '%s'\n", overlap_src1);
	printf("memmove (overlap, dest before src):    '%s'\n", overlap_src_compare1);

	char overlap_src2[] = "abcdefgh";
	char overlap_src_compare2[] = "abcdefgh";

	ft_memmove(overlap_src2, overlap_src2 + 2, 6);
	memmove(overlap_src_compare2, overlap_src_compare2 + 2, 6);

	printf("ft_memmove (overlap, src before dest): '%s'\n", overlap_src2);
	printf("memmove (overlap, src before dest):    '%s'\n", overlap_src_compare2);

	char empty_src[] = "Test";
	char empty_src_compare[] = "Test";

	ft_memmove(empty_src, empty_src, 0);
	memmove(empty_src_compare, empty_src_compare, 0);

	printf("ft_memmove (zero length): '%s'\n", empty_src);
	printf("memmove (zero length):    '%s'\n", empty_src_compare);
	printf("\n");
}

void	test_ft_strlcpy()
{
	printf("Testing ft_strlcpy:\n");

	char src[] = "Hello, World!";
	char dest1[20];
	char dest2[20];
	size_t test_ft = ft_strlcpy(dest1, src, sizeof(dest1));
	size_t test_orig = ft_strlcpy(dest2, src, sizeof(dest2));

	printf("ft_strlcpy: '%s', returned: %zu\n", dest1, test_ft);
	printf("strlcpy:    '%s', returned: %zu\n", dest2, test_orig);
	test_ft = ft_strlcpy(dest1, src, 6);
	test_orig = ft_strlcpy(dest2, src, 6);
	printf("ft_strlcpy (truncated): '%s', returned: %zu\n", dest1, test_ft);
	printf("strlcpy (truncated):    '%s', returned: %zu\n", dest2, test_orig);
	test_ft = ft_strlcpy(dest1, src, 0);
	test_orig = ft_strlcpy(dest2, src, 0);
	printf("ft_strlcpy (size 0): returned: %zu\n", test_ft);
	printf("strlcpy (size 0):    returned: %zu\n", test_orig);
	printf("\n");
}

void	test_ft_strlcat()
{
	char dest1[20] = "Hello, ";
	char src1[] = "World!";
	size_t ret1 = ft_strlcat(dest1, src1, sizeof(dest1));

	printf("ft_strlcat: '%s', returned: %zu\n", dest1, ret1);

	char dest1_compare[20] = "Hello, ";
	size_t ret1_compare = ft_strlcat(dest1_compare, src1, sizeof(dest1_compare));
	
	printf("strlcat: '%s', returned: %zu\n", dest1_compare, ret1_compare);

	char dest2[10] = "Hello";
	char src2[] = "World!";
	size_t ret2 = ft_strlcat(dest2, src2, sizeof(dest2));

	printf("ft_strlcat (truncated): '%s', returned: %zu\n", dest2, ret2);

	char dest2_compare[10] = "Hello";
	size_t ret2_compare = ft_strlcat(dest2_compare, src2, sizeof(dest2_compare));

	printf("strlcat (truncated): '%s', returned: %zu\n", dest2_compare, ret2_compare);

	char dest3[20] = "Hello, ";
	size_t ret3 = ft_strlcat(dest3, src1, 0);

	printf("ft_strlcat (size 0): '%s', returned: %zu\n", dest3, ret3);
}

void	test_ft_toupper()
{
	printf("Testing ft_toupper:\n");
	printf("ft_toupper('c') = '%c', toupper('c') = '%c'\n",
			ft_toupper('c'), toupper('c'));
	printf("ft_toupper('A') = '%c', toupper('A') = '%c'\n",
			ft_toupper('A'), toupper('A'));
	printf("ft_toupper('1') = '%c', toupper('1') = '%c'\n",
			ft_toupper('1'), toupper('1'));
	printf("ft_toupper('\\0') = '%c', toupper('\\0') = '%c'\n",
			ft_toupper('\0'), toupper('\0'));
	printf("\n");
}

void	test_ft_tolower()
{
	printf("Testing ft_tolower:\n");
	printf("ft_tolower('c') = '%c', tolower('c') = '%c'\n",
			ft_tolower('c'), tolower('c'));
	printf("ft_tolower('A') = '%c', tolower('A') = '%c'\n",
			ft_tolower('A'), tolower('A'));
	printf("ft_tolower('1') = '%c', tolower('1') = '%c'\n",
			ft_tolower('1'), tolower('1'));
	printf("ft_tolower('\\0') = '%c', tolower('\\0') = '%c'\n",
			ft_tolower('\0'), tolower('\0'));
	printf("\n");
}

void	test_ft_strchr()
{
	printf("Testing ft_strchr:\n");

	const char *str = "Hello, World!";
	char c1 = 'W';
	char c2 = 'z';
	char c3 = '\0';
	char *result_ft = ft_strchr(str, c1);
	char *result_std = strchr(str, c1);

	printf("ft_strchr('%s', '%c') = '%s', strchr('%s', '%c') = '%s'\n", str, c1, result_ft, str, c1, result_std);

	result_ft = ft_strchr(str, c2);
	result_std = strchr(str, c2);
	
	printf("ft_strchr('%s', '%c') = '%s', strchr('%s', '%c') = '%s'\n", str, c2, result_ft, str, c2, result_std);

	result_ft = ft_strchr(str, c3);
	result_std = strchr(str, c3);

	printf("ft_strchr('%s', '%c') = '%s', strchr('%s', '%c') = '%s'\n", str, c3, result_ft, str, c3, result_std);
	printf("\n");
}

void	test_ft_strrchr()
{
	printf("Testing ft_strrchr:\n");

	const char *str = "Hello, World!";
	char c1 = 'o';
	char c2 = 'z';
	char c3 = 'H';
	char c4 = '\0';
	char *result_ft = ft_strrchr(str, c1);
	char *result_std = strrchr(str, c1);
	
	printf("ft_strrchr('%s', '%c') = '%s', strrchr('%s', '%c') = '%s'\n", str, c1, result_ft, str, c1, result_std);

	result_ft = ft_strrchr(str, c2);
	result_std = strrchr(str, c2);

	printf("ft_strrchr('%s', '%c') = '%s', strrchr('%s', '%c') = '%s'\n", str, c2, result_ft, str, c2, result_std);

	result_ft = ft_strrchr(str, c3);
	result_std = strrchr(str, c3);

	printf("ft_strrchr('%s', '%c') = '%s', strrchr('%s', '%c') = '%s'\n", str, c3, result_ft, str, c3, result_std);

	result_ft = ft_strrchr(str, c4);
	result_std = strrchr(str, c4);

	printf("ft_strrchr('%s', '%c') = '%s', strrchr('%s', '%c') = '%s'\n", str, c4, result_ft, str, c4, result_std);
	printf("\n");
}

void	test_ft_strncmp()
{
	printf("Testing ft_strncmp:\n");

	char *str1 = "Hello, World!";
	char *str2 = "Hello, World!";
	char *str3 = "Hello, there!";
	char *str4 = "Hello!";
	char *str5 = "Hello, World!";
	char *str6 = "Hello, World!";
	int result1_ft = ft_strncmp(str1, str2, 13);
	int result1_std = strncmp(str1, str2, 13);

	printf("ft_strncmp('%s', '%s', 13) = %d, strncmp('%s', '%s', 13) = %d\n", str1, str2, result1_ft, str1, str2, result1_std);

	int result2_ft = ft_strncmp(str1, str3, 13);
	int result2_std = strncmp(str1, str3, 13);

	printf("ft_strncmp('%s', '%s', 13) = %d, strncmp('%s', '%s', 13) = %d\n", str1, str3, result2_ft, str1, str3, result2_std);

	int result3_ft = ft_strncmp(str1, str4, 6);
	int result3_std = strncmp(str1, str4, 6);

	printf("ft_strncmp('%s', '%s', 6) = %d, strncmp('%s', '%s', 6) = %d\n", str1, str4, result3_ft, str1, str4, result3_std);

	int result4_ft = ft_strncmp(str5, str6, 0);
	int result4_std = strncmp(str5, str6, 0);

	printf("ft_strncmp('%s', '%s', 0) = %d, strncmp('%s', '%s', 0) = %d\n", str5, str6, result4_ft, str5, str6, result4_std);
	printf("\n");
}

void	test_ft_memchr()
{
	printf("Testing ft_memchr:\n");

	const char *str = "Hello, World!";
	char target = 'o';
	char target_not_found = 'z';
	char *result1_ft = ft_memchr(str, target, strlen(str));
	char *result1_std = memchr(str, target, strlen(str));

	printf("ft_memchr('%s', '%c', %zu) = '%s', memchr('%s', '%c', %zu) = '%s'\n", 
			str, target, strlen(str), result1_ft, str, target, strlen(str), result1_std);

	char *result2_ft = ft_memchr(str, target_not_found, strlen(str));
	char *result2_std = memchr(str, target_not_found, strlen(str));

	printf("ft_memchr('%s', '%c', %zu) = %p, memchr('%s', '%c', %zu) = %p\n", 
			str, target_not_found, strlen(str), (void *)result2_ft, str, target_not_found, strlen(str), (void *)result2_std);

	char *result3_ft = ft_memchr(str, 'H', strlen(str));
	char *result3_std = memchr(str, 'H', strlen(str));

	printf("ft_memchr('%s', '%c', %zu) = '%s', memchr('%s', '%c', %zu) = '%s'\n", 
			str, 'H', strlen(str), result3_ft, str, 'H', strlen(str), result3_std);

	char *result4_ft = ft_memchr(str, target, 0);
	char *result4_std = memchr(str, target, 0);

	printf("ft_memchr('%s', '%c', 0) = %p, memchr('%s', '%c', 0) = %p\n", 
			str, target, (void *)result4_ft, str, target, (void *)result4_std);
	printf("\n");
}

void	test_ft_memcmp()
{
	printf("Testing ft_memcmp:\n");

	char block1[] = "Hello, World!";
	char block2[] = "Hello, World!";
	int result1_ft = ft_memcmp(block1, block2, strlen(block1));
	int result1_std = memcmp(block1, block2, strlen(block1));

	printf("ft_memcmp('%s', '%s', %zu) = %d, memcmp('%s', '%s', %zu) = %d\n", 
			block1, block2, strlen(block1), result1_ft, block1, block2, strlen(block1), result1_std);

	char block3[] = "Hello, World!";
	char block4[] = "Hello, world!";
	int result2_ft = ft_memcmp(block3, block4, strlen(block3));
	int result2_std = memcmp(block3, block4, strlen(block3));

	printf("ft_memcmp('%s', '%s', %zu) = %d, memcmp('%s', '%s', %zu) = %d\n", 
			block3, block4, strlen(block3), result2_ft, block3, block4, strlen(block3), result2_std);

	char block5[] = "Hello";
	char block6[] = "Hellz";
	int result3_ft = ft_memcmp(block5, block6, 4);
	int result3_std = memcmp(block5, block6, 4);

	printf("ft_memcmp('%s', '%s', 4) = %d, memcmp('%s', '%s', 4) = %d\n", 
			block5, block6, result3_ft, block5, block6, result3_std);

	char block7[] = "Hello";
	char block8[] = "Hello, World!";
	int result4_ft = ft_memcmp(block7, block8, 5);
	int result4_std = memcmp(block7, block8, 5);

	printf("ft_memcmp('%s', '%s', 5) = %d, memcmp('%s', '%s', 5) = %d\n", 
			block7, block8, result4_ft, block7, block8, result4_std);

	int result5_ft = ft_memcmp(block1, block2, 0);
	int result5_std = memcmp(block1, block2, 0);
	
	printf("ft_memcmp('%s', '%s', 0) = %d, memcmp('%s', '%s', 0) = %d\n", 
			block1, block2, result5_ft, block1, block2, result5_std);
	printf("\n");
}

void test_ft_strnstr()
{
	printf("Testing ft_strnstr:\n");

	const char *str1 = "Hello, World!";
	const char *to_find1 = "World";
	char *result1_ft = ft_strnstr(str1, to_find1, strlen(str1));
	char *result1_std = ft_strnstr(str1, to_find1, strlen(str1));

	printf("ft_strnstr('%s', '%s', %zu) = '%s', strnstr('%s', '%s', %zu) = '%s'\n", 
			str1, to_find1, strlen(str1), result1_ft, str1, to_find1, strlen(str1), result1_std);

	const char *to_find2 = "Hello";
	char *result2_ft = ft_strnstr(str1, to_find2, strlen(str1));
	char *result2_std = ft_strnstr(str1, to_find2, strlen(str1));

	printf("ft_strnstr('%s', '%s', %zu) = '%s', strnstr('%s', '%s', %zu) = '%s'\n", 
			str1, to_find2, strlen(str1), result2_ft, str1, to_find2, strlen(str1), result2_std);

	const char *to_find3 = "foo";
	char *result3_ft = ft_strnstr(str1, to_find3, strlen(str1));
	char *result3_std = ft_strnstr(str1, to_find3, strlen(str1));

	printf("ft_strnstr('%s', '%s', %zu) = '%s', strnstr('%s', '%s', %zu) = '%s'\n", 
			str1, to_find3, strlen(str1), result3_ft, str1, to_find3, strlen(str1), result3_std);

	char *result4_ft = ft_strnstr(str1, to_find1, 5);
	char *result4_std = ft_strnstr(str1, to_find1, 5);

	printf("ft_strnstr('%s', '%s', 5) = '%s', strnstr('%s', '%s', 5) = '%s'\n", 
			str1, to_find1, result4_ft, str1, to_find1, result4_std);

	const char *to_find4 = "";
	char *result5_ft = ft_strnstr(str1, to_find4, strlen(str1));
	char *result5_std = ft_strnstr(str1, to_find4, strlen(str1));

	printf("ft_strnstr('%s', '%s', %zu) = '%s', strnstr('%s', '%s', %zu) = '%s'\n", 
			str1, to_find4, strlen(str1), result5_ft, str1, to_find4, strlen(str1), result5_std);

	const char *empty_str = "";
	char *result6_ft = ft_strnstr(empty_str, to_find1, 1);
	char *result6_std = ft_strnstr(empty_str, to_find1, 1);

	printf("ft_strnstr('%s', '%s', 1) = '%s', strnstr('%s', '%s', 1) = '%s'\n", 
			empty_str, to_find1, result6_ft, empty_str, to_find1, result6_std);
	printf("\n");
}

void test_ft_atoi()
{
	printf("Testing ft_atoi:\n");

	const char *test1 = "1234";
	int result1_ft = ft_atoi(test1);
	int result1_std = atoi(test1);

	printf("ft_atoi('%s') = %d, atoi('%s') = %d\n", test1, result1_ft, test1, result1_std);

	const char *test2 = "-5678";
	int result2_ft = ft_atoi(test2);
	int result2_std = atoi(test2);

	printf("ft_atoi('%s') = %d, atoi('%s') = %d\n", test2, result2_ft, test2, result2_std);

	const char *test3 = "   42";
	int result3_ft = ft_atoi(test3);
	int result3_std = atoi(test3);

	printf("ft_atoi('%s') = %d, atoi('%s') = %d\n", test3, result3_ft, test3, result3_std);

	const char *test4 = "  -42";
	int result4_ft = ft_atoi(test4);
	int result4_std = atoi(test4);

	printf("ft_atoi('%s') = %d, atoi('%s') = %d\n", test4, result4_ft, test4, result4_std);

	const char *test5 = "123abc";
	int result5_ft = ft_atoi(test5);
	int result5_std = atoi(test5);

	printf("ft_atoi('%s') = %d, atoi('%s') = %d\n", test5, result5_ft, test5, result5_std);

	const char *test6 = "";
	int result6_ft = ft_atoi(test6);
	int result6_std = atoi(test6);

	printf("ft_atoi('%s') = %d, atoi('%s') = %d\n", test6, result6_ft, test6, result6_std);

	const char *test7 = "2147483648";
	int result7_ft = ft_atoi(test7);
	int result7_std = atoi(test7);

	printf("ft_atoi('%s') = %d, atoi('%s') = %d\n", test7, result7_ft, test7, result7_std);
	printf("\n");
}

void test_ft_calloc()
{
	printf("Testing ft_calloc:\n");
	printf("Test case 1: Allocating memory for 5 integers\n");

	int *arr1_ft = (int *)ft_calloc(5, sizeof(int));
	int *arr1_std = (int *)calloc(5, sizeof(int));

	printf("Comparing results:\n");
	printf("arr1_ft[0] = %d, arr1_std[0] = %d\n", arr1_ft[0], arr1_std[0]);
	printf("arr1_ft[1] = %d, arr1_std[1] = %d\n", arr1_ft[1], arr1_std[1]);
	printf("arr1_ft[2] = %d, arr1_std[2] = %d\n", arr1_ft[2], arr1_std[2]);
	printf("arr1_ft[3] = %d, arr1_std[3] = %d\n", arr1_ft[3], arr1_std[3]);
	printf("arr1_ft[4] = %d, arr1_std[4] = %d\n", arr1_ft[4], arr1_std[4]);
	free(arr1_ft);
	free(arr1_std);
	printf("\nTest case 2: Allocating memory for 0 integers\n");

	int *arr2_ft = (int *)ft_calloc(0, sizeof(int));
	int *arr2_std = (int *)calloc(0, sizeof(int));

	if (arr2_ft == NULL && arr2_std == NULL)
	{
		printf("Both ft_calloc and standard calloc correctly returned NULL for zero allocation.\n");
	}
	else
	{
		printf("Unexpected behavior: one of the allocations did not return NULL.\n");
	}
	printf("\nTest case 3: Allocating memory for 3 characters\n");

	char *arr3_ft = (char *)ft_calloc(3, sizeof(char));
	char *arr3_std = (char *)calloc(3, sizeof(char));

	printf("Comparing results:\n");
	printf("arr3_ft[0] = '%c' (ASCII: %d), arr3_std[0] = '%c' (ASCII: %d)\n", arr3_ft[0], arr3_ft[0], arr3_std[0], arr3_std[0]);
	printf("arr3_ft[1] = '%c' (ASCII: %d), arr3_std[1] = '%c' (ASCII: %d)\n", arr3_ft[1], arr3_ft[1], arr3_std[1], arr3_std[1]);
	printf("arr3_ft[2] = '%c' (ASCII: %d), arr3_std[2] = '%c' (ASCII: %d)\n", arr3_ft[2], arr3_ft[2], arr3_std[2], arr3_std[2]);
	free(arr3_ft);
	free(arr3_std);
	printf("\nTest case 4: Allocating memory for 1,000,000 integers\n");

	int *arr4_ft = (int *)ft_calloc(1000000, sizeof(int));
	int *arr4_std = (int *)calloc(1000000, sizeof(int));

	if (arr4_ft && arr4_std)
	{
		printf("Memory allocated successfully!\n");
		printf("arr4_ft[0] = %d, arr4_std[0] = %d\n", arr4_ft[0], arr4_std[0]);
		printf("arr4_ft[999999] = %d, arr4_std[999999] = %d\n", arr4_ft[999999], arr4_std[999999]);
	}
	else
	{
		printf("Memory allocation failed!\n");
	}
	free(arr4_ft);
	free(arr4_std);
	printf("\n");
}

void test_ft_strdup()
{
	printf("Testing ft_strdup:\n");

	const char *src1 = "Hello, World!";
	char *result1_ft = ft_strdup(src1);
	char *result1_std = strdup(src1);

	printf("Test case 1:\n");
	printf("ft_strdup('%s') = '%s', strdup('%s') = '%s'\n", 
			src1, result1_ft, src1, result1_std);
	free(result1_ft);
	free(result1_std);

	const char *src2 = "";
	char *result2_ft = ft_strdup(src2);
	char *result2_std = strdup(src2);

	printf("\nTest case 2:\n");
	printf("ft_strdup('%s') = '%s', strdup('%s') = '%s'\n", 
			src2, result2_ft, src2, result2_std);
	free(result2_ft);
	free(result2_std);

	const char *src3 = "Special characters: @#^&*()";
	char *result3_ft = ft_strdup(src3);
	char *result3_std = strdup(src3);

	printf("\nTest case 3:\n");
	printf("ft_strdup('%s') = '%s', strdup('%s') = '%s'\n", 
			src3, result3_ft, src3, result3_std);
	free(result3_ft);
	free(result3_std);

	const char *src4 = "1234567890";
	char *result4_ft = ft_strdup(src4);
	char *result4_std = strdup(src4);

	printf("\nTest case 4:\n");
	printf("ft_strdup('%s') = '%s', strdup('%s') = '%s'\n", 
			src4, result4_ft, src4, result4_std);
	free(result4_ft);
	free(result4_std);

	const char *src5 = "A very long string to test the ft_strdup function.";
	char *result5_ft = ft_strdup(src5);
	char *result5_std = strdup(src5);

	printf("\nTest case 5:\n");
	printf("ft_strdup('%s') = '%s', strdup('%s') = '%s'\n", 
			src5, result5_ft, src5, result5_std);
	free(result5_ft);
	free(result5_std);
	printf("\n");
}

void	test_ft_substr()
{
	printf("Testing ft_substr:\n");

	const char *str1 = "Hello, World!";
	char *result1 = ft_substr(str1, 0, 5);

	printf("ft_substr('%s', 0, 5) = '%s' (expected: 'Hello')\n", str1, result1);
	free(result1);

	char *result2 = ft_substr(str1, 7, 5);
	
	printf("ft_substr('%s', 7, 5) = '%s' (expected: 'World')\n", str1, result2);
	free(result2);

	char *result3 = ft_substr(str1, 7, 10);

	printf("ft_substr('%s', 7, 10) = '%s' (expected: 'World!')\n", str1, result3);
	free(result3);

	char *result4 = ft_substr(str1, 15, 5);

	printf("ft_substr('%s', 15, 5) = '%s' (expected: '')\n", str1, result4);
	free(result4);

	char *result5 = ft_substr(str1, 0, 0);

	printf("ft_substr('%s', 0, 0) = '%s' (expected: '')\n", str1, result5);
	free(result5);

	char *result6 = ft_substr(str1, 0, strlen(str1));

	printf("ft_substr('%s', 0, %zu) = '%s' (expected: '%s')\n", str1, strlen(str1), result6, str1);
	free(result6);

	char *result7 = ft_substr(NULL, 0, 5);

	printf("ft_substr(NULL, 0, 5) = '%s' (expected: NULL or empty string)\n", result7 ? result7 : "NULL");
	if (result7)
		free(result7);
	printf("\n");
}

void	test_ft_strjoin()
{
	printf("Testing ft_strjoin:\n");

	const char *str1 = "Hello, ";
	const char *str2 = "World!";
	char *result1 = ft_strjoin(str1, str2);
	printf("ft_strjoin('%s', '%s') = '%s' (expected: 'Hello, World!')\n", str1, str2, result1);
	free(result1);

	const char *empty_str = "";
	char *result2 = ft_strjoin(str1, empty_str);
	printf("ft_strjoin('%s', '%s') = '%s' (expected: 'Hello, ')\n", str1, empty_str, result2);
	free(result2);

	char *result3 = ft_strjoin(empty_str, empty_str);
	printf("ft_strjoin('%s', '%s') = '%s' (expected: '')\n", empty_str, empty_str, result3);
	free(result3);

	char *result4 = ft_strjoin(NULL, str2);
	printf("ft_strjoin(NULL, '%s') = '%s' (expected: '%s')\n", str2, result4 ? result4 : "NULL", str2);
	if (result4)
		free(result4);

	printf("\n");
}

void	test_ft_strtrim()
{
	printf("Testing ft_strtrim:\n");

	const char *str1 = "   Hello, World!   ";
	const char *set1 = " ";
	char *result1 = ft_strtrim(str1, set1);

	printf("ft_strtrim('%s', '%s') = '%s' (expected: 'Hello, World!')\n", str1, set1, result1 ? result1 : "NULL");
	free(result1);

	const char *str2 = "xxHello, World!yy";
	const char *set2 = "xy";
	char *result2 = ft_strtrim(str2, set2);

	printf("ft_strtrim('%s', '%s') = '%s' (expected: 'Hello, World!')\n", str2, set2, result2 ? result2 : "NULL");
	free(result2);

	const char *str3 = "Hello, World!";
	const char *set3 = " ";
	char *result3 = ft_strtrim(str3, set3);

	printf("ft_strtrim('%s', '%s') = '%s' (expected: 'Hello, World!')\n", str3, set3, result3 ? result3 : "NULL");
	free(result3);

	const char *str4 = "";
	const char *set4 = " ";
	char *result4 = ft_strtrim(str4, set4);

	printf("ft_strtrim('%s', '%s') = '%s' (expected: '')\n", str4, set4, result4 ? result4 : "NULL");
	free(result4);

	const char *str5 = "xxxxxxx";
	const char *set5 = "x";
	char *result5 = ft_strtrim(str5, set5);

	printf("ft_strtrim('%s', '%s') = '%s' (expected: '')\n", str5, set5, result5 ? result5 : "NULL");
	free(result5);

	char *result6 = ft_strtrim(NULL, set1);

	printf("ft_strtrim(NULL, '%s') = '%s' (expected: NULL)\n", set1, result6 ? result6 : "NULL");

	char *result7 = ft_strtrim(str1, NULL);

	printf("ft_strtrim('%s', NULL) = '%s' (expected: NULL)\n", str1, result7 ? result7 : "NULL");
	printf("\n");
}

void	test_ft_split()
{
	printf("Testing ft_split:\n");

	const char *str1 = "Hello, World!";
	char **result1 = ft_split(str1, ' ');

	printf("ft_split('%s', ' ') = [", str1);

	int i = 0;

	while (result1[i])
	{
		printf("'%s'%s", result1[i], result1[i + 1] ? ", " : "");
		free(result1[i]);
		i++;
	}
	free(result1);
	printf("]\n");

	const char *str2 = "Split,,this,string";
	char **result2 = ft_split(str2, ',');

	printf("ft_split('%s', ',') = [", str2);
	i = 0;
	while (result2[i])
	{
		printf("'%s'%s", result2[i], result2[i + 1] ? ", " : "");
		free(result2[i]);
		i++;
	}
	free(result2);
	printf("]\n");

	const char *str3 = "";
	char **result3 = ft_split(str3, ' ');

	printf("ft_split('%s', ' ') = [", str3);
	printf("]\n");
	free(result3);

	const char *str4 = "NoDelimiters";
	char **result4 = ft_split(str4, ' ');

	printf("ft_split('%s', ' ') = [", str4);
	i = 0;
	while (result4[i])
	{
		printf("'%s'%s", result4[i], result4[i + 1] ? ", " : "");
		free(result4[i]);
		i++;
	}
	free(result4);
	printf("]\n");

	const char *str5 = "!!!";
	char **result5 = ft_split(str5, '!');

	printf("ft_split('%s', '!') = [", str5);
	printf("]\n");
	free(result5);

	const char *str6 = "  Hello  World  ";
	char **result6 = ft_split(str6, ' ');

	printf("ft_split('%s', ' ') = [", str6);
	i = 0;
	while (result6[i])
	{
		printf("'%s'%s", result6[i], result6[i + 1] ? ", " : "");
		free(result6[i]);
		i++;
	}
	free(result6);
	printf("]\n");

	char **result7 = ft_split(NULL, ' ');

	printf("ft_split(NULL, ' ') = '%s' (expected: NULL)\n", result7 ? "NOT NULL" : "NULL");
	if (result7)
		free(result7);
	printf("\n");
}

void	test_ft_itoa()
{
	printf("Testing ft_itoa:\n");

	int num1 = 12345;
	char *result1 = ft_itoa(num1);

	printf("ft_itoa(%d) = '%s'\n", num1, result1);
	free(result1);

	int num2 = -67890;
	char *result2 = ft_itoa(num2);

	printf("ft_itoa(%d) = '%s'\n", num2, result2);
	free(result2);

	int num3 = 0;
	char *result3 = ft_itoa(num3);

	printf("ft_itoa(%d) = '%s'\n", num3, result3);
	free(result3);

	int num4 = -2147483648;
	char *result4 = ft_itoa(num4);

	printf("ft_itoa(%d) = '%s'\n", num4, result4);
	free(result4);

	int num5 = 7;
	char *result5 = ft_itoa(num5);

	printf("ft_itoa(%d) = '%s'\n", num5, result5);
	free(result5);

	int num6 = -3;
	char *result6 = ft_itoa(num6);

	printf("ft_itoa(%d) = '%s'\n", num6, result6);
	free(result6);

	int num7 = 2147483647;
	char *result7 = ft_itoa(num7);

	printf("ft_itoa(%d) = '%s'\n", num7, result7);
	free(result7);
	printf("\n");
}

char	ft_toupper_wrapper(unsigned int index, char c)
{
	return ft_toupper(c);
}

void	test_ft_strmapi()
{
	printf("Testing ft_strmapi:\n");

	char *str1 = "hello";
	char *result1 = ft_strmapi(str1, ft_toupper_wrapper);

	printf("ft_strmapi(\"%s\", ft_toupper_wrapper) = \"%s\"\n", str1, result1);
	free(result1);

	char *str2 = "";
	char *result2 = ft_strmapi(str2, ft_toupper_wrapper);

	printf("ft_strmapi(\"%s\", ft_toupper_wrapper) = \"%s\"\n", str2, result2);
	free(result2);

	char *str3 = "Hello, World!";
	char *result3 = ft_strmapi(str3, ft_toupper_wrapper);

	printf("ft_strmapi(\"%s\", ft_toupper_wrapper) = \"%s\"\n", str3, result3);
	free(result3);

	char *str4 = "abcdefghijklmnopqrstuvwxyz";
	char *result4 = ft_strmapi(str4, ft_toupper_wrapper);

	printf("ft_strmapi(\"%s\", ft_toupper_wrapper) = \"%s\"\n", str4, result4);
	free(result4);

	char *str5 = "1234!@#$abcd";
	char *result5 = ft_strmapi(str5, ft_toupper_wrapper);

	printf("ft_strmapi(\"%s\", ft_toupper_wrapper) = \"%s\"\n", str5, result5);
	free(result5);
	printf("\n");
}

void	test_toupper(unsigned int index, char *c)
{
	if (*c >= 'a' && *c <= 'z')
		*c -= 32;
}

void	test_ft_striteri()
{
	char str1[] = "hello, world!";
	char str2[] = "libft is awesome!";
	char str3[] = "c programming";

	printf("Before ft_striteri: %s\n", str1);
	ft_striteri(str1, test_toupper);
	printf("After ft_striteri: %s\n", str1);
	printf("Before ft_striteri: %s\n", str2);
	ft_striteri(str2, test_toupper);
	printf("After ft_striteri: %s\n", str2);
	printf("Before ft_striteri: %s\n", str3);
	ft_striteri(str3, test_toupper);
	printf("After ft_striteri: %s\n", str3);
}

void test_ft_putchar_fd()
{
	printf("Testing ft_putchar_fd:\n");
	ft_putchar_fd('A', STDOUT_FILENO);
	ft_putchar_fd('B', STDOUT_FILENO);
	ft_putchar_fd('\n', STDOUT_FILENO);
	ft_putchar_fd('C', STDERR_FILENO);
	ft_putchar_fd('D', STDERR_FILENO);
	ft_putchar_fd('\n', STDERR_FILENO);
}

void	test_ft_putstr_fd()
{
	char *str1 = "Hello, World!";
	char *str2 = "This is a test.";
	char *str3 = "";
	char *str4 = NULL;

	ft_putstr_fd(str1, STDOUT_FILENO);
	ft_putstr_fd("\n", STDOUT_FILENO);
	ft_putstr_fd(str2, STDOUT_FILENO);
	ft_putstr_fd("\n", STDOUT_FILENO);
	ft_putstr_fd(str1, STDERR_FILENO);
	ft_putstr_fd("\n", STDERR_FILENO);
	ft_putstr_fd(str2, STDERR_FILENO);
	ft_putstr_fd("\n", STDERR_FILENO);
	ft_putstr_fd(str3, STDOUT_FILENO);
	ft_putstr_fd("\n", STDOUT_FILENO);
	ft_putstr_fd(str4, STDOUT_FILENO);
	ft_putstr_fd("\n", STDOUT_FILENO);
}

void	test_ft_putendl_fd()
{
	char *str1 = "Hello, World!";
	char *str2 = "This is a test.";
	char *str3 = "";
	char *str4 = NULL;

	ft_putendl_fd(str1, STDOUT_FILENO);
	ft_putendl_fd(str2, STDOUT_FILENO);
	ft_putendl_fd(str1, STDERR_FILENO);
	ft_putendl_fd(str2, STDERR_FILENO);
	ft_putendl_fd(str3, STDOUT_FILENO);
	ft_putendl_fd(str4, STDOUT_FILENO);
}

void	test_ft_putnbr_fd()
{
	ft_putnbr_fd(12345, STDOUT_FILENO);
	write(STDOUT_FILENO, "\n", 1);
	ft_putnbr_fd(-54321, STDOUT_FILENO);
	write(STDOUT_FILENO, "\n", 1);
	ft_putnbr_fd(0, STDOUT_FILENO);
	write(STDOUT_FILENO, "\n", 1);
	ft_putnbr_fd(-2147483648, STDOUT_FILENO);
	write(STDOUT_FILENO, "\n", 1);
	ft_putnbr_fd(2147483647, STDOUT_FILENO);
	write(STDOUT_FILENO, "\n", 1);
	ft_putnbr_fd(-100, STDERR_FILENO);
	write(STDERR_FILENO, "\n", 1);
}


int	main()
{
	test_ft_strlen();
	test_ft_memset();
	test_ft_isalpha();
	test_ft_isdigit();
	test_ft_isalnum();
	test_ft_isascii();
	test_ft_isprint();
	test_ft_bzero();
	test_ft_memcpy();
	test_ft_memmove();
	test_ft_strlcpy();
	test_ft_strlcat();
	test_ft_toupper();
	test_ft_tolower();
	test_ft_strchr();
	test_ft_strrchr();
	test_ft_strncmp();
	test_ft_memchr();
	test_ft_memcmp();
	test_ft_strnstr();
	test_ft_atoi();
	test_ft_calloc();
	test_ft_strdup();
	test_ft_substr();
	test_ft_strjoin();
	test_ft_strtrim();
	test_ft_split();
	test_ft_itoa();
	test_ft_strmapi();
	test_ft_striteri();
	test_ft_putchar_fd();
	test_ft_putstr_fd();
	test_ft_putendl_fd();
	test_ft_putnbr_fd();
	return (0);
}
