#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

struct Book{
	char *name;
	char *author;
	char *genre;
	int pages;
	double price;
};

struct Book *book_info(char *name, char *author, char *genre, int pages, double price){
	struct Book *info = malloc(sizeof(struct Book));
	assert(info != NULL);

	//strdup() duplicates a string from a pointer or an array
	// and returns the pointer to a null terminated byte string
	
	info->name = strdup(name);
	info->author = strdup(author);
	info->genre = strdup(genre);
	info->pages = pages;
	info->price = price;
	
	return info;

}


void info_delete(struct Book *info){
	assert(info != NULL);
	free(info);
}


void info_print(struct Book *info){
	printf("Name: %s\n", info->name);
	printf("Author: %s\n", info->author);
	printf("Genre: %s\n", info->genre);
	printf("Pages: %d\n", info->pages);
	printf("Price: $%.2f\n\n", info->price);

}


int main(int argc, char *argv[]){
	//create any number of book structures(structs)
	//for demonstration purposes we will create three book structs
	struct Book *programming = book_info(
			"The C Programming Language",
			"Brian Kernighan, Dennis Ritchie",
			"Computer Programming", 288, 38.50
			);

	struct Book *self_help = book_info(
			"Essentialism",
			"Greg McKeown",
			"Self-Help", 272, 19.40
			);

	struct Book *productivity = book_info(
			"Deep Work",
			"Cal Newport",
			"Productivity", 304, 22.19
			);
	
	//print out the book details
	info_print(programming);
	info_print(self_help);
	info_print(productivity);
	
	//free the memory after printing to clean up 
	info_delete(programming);
	info_delete(self_help);
	info_delete(productivity);
	
	return 0;	
}
