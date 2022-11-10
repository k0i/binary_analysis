// gcc -m32 -fno-stack-protector ./src/password_breach.c -o ./src/password_breach
#include <stdio.h>
#include <string.h>

void breach(char *str) {
  char any[] = "любой";
  char overflow[5];
  printf("Enter password: ");
  scanf("%s", overflow);
  if (strcmp(str, any) == 0) {
    printf("breached\n");
  } else {
    printf("failed\n");
  }
}

int main() {
  char password[] = "password";
  breach(password);
}
