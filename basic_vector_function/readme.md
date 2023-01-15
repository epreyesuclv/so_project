# Para la biblioteca estatica  

Obtener del fichero fuente, el fichero objeto<br>
` gcc -c cp1.c -o op.o `    

Crear la biblioteca libvector del fichero objeto<br>
` ar -rv libvector.a op.o`  

Compilar el programa<br>
`gcc -static -o util main.c -I. -L. -lvector ` 
Ejecutar <br>
` ./util`                    
 
# Para la biblioteca dinamica
Obtiene del fichero fuente, el fichero objeto dinamico (-fPIC)<br>
`gcc -fPIC  -c cp1.c op.o` 

Crear la biblioteca (so)<br>
` ld -shared -o libvector.so op.o`   

Enlaza la biblioteca<br>
` gcc -o util main.c -L. -I. -lvector ` 

Variable de entorno que definen todos los directorios donde haya bibliotecas dinámicas<br>
` LD_LIBRARY_PATH=$LD_LIBRARY_PATH:. 
`    
`export LD_LIBRARY_PATH`<br>
Ejecutar<br>
`./util                              
`