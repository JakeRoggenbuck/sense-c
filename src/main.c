#include "git.h"
#include "lang.h"
#include <stdio.h>

int main() {
    int lang = get_lang("./");
    /* char *name = LANG_NAMES[lang]; */
    /* printf("%s\n", name); */

	int git = has_git("./");
	if (git) {
		printf("Is git!\n");
	} else {
		printf("Is not git.\n");
	}

    return 0;
}
