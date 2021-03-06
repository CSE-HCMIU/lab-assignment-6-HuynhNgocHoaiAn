/*
2. Receive n strings from the input and sort them ascendingly.
Ex:
 _________________________________________
| Input: one two three                    |
| Output: one three two                   |
|_________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void Ex2(int n, char *str[]){
	//Your codes here
	char c[1000];
	int i, j;
    for (i = 0; i < n; i++) 
	{
        for (j = i + 1; j < n; j++) 
		{
            if (strcmp(str[i], str[j]) > 0) 
			{
                strcpy(c, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], c);
            }
        }
    }
    for(i = 0; i < n; i++) 
	{
		printf("%s ",str[i]);
	}	
}


int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	argc--;
	char *testcase[argc];
	int i;
	for(i=0; i<argc; i++){
		testcase[i] = argv[i+1];
	}
	
	Ex2(argc, testcase);
	
	return 0;
}
