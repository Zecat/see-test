#include <stdio.h>
#include <unistd.h>
#include <strings.h>
 #include <sys/types.h>
       #include <sys/stat.h>
       #include <fcntl.h>

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
    freopen("stdout_tmp", "w", stdout);              
                                                    
#define CAPTURE_STDOUT_STOP                         \
    freopen(NULL_DEVICE, "a", stdout);              \
    dup2(stdout_save, STDOUT_FILENO);               \
    read(open("stdout_tmp", O_RDONLY, 0), stdout_buffer, BUFSIZE);


#define ASSERT_STDOUT(expected) \
    fseek(stdout , 0 , SEEK_SET); \
    CAPTURE_STDOUT_STOP \
    ASSERT_EQ(stdout_buffer, expected)
                                                   
#define CAPTURE_INIT                                \
    int stdout_save;                                \
    char stdout_buffer[BUFSIZE];                    
