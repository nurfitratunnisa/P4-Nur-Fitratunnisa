#include <stdio.h>

int main (){
int nim [2][2];
nim [0][0]=0;
nim [0][1]=8;
nim [1][0]=0;
nim [1][1]=9;

printf ("nim pertama %d%d\n", nim[0][0], nim[0][1]);
printf ("nim kedua %d%d", nim[1][0], nim[1][1]);
}
