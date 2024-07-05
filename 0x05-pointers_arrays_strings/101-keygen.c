#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 12

/**
 * main - Generates a random password for 101-crackme program
 *
 * Return: Always 0
 */
int main(void)
{
int i;
char password[PASSWORD_LENGTH + 1]; /* +1 for the null terminator '\0' */
srand(time(0)); /* Seed the random number generator with current time */
/* Characters pool: uppercase letters, lowercase letters, and digits */
char characters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
int num_chars = sizeof(characters) - 1; /* Exclude the null terminator */
/* Generate random characters for the password */
for (i = 0; i < PASSWORD_LENGTH; i++)
{
password[i] = characters[rand() % num_chars];
}
password[PASSWORD_LENGTH] = '\0'; /* Null-terminate the password string */    
printf("%s\n", password);
return (0);
}
