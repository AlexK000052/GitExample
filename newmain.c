#include <xc.h>

int i=0;

//void1
void sub1(void)
{
    int x;
    x=x+10;
}

//void2
void main(void) {
    //initialisation
    while (1)
    {
        i++;
        sub1();
        //loop operations
    }
    //return;
}
