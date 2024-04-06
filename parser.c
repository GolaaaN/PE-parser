#include "parser.h"

int parser(FILE *filename)
{
    FILE *pe_fd = fopen(filename, "r");

    printf("Hello World");
    return 0;
}

BOOLEAN pe_validation(FILE *fp)
{
    // fopen()
}

void error(int ERR)
{
    switch (ERR)
    {
    case 0:
        printf("Error: Couldn't open the file, check the file name\n");
        break;

    case 1:
        printf("Error: the file is not a PE file.");
        break;
    }
}