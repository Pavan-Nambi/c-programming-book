#include <stdio.h>

int main() {

  int c,i, ndigit[10], nother, nwhite;
  nwhite = nother = 0;
  for (i = 0; i < 10; i++) {
    ndigit[i] = 0;
  }
  while ((c = getchar()) != EOF) {
    if (c >= '0' && c <= '9')
      ++ndigit[c-48];

    else if (c == ' ' || c == '\n' || c == '\t')
      ++nwhite;

    else
      ++nother;

  }

    printf("digits");

    for (i = 0; i < 10; i++) {
      printf("%d", ndigit[i]);
    }
  return 0;
}
