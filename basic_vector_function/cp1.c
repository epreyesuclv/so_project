   # include "vector.h"
   # include <stdio.h>
   # include <stdlib.h>
    int * createVector (int size) {
         
          int *new_vector;
          new_vector= (int *) malloc(size * sizeof(int) );
          return(new_vector);
    }

    void inicializeVector ( int * vector, int value){
           int i;
          for(i=0; i<VSIZE;i++)
             vector[i]=value; 
    }
 
    void inicializeVectorByPosicion ( int *my_vector, int pos, int value){
         my_vector[pos]=value;
    }

    int getVector ( int *my_vector, int pos){
        return(my_vector[pos]);
    }

     int * addVector (int *my_vectorA, int *my_vectorB){
         int *res_vector;
         int i;
         res_vector= createVector (VSIZE);
         for (i=0; i<VSIZE; i++)
             res_vector[i]=my_vectorA[i]+my_vectorB[i];
         return res_vector;

     }
      int * restVector (int *my_vectorA, int *my_vectorB){
         int *res_vector;
         int i;
         res_vector= createVector (VSIZE);
         for (i=0; i<VSIZE; i++)
             res_vector[i]=my_vectorA[i]-my_vectorB[i];
         return res_vector;
     }

     void viewVector (int *my_vector){
            int i;
            printf("valores del vector [ ");
            for (i=0; i<VSIZE; i++)
               printf("%d ", my_vector[i]);
            printf("] ");
}
    int promedio ( int * my_vector){
        int sum=0;
         for ( int i = 0; i< VSIZE ; i++)
             sum += my_vector[i];
         return sum / VSIZE;    
        
    }
     