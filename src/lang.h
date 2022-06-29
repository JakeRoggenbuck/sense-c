#ifndef LANG_H
#define LANG_H

enum LANG { Python, Rust, Java, JS, Go, None };

enum LANG get_lang(char *path);

char *get_lang_name(int lang);

#endif // LANG_H
