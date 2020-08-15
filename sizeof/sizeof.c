#include <stdio.h>
#include <string.h>

const char* kMessage = "Hello World!";

int main() {
	char buf[128];
	memcpy(buf, kMessage, sizeof(kMessage));
	puts(buf);
	return 0;
}

