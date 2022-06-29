# sense-c
Sense the directories around you, are they git repositories, what language, etc.

## Languages
[ :snake: sense-py](https://github.com/JakeRoggenbuck/sense-py) || [:crab: sense-rs](https://github.com/JakeRoggenbuck/sense-rs) || 
[:hamster: sense-go](https://github.com/JakeRoggenbuck/sense-go) || [🇨 sense-c](https://github.com/JakeRoggenbuck/sense-c)

## Why?
#### Why so many langs?
Because I write projects pretty regularly in all of these languages and want a consistent API and available library support for all of them.

## API

### Git

```c
int has_git(char *path);
int is_local_git(char *path);
```

[git.h](https://github.com/JakeRoggenbuck/sense-c/blob/main/src/git.h)

### Language
```c
enum LANG get_lang(char *path);
```

## Example
```c
#include "git.h"
#include <stdio.h>

int main() {
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
```

## Supported langs
- [x] Python
- [x] JavaScript
- [x] Rust
- [x] Java
- [x] Go
- [ ] TypeScript
- [ ] C
- [ ] CPP

## Contributing
If you would like to add features or language support, that would be amazing!
