#include <stdio.h>

int main()
{
	int numbers[] = {10, 20, 30, 40, 50};
	char name[] = "Victor";
	char full_name[] = {
		'V', 'i', 'c', 't','o', 'r',' ',
		'M', 'w', 'i', 'l','u',' ',
	   	'M','u', 'i','s', 'y','o',
		'\0'
	};

	printf("The size of an int: %ld\n", sizeof(int));
	printf("The size of a char: %ld\n\n", sizeof(char));

	printf("The size of numbers[]: %ld\n", sizeof(numbers));
	printf("The size of name[]: %ld\n", sizeof(name));
	printf("The size of full_name[]: %ld\n\n", sizeof(full_name));

	printf("The number of ints in numbers[]: %ld\n", sizeof(numbers) / sizeof(int));
	printf("The number of chars in name[]: %ld\n", sizeof(name) / sizeof(char));
	printf("The number of chars in full_name[]: %ld\n\n", sizeof(full_name) / sizeof(char));
	
	
	printf("name = %s\nfull name = %s\n", name, full_name);

	return 0;

}
