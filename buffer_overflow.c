#include <stdio.h>
#include <string.h>

void vulnerable_function(char *input) {
	char buffer[10];
	strcpy(buffer, input);
        printf("Buffer content: %s\n", buffer);
}

int main(int argc, char *argv[]) {
    int secret = 0;
	       
    if(argc < 2) {
        printf("Usage: %s <input>\n", argv[0]);
	return 1;
    }
    printf("Initial secret value: %d\n", secret);
    vulnerable_function(argv[1]);
    printf("Final secret value: %d\n", secret);
    if (secret != 0) {
        printf("Buffer overflow detected! Secret value has changed!\n");
    }
    return 0;
}

