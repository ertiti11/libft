#!/ bin / bash

#Obtener una lista de todos los archivos.c en el directorio actual
C_FILES=$(ls *.c)

#Recorrer cada archivo.c y mostrar las funciones definidas en él
for file in $C_FILES
do
    grep
	-E 'int |void |char |double |float |long |short ' $file | grep '(' | while read
	-r line;
do
echo "$line" done
	echo "" done
