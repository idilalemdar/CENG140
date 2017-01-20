#ifndef LAB3_H
#define LAB3_H

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


size_t strlength(const char *s) {
    size_t i;
    for (i = 0; s[i] != '\0'; i++) ;
    return i;
}

/* Function Prototypes */

/**
 * Entry point for test code
 */
void execute(); 

/**
 * Copies the string pointed to by src to the buffer pointed to 
 * by dest at most n bytes of src.
 */
char* customstrncpy(char *src, size_t n);

/**
 * This function returns 1 if the 
 * "string" begins with a given "prefix". 
 */
int beginsWith(char* string, char* prefix);

/**
 * Returns a substring of the string starting from 
 * "start" and ending at "end" ("start" is included whereas 
 * "end" is not included")
 * It is guaranteed that 0 <= start <= end
 * e.g. slice("ceng140 is a course", 4, 7) returns "140"
 */
char* slice(char* string, int start, int end);

/**
 * Returns a new string that contains the original string count times
 * e.g. duplicate("ceng", 3) returns "cengcengceng"
 */
char* duplicate(char* string, int count);

/**
 * Splits a string with a delimiter and returns an array of character arrays
 * e.g. split("ceng111,ceng140,ceng213", ',') returns the following pointer array:
 * [<pointer>] -> "ceng111"
 * [<pointer>] -> "ceng140"
 * [<pointer>] -> "ceng213"
 * [NULL]
 */
char** split(char* string, char delim);

int main()
{
	/* We will perform the actual tests in here! */
	execute();
	return 0;
}

#endif
