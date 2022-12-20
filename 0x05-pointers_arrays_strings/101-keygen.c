#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LENGTH 10
#define NUM_CHARS 62

/**
 * generate_password - Generate random passwords
 *
 * Return: void
 */
void generate_password() {
	static char charset[] = "0123456789"
                         "abcdefghijklmnopqrstuvwxyz"
                         "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *password = malloc(LENGTH + 1);
	
	if (password == NULL) 
	{
		return;
	}

	int i;
	
	for (i = 0; i < LENGTH; i++) 
	{
		int index = rand() % NUM_CHARS;
		password[i] = charset[index];
	}
	
	password[LENGTH] = '\0';

	printf("%s\n", password);
	
	free(password);
	
}

/**
 * main - entry point to the program
 *
 * Return: void
 * */
int main(void) 
{
	srand(time(NULL));
	
	generate_password();
	return (0);
}
