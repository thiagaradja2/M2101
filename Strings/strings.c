#include <stdio.h>
#include <string.h>

int main (void) {
	char hello[] = "Bonjour";
	char bye[] = "Au revoir";
	char numbers[] = "012345678";

	printf("hello: %s\n", hello);
	printf("numbers: %s\n", numbers);
	printf("numbers + 7: %s\n", numbers + 7);
	printf("bye: %s\n", bye);

	return 0;
}

