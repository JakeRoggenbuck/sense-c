#ifndef LANG_H
#define LANG_H

char *LANG_NAMES[7] = {"Python", "Rust", "Java", "JavaScript", "Go", ""};

enum LANG { Python, Rust, Java, JS, Go, None };

enum LANG get_lang(char *path);

#endif // LANG_H
