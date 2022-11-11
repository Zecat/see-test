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
    bzero(stdout_buffer, BUFSIZE);                  
                                                    
#define CAPTURE_STDOUT_STOP                         \
    fflush(stdout); \
    fd = open("stdout_tmp", O_RDONLY, 0); \
    read(fd, stdout_buffer, BUFSIZE); \
    RESTORE_STDOUT \
    CATCH_STDOUT
    /* HACK, TODO to this a better way */

#define CATCH_STDOUT  \
    fflush(stdout);                                 \
    pfd = dup(STDOUT_FILENO);               \
    freopen("stdout_tmp", "w", stdout);              

#define RESTORE_STDOUT  \
    freopen(NULL_DEVICE, "a", stdout);              \
    dup2(pfd, STDOUT_FILENO);               

#define ASSERT_STDOUT(expected) \
    CAPTURE_STDOUT_STOP \
    ASSERT_EQ(stdout_buffer, expected)
                                                   
#define CAPTURE_INIT                                \
    int pfd;                                \
    int fd; \
    char stdout_buffer[BUFSIZE];                    


