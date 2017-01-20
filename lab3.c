#include "lab3.h"

char* customstrncpy(char *src, size_t n)
{
	char* dest = malloc(n+1);
	int i;
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	dest[n] = '\0';
	return dest;
}

int endsWith(char* string, char* suffix)
{
	int i, lenstr = strlength(string), lensuf = strlength(suffix);
	for (i = lenstr - lensuf; string[i] != '\0'; i++)
	{
		if(string[i] != suffix[i-(lenstr-lensuf)])
		{
			return 0;
		}
	}
	return 1;
}

char* stepslice(char* string, int start, int end, int step)
{
    int i, j, end1;
    char* substr;
    if (end <= strlength(string))
    {
        substr = (char*)malloc((end-start)/step+(end-start)%step+1);
        for(j = 0, i = start; i < end; j++, i += step)
        {
            substr[j] = string[i];
        }
        substr[j] = '\0';
        return substr;
    }
    else
    {
        end1 = strlength(string);
        substr = (char*) malloc((end1-start)/step+(end1-start)%step+1);
        for(j = 0, i = start; i < end1 ; j++, i += step)
        {
            substr[j] = string[i];
        }
        substr[j] = '\0';
        return substr;
    }
}

char* wrap(char* string, int width, char delim)
{
    int i, j, lenstr = strlength(string);
    char* wrapped = malloc(lenstr+(lenstr/width)+1);
    for (j = 0, i = 0; string[i] != '\0' ;i++, j++)
    {
        if((i+1) % width != 0)
        {
            wrapped[j] = string[i];
        }
        else
        {
            wrapped[j] = string[i];
            wrapped[j+1] = delim;
            j++;
        }
    }
    wrapped[lenstr+(lenstr/width)] = '\0';
    return wrapped;
}

char** twoDduplicate(char* string, int count)
{
    char**dupl = (char**)malloc(sizeof(char*)*(count+1));
    int i, j, len = strlength(string);
    for(i = 0; i < count; i++)
    {
        dupl[i] = (char*)malloc(len+1);
        for (j = 0; j < len; j++)
        {
            dupl[i][j] = string[j];
        }
        dupl[i][j] = '\0';
    }
    dupl[i] = '\0';
    return dupl;
}
/*
void execute()

{
char* text = "To be or not to be";
char* result = customstrncpy(text, strlength(text)+1);
printf("%s", result);

}*/
/*
void execute()

{
char* text = "Testing CEng140 Labcode";
printf("%d %d\n", endsWith(text, "abode"), endsWith(text, "Labcode"));
} 
*/
/*
void execute()

{

char* text = "ceng140 is a course";

char* result = stepslice(text, 4, 11, 2);

printf("'%s'\n", result);

free(result);

}
*/
/*
void execute()

{

char* text = "Testing CEng140 Labcode";

char* result = wrap(text, 10, '\n');

printf("%s\n", result);

free(result);

}*/

void execute()

{

int i;

char** result = twoDduplicate("zoom", 3);

for (i=0; result[i] != NULL; i++) {

printf("%s ", result[i]);

free(result[i]);

}

free(result);

}