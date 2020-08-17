#define NULL 0x0

int *ret_ptr() {
	return 0;
}

int main() {
	char *a = NULL;
	char *b = 0;
	char c = 0;
	int *d = ret_ptr();
	return d == NULL ? 0 : 1;
}

