#include "git.h"
#include "lang.h"
#include <stdio.h>

int main() {
    int lang = get_lang("./");
    char *name = LANG_NAMES[lang];
    printf("%s\n", name);

    return 0;
}
