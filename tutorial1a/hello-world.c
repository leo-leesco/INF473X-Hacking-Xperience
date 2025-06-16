#include "hello-world.h"
#include <stdio.h>
#include <string.h>

int main(void) {
  print_hello_string();
  return 0;
}

void print_hello_string() { printf("hello world\n"); }
