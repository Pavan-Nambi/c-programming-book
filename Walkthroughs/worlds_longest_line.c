#include <stdio.h>

#define MAXLINE 1000

int get_line(char line[], int limit) {
  int character, i;
  for (i = 0;
       i < limit - 1 && (character = getchar()) != EOF && character != '\n';
       i++) {
    line[i] = character;
  }
  if (character == '\n') {
    line[i] = character;
    i++;
  }
  line[i] = '\0';
  return i;
}

void copy(char current_line[], char longest_line[]) {
  int i;
  for (i = 0; (longest_line[i] = current_line[i]) != '\0'; i++)
    ;
}
int main() {
  int current_line_length;
  int max_line_length = 0;
  char current_line[MAXLINE];
  char longest_line[MAXLINE];

  while ((current_line_length = get_line(current_line, MAXLINE)) > 0) {
    if (current_line_length > max_line_length) {
      max_line_length = current_line_length;
      copy(current_line, longest_line);
    }
  }
  if (max_line_length > 0) {
    printf("%s", longest_line);
  }
}

/**/
/*c-programming-book/Walkthroughs on  main [!?] via C v11.4.0-gcc took 7s */
/*❯ ./a.out < input.txt*/
/*iiiiiiiiiiiiiiiiiiiiiiiiiiiok*/
/**/
/*c-programming-book/Walkthroughs on  main [!?] via C v11.4.0-gcc */
/*❯ cat input.txt*/
/*idkokkkk ok ok ok */
/**/
/*ikd okokok*/
/**/
/*iiiiiiiiiiiiiiiiiiiiiiiiiiiok*/
/**/
/*c-programming-book/Walkthroughs on  main [!?] via C v11.4.0-gcc */
/*❯ ./a.out < input.txt*/
/*iiiiiiiiiiiiiiiiiiiiiiiiiiiok*/
/**/
/*Vkk*/
