//suma de 10 numeros flotantes

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int numbers[10];
    numbers[0]=10;
    numbers[1]=20;
    numbers[2]=30;
    numbers[3]=55;
    numbers[4]=70;
    numbers[5]=44;
    numbers[6]=64;
    numbers[7]=13;
    numbers[8]=15;
    numbers[9]=29;
   
   int suma =  numbers[0] + numbers[1] + numbers[2] +  numbers[3] + numbers[4] + numbers[5] + numbers[6] + numbers[7] + numbers[8] + numbers[9];

   printf("La suma es: %d\n", suma);
    return 0;
}
