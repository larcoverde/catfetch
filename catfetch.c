// print a simple fetch with a cat ascii
// by Lucas Arcoverde de Melo, August 2nd 2026

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

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
    if (getlogin_r(sys_info.user, sizeof(sys_info.user)) != 0)
        return EXIT_FAILURE;
    return EXIT_SUCCESS;
}

int
get_host(SysInfo sys_info)
{
    if (gethostname(sys_info.hostname, sizeof(sys_info.hostname)) != 0)
        return EXIT_FAILURE;
    return EXIT_SUCCESS;
}

int
get_os(SysInfo sys_info)
{
    FILE * file = fopen("/etc/issue", "r");
    char line[256];
    while(fgets(line, sizeof(line), file))
            strcpy(sys_info.os, line);
    fclose(file);
    return EXIT_SUCCESS;
}

int
main(void)
{
    SysInfo sys_info;
    return EXIT_SUCCESS;
}

