// gcc ./src/overflow.c -o ./src/overflow -fno-stack-protector -no-pie -m32
#include <stdio.h>

int main() {
  int flag = 0;
  char buf[5];
  scanf("%s", buf);
  if (flag != 0) {
          printf("hacked!");
  } else {
    printf("failed!");
  }
  return 0;
}
