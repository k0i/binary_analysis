// gcc ./src/change_retaddr.c  -o ./src/change_retaddr -fno-stack-protector -no-pie -m32

#include <stdio.h>

void pwn() { printf("pwned"); }

void vulnerable() {
  char overflow[48];
  scanf("%[^\n]", overflow);
}

int main() {
  vulnerable();
  printf("not pwned");
  return 0;
}
