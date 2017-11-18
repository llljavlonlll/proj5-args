#include <stdio.h>
#include "func.h"
#include <ctype.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i, str_count = 0, num_count = 0, total = 0;
	int *nums;
	char **strs;

	nums = (int*) malloc((argc - 1) * sizeof(int));
	strs = malloc((argc - 1) * sizeof(char*));
	

	if(argc == 1) {
		printf("ERROR: I expect at least one argument!\n");
		return 0;
	}

	// Determine type of the argument
	// and store in respective arrays
	for(i = 0; i < argc; i++) {
		
		if(isalpha(*argv[i])) {
			printf("%s\n", argv[i]);
			strs[str_count] = argv[i];
			str_count++;
		}
		else if(isdigit(*argv[i])) {
			printf("%s\n", argv[i]);
			nums[num_count] = atoi(argv[i]);
			num_count++;
		}
	}
	
	
	printf("\nArray of strs: ");
	for(i = 0; i < str_count; i++) {
		printf("%s ", strs[i]);
	}
	
	// Sum up numbers array
	printf("\nArray of nums: ");
	for(i = 0; i < num_count; i++) {
		printf("%i ", nums[i]);
		total += nums[i];
	}

	// Final output
	printf("\n\nTotal integers: %i\n\n", total);
	func(strs, str_count);
	
	return 0;
}
