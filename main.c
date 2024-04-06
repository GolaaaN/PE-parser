#include "parser.h"

int main(int argc, char **argv)
{
    if (argc != 2)
        printf("Please enter name of PE file");
    else
        parser(argv[1]);
    return 0;
}