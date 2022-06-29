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

	int local = is_local_git("./");
	if (local) {
		printf("Is local!\n");
	} else {
		printf("Is not local.\n");
	}

    return 0;
}
