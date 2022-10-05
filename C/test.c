/*
* Author: Robert Dragan
* Github: nucata
* Date:  
* Description: Library for the test_string.
*/

#include <stdio.h>
#include <string.h>

int	test_str(char *s1, char *s2) {
	int	s1_len = strlen(s1);
	int	s2_len = strlen(s2);
	int	i = 0;
	
	if (s1_len != s2_len) {
		printf("# Test Faild :/\n");
		printf("Out: %s\n", s1);
		printf("Test: %s\n\n", s2);
		return (0);
	}
	while (i < s1_len) {
		if (s1[i] != s2[i]) {
			printf("# Test Faild :/\n");
			printf("Out: %s\n", s1);
			printf("Test: %s\n\n", s2);
			return (0);
		}
		i++;
	}
	printf("# Test Succeed :)\n");
	return (1);
}

int	test_int(int a1, int a2) {
	if (a1 != a2) {
		printf("# Test Failed :/\n");
		printf("Out: %d\tTest: %d\n\n", a1, a2);
		return (0);
	}
	printf("# Test Succeed ;)\n");
	return (1);
}

int	main(void) {
	test_str("Hola", "Hola");
	test_str("Hola", "Hol@");
	test_str("Hola", "Hol");
	test_str("Hola", "1234");
	test_str("hola", "Hola");
	test_int(1, 1);
	test_int(2, 2);
	test_int(0, 0);
	test_int(-1, -1);
	test_int(-2, -1);
	return (0);
}

