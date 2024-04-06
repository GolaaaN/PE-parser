#include <stdio.h>
#include <winnt.h>

int parser(char *filename);
void error(int error);
int is_pe_file(FILE *fp);
