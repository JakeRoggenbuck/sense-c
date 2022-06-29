#include "git.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int has_git(char *path) {
    char git_path[60];
    strcpy(git_path, path);
    strcat(git_path, "/.git");

    return access(git_path, F_OK) == 0;
}

int is_local_git(char *path) {
    if (!has_git(path)) {
        return 0;
    }

    char git_path[60];
    FILE *fp;
    char buffer[255];
    char new_buf[20];

    strcpy(git_path, path);
    strcat(git_path, "/.git/config");

    fp = fopen(git_path, "r");
    if (fp == NULL) {
        return 0;
    }

    while (fgets(buffer, 255, fp)) {
        strncpy(new_buf, buffer + 1, 3);
        if (strcmp(new_buf, "url") == 0) {
            return 0;
        }
    }

    fclose(fp);
    return 1;
}
