#include <stdio.h>
#include <unistd.h>
#include <strings.h>

#define BUFSIZE 65536

#ifdef _WIN32
#define NULL_DEVICE "NUL"
#else
#define NULL_DEVICE "/dev/null"
#endif

#define CAPTURE_STDOUT_START                        \
    fflush(stdout);                                 \
    stdout_save = dup(STDOUT_FILENO);               \
    bzero(stdout_buffer, BUFSIZE);                  \
    freopen(NULL_DEVICE, "a", stdout);              \
    setvbuf(stdout, stdout_buffer, _IOFBF, BUFSIZE);
                                                    
#define CAPTURE_STDOUT_STOP                         \
    freopen(NULL_DEVICE, "a", stdout);              \
    dup2(stdout_save, STDOUT_FILENO);               \
    setvbuf(stdout, NULL, _IONBF, BUFSIZE);         
                                                   
#define CAPTURE_INIT                                \
    int stdout_save;                                \
    char stdout_buffer[BUFSIZE];                    

