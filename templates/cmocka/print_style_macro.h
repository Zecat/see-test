#ifndef PRINT_STYLE_MACRO_H
#define PRINT_STYLE_MACRO_H

#define BOLD(str) "\033[1m" #str "\033[0m"
#define UNDERLINE(str) "\033[4m" #str "\033[0m"
#define RED(str) "\033[31m" #str "\033[0m"
#define GREEN(str) "\033[32m" #str "\033[0m"
#define BLUE(str) "\033[36m" #str "\033[0m"
#define MAGENTA(str) "\033[35m" #str "\033[0m"
#define YELLOW(str) "\033[33m" #str "\033[0m"

#endif
