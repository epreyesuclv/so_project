
#include <math.h>
#include <stdio.h>
#include <unistd.h>

int cacheMem;    

void init(){

        int total, free;
        FILE *fp;
        fp = fopen("/proc/meminfo","r");

        char buffer [100];
        fscanf(fp,"%s: %i KB",&buffer,&total);
        fscanf(fp,"%s: %i KB",&buffer,&free);
        printf("%i \n",free);
        cacheMem = total-free;
        fclose(fp);
}
int checkmemUsed(){
        
    while(1){
        int total, free;
        FILE *fp;
        fp = fopen("/proc/meminfo","r");

        char *buffer ;
        fscanf(fp,"%s: %d KB",buffer,&total);
        
        printf("%s",buffer);
        printf("%d",total);
        fscanf(fp,"%s: %d KB",buffer,&free);
        printf("%s",buffer);
        //calcular uso de memoria

        printf("El cambio de uso de memoria es %i \n",cacheMem - (total-free));
        // calcular el rate
        int rate = (total - free)/ total;       
        fflush(NULL);
        printf("el rate actual es %i \n",rate);

        //store current cache mem
        cacheMem = total-free;
        printf("%i \n",cacheMem);
        fclose(fp);
        sleep(60);

    }

}