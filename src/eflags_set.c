// gcc ./src/eflags_set.c -o ./src/eflags_set
#include <stdio.h>

int main() {
  int a;
  a = 0;
  // i register [... ZF]
  // set $eflags &= ~(1 << 6)
  if (a != 0) {
    printf("success!\n");
  } else {
    printf("fail!\n");
  }
  return 0;
}
