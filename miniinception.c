#include <stdio.h>

int main() {
  printf("Welcome to Inception!\n");

  int depth = 0;

  while (depth < 5) {
    printf("Depth: %d\n", depth);
    depth++;

    // Recurse to next level
    main();
  }

  printf("Reached max depth of 5. Exiting...\n");
  return 0;
}
