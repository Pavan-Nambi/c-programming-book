/*#include <stdio.h>*/
/**/
/*int main(){*/
/*  int n;*/
/*  n = 0 ;*/
/*  while (getchar()!=EOF) {*/
/**/
/*    ++n;*/
/*    printf("%d\n",n);*/
/**/
/*  }*/
/*}*/
/**/


/*********************************************
 *
 *
 *
 *
 *
 *
 *
 * THIS ABOVE PROGRAM HAS A ISSUE IT TAKES ENTER KEY AS A CHAR TOO... WE DONT WANT THT... */






#include <stdio.h>

int main() {
    int n = 0;

    while (1) {
        int input = getchar();
        if (input == EOF) {
            break;
        }
        if (input != '\n') {
            printf("%d\n", ++n);
        }
    }

    return 0;
}












