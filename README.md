Ejercicios Básicos de Arrays en C++

Este repositorio es una colección de 5 programas simples en C++, diseñados para practicar la lógica fundamental y la manipulación de arrays.

Cada programa es un archivo .cpp independiente que resuelve un problema específico.

Programas Incluidos

1_maximo.cpp

Encuentra el número máximo (el valor más alto) dentro de un array de enteros y lo muestra por pantalla.

2_suma_pares_impares.cpp

Calcula la suma de todos los números pares y la suma de todos los números impares dentro del array. Muestra ambos resultados.

3_separar_pares_impares.cpp

Recorre el array y muestra primero todos los números pares, y luego, todos los números impares.

4_elementos_unicos.cpp

Encuentra y muestra todos los elementos que aparecen una sola vez en el array (elementos únicos).

5_elemento_mas_frecuente.cpp

Encuentra el elemento que tiene más ocurrencias (el que más se repite) en el array y lo muestra por pantalla.

Cómo Compilar y Ejecutar

Para ejecutar estos programas, necesitas un compilador de C++, como g++.

Abre tu terminal o línea de comandos.

Navega a la carpeta donde clonaste o descargaste estos archivos.

Usa g++ para compilar el programa que deseas probar. Por ejemplo, para compilar el primer ejercicio:

g++ 1_maximo.cpp -o maximo


Ejecuta el programa compilado:

En macOS o Linux:

./maximo


En Windows:

.\maximo.exe


Repite el proceso de compilación y ejecución para cualquier otro archivo que quieras probar (ej. g++ 2_suma_pares_impares.cpp -o suma).

Personalización de los Arrays

Todos los programas tienen un array inicializado directamente en el código fuente (un "array quemado" o hardcoded).

Si quieres probar los programas con tus propios números, simplemente abre el archivo .cpp en un editor de texto y modifica la línea del array.

Ejemplo (en 1_maximo.cpp):

// Puedes cambiar los valores de este array
int arr[] = {3, 41, 12, 9, 74, 15, 52};


Simplemente cambia esos números, guarda el archivo y vuelve a compilarlo.

Proyecto creado con fines educativos.
