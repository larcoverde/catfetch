// print a simple fetch with a cat ascii
// by Lucas Arcoverde de Melo, August 2nd 2026

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct
{
    char user[256];
    char hostname[256];
    char os[256];
    char kernel[256];
    long up;
    long ram_total;
    long ram_avail;
} SysInfo;

int
get_user(SysInfo sys_info)
{
    getlogin_r(sys_info.user, sizeof(sys_info.user));
    return EXIT_SUCCESS;
}

int
main(void)
{
    SysInfo sys_info;
    return 0;
}

