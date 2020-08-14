#include <string.h>

const char kMessage[] = "Hello World!";

int main() {
	char buf[128];
	memcpy(buf, kMessage, sizeof(kMessage));
	return 0;
}

