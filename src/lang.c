#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "lang.h"

int has_sub_file(char *path, char *sub) {
    char sub_path[60];
    strcpy(sub_path, path);
    strcat(sub_path, sub);

    return access(sub_path, F_OK) == 0;
}

enum LANG get_lang(char *path) {
    if (has_sub_file(path, "/setup.py")) {
        return Python;
    } else if (has_sub_file(path, "/package.json")) {
        return JS;
    } else if (has_sub_file(path, "/Cargo.toml")) {
        return Rust;
    } else if (has_sub_file(path, "/pom.xml")) {
        return Java;
    } else if (has_sub_file(path, "/go.mod")) {
        return Go;
    }

    return None;
}
