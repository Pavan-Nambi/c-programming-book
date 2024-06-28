//////////////*****************************************
///this program wont work this aint good coz we interrupting ebfore it gng to print statement so well ok u got it??? if i move print into while well it sucks buddy yayyy fuck ok ofc we can do smthng like 
///
///while getchr!=eof OR some keyvoard 



#include <stdio.h>


int main(){

    int c, n=0;
    while((c=getchar())!=EOF)
    {
        if(c=='\n')
            n++;

    }

    printf("%d\n",n);
}
