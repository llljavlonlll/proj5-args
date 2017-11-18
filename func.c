#include <stdio.h>
#include <string.h>

// Check if any string is a substring 
// of other strings int the array
void func(char *strs[], int length)
{
	int i, j;
	for(j = 0; j < length; j++) {
		for(i = 0; i < length; i++) {
			if(strstr(strs[i],strs[j]) != NULL) {
				printf("%s is a substring of %s\n", strs[j], strs[i]);
			}
		}
	}
}
