#include <stdlib.h>

int main() {
	char *x = (char*)calloc(10, sizeof(char));
	free(x);
	return x[5];
}

