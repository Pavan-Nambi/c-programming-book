#include <stdio.h>
#define YES 1
#define NO 0
int main() {

  int c, nl, nw, nc, inword;
  inword = NO;
  nl = nw = nc = 0;
  while ((c = getchar()) != EOF) {
    ++nc;
    if (c == '\n')
      ++nl;
    if (c == ' ' || c == '\n' || c == '\t') {
      inword = NO;
    } else if (inword == NO) {
      inword = YES;
      ++nw;
    }
  }

  printf(" number of lines are %d \n number of characters  %d \n mu,ber of words are  %d\n", nl, nc, nw);
}
