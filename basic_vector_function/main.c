#include <stdio.h>
#include <vector.h>
#include <time.h>
int main(){
   int *vector1, *vector2;

   int i, num;

    vector1= createVector (VSIZE);

    vector2= createVector (VSIZE);
   
     for(i=0; i<VSIZE; i++) {
       num = rand() % 100;
        inicializeVectorByPosicion( vector1, i, num);
       }

    inicializeVector(vector2,VAL);

    printf("\nVector A:\n");

    viewVector(vector1);

    printf("\nVector B:\n");

    viewVector(vector2);
    int * vector3;

    int * vector4;

    vector3=addVector (vector1, vector2);

    vector4= restVector (vector1, vector2);

    printf("\nVector C=A+B:\n");

    viewVector(vector3);

    printf("\nVector D=A-B:\n");

    viewVector(vector4);

    printf("\n");

    return 0;
}