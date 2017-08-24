#include <stdio.h>

int main(int argc, char *argv[])
{
    FILE *generated = fopen("generated.c", "w+");
    if(!generated) {
        fprintf(stderr, "Could not open generated.c for writing\n");
        return 1;
    }

    fprintf(generated, "int getGeneratedValue() { return 1234; }\n");

    fclose(generated);

    return 0;
}

