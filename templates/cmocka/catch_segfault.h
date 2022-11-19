#include <stdio.h>
#include <signal.h>
#include <setjmp.h>

#define INIT_EXCEPTION \
  static jmp_buf restore_point; \
  static sig_t org_handler = NULL; \
  static void skip_segfault(int signal){ \
    (void) signal; \
    longjmp(restore_point, SIGSEGV); \
  } 

#define TRY \
  if(!setjmp(restore_point)) { \
    org_handler = signal(SIGSEGV, skip_segfault); \
    printf("%s", "==="); \

#define CATCH \
    signal(SIGSEGV, org_handler); \
  } else

