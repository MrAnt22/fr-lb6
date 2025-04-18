#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	char *original = "Hello World";
	char *copy = strdup(original);

	if (copy == NULL){
		perror("strdup failed");
		return 1;
	}
	
	printf("Copy = %s\n", copy);

	free(copy);

	return 0;
}
