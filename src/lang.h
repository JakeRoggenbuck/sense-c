#ifndef LANG_H
#define LANG_H

enum LANG { Python, Rust, Java, JS, Go, None };

enum LANG get_lang(char *path);

#endif // LANG_H
