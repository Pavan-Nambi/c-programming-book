#include <stdio.h>
int poew(double x, double n)
{
    int initial;
    initial = x;
for (int i=1; i<n; i++) {
        x = x*initial;

}
printf("%f",x);
    return 0;
}
 
int main()
{
    poew(3.0, 2.0);
    poew(-2.,5.0);
    poew(2.0,0);
}
