#ifndef _VECTOR_H
#define _VECTOR_H
#define VSIZE 10
#define VAL 50
extern int * createVector (int size);
void inicializeVectorByPosicion( int *my_vector, int pos, int value);
void inicializeVector ( int * vector, int value);
int getVector( int *my_vector, int pos);
int * addVector (int *my_vectorA, int *my_vectorB);
int * restVector (int *my_vectorA, int *my_vectorB);
void viewVector (int *my_vector);
int promedio ( int * my_vector);
#endif