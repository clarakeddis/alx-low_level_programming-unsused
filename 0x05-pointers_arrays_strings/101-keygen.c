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
char password[PASSWORD_LENGTH + 1]; /*+1 for the null terminator '\0' */
srand(time(0)); /*Seed the random number generator with current time*/
/*Generate random characters for the password*/
for (i = 0; i < PASSWORD_LENGTH; i++)
{
/* ASCII range for valid password characters: 33 ('!') to 126 ('~')*/
password[i] = rand() % (126 - 33 + 1) + 33;
}
password[PASSWORD_LENGTH] = '\0'; /*Null-terminate the password string*/
printf("%s\n", password);
return (0);
}
