#define NULL 0x0

auto ret_ptr() -> int * {
	return nullptr;
}

auto main() -> int {
	char *a = nullptr;
	char *b = nullptr;
	char c = 0;
	int *d = ret_ptr();
	return d == nullptr ? 0 : 1;
}

