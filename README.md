# sense-c
Sense the directories around you, are they git repositories, what language, etc.

## Languages
[ :snake: sense-py](https://github.com/JakeRoggenbuck/sense-py) || [:crab: sense-rs](https://github.com/JakeRoggenbuck/sense-rs) || 
[:hamster: sense-go](https://github.com/JakeRoggenbuck/sense-go) || [🇨 sense-c](https://github.com/JakeRoggenbuck/sense-c) || [🔥 sense-cpp](https://github.com/JakeRoggenbuck/sense-cpp)

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
