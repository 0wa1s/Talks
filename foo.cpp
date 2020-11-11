#include <stdio.h>
#include <string.h>

void foobar(void)
{
	printf("You have reached secret function");
	getchar();
}

int main (void) {

    char buffer_1[32];
    char buffer_2[16];
    printf ("Input #1:" );

    fgets (buffer_1, sizeof(buffer_1), stdin);

    printf (buffer_1);

    printf ("Input #2:" );

	scanf("%s", &buffer_2);

    printf (buffer_2);

    return 0;
}
