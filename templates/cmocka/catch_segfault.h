#include <stdio.h>
#include <signal.h>
#include <setjmp.h>

#define INIT_EXCEPTION \
  jmp_buf restore_point; \
  sig_t org_handler = NULL; \
  void skip_segfault(int signal){ \
    longjmp(restore_point, SIGSEGV); \
  } 

#define TRY \
  if(!setjmp(restore_point)) { \
    org_handler = signal(SIGSEGV, skip_segfault); \

#define CATCH \
    signal(SIGSEGV, org_handler); \
  } else \

