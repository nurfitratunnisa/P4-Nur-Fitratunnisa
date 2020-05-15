#include <stdio.h>
int main ()
{
int x[9],i;
printf("Masukan 1 angka terakhir NIM anda\n\n");
for(i=0;i<=4;i++)
{
printf("Masukkan nilai %i : ",i+1);
scanf("%i",&x[i]);
}
printf("\n");
for(i=0;i<=4;i++)
{
printf("NIM ke-%i= %i\n",i+1,x[i]);
}
printf("\n");
return 0;
}
