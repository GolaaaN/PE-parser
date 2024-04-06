#include "parser.h"
typedef unsigned char BYTE;
typedef unsigned short WORD;
typedef unsigned long DWORD;
typedef unsigned long long QWORD;
typedef __int64 LONGLONG;
typedef unsigned __int64 ULONGLONG;

int parser(char *filename)
{
    FILE *pe_fd = fopen(filename, "r");
    if (pe_fd == NULL)
        error(0);
    if (!is_pe_file(pe_fd))
    {
        error(1);
    }
    return 0;
}

int is_pe_file(FILE *fp)
{
    int i = 0;
    WORD PE_e_magic = 0x5A4D;
    WORD MZ;
    fread(&MZ, 2, 1, fp);
    printf("%x", MZ);
    if (MZ == PE_e_magic)
        return 1;
    return 0;
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