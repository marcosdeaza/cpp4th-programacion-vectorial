#include <iostream>

int main() {
    // 1. Encontrar el número máximo
    // Puedes cambiar los valores de este array
    int arr[] = {3, 41, 12, 9, 74, 15, 52};
    
    // Calculamos el tamaño del array
    int n = sizeof(arr) / sizeof(arr[0]);

    // Inicializamos maximo con el primer elemento del array
    // Esta es la forma más simple de hacerlo sin 'climits'
    int maximo = arr[0];

    // Recorremos el array (podemos empezar desde el segundo elemento, i=1)
    for (int i = 1; i < n; ++i) {
        // Si el elemento actual es mayor que nuestro máximo...
        if (arr[i] > maximo) {
            // ...lo actualizamos
            maximo = arr[i];
        }
    }

    std::cout << "El array es: ";
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "El número máximo en el array es: " << maximo << std::endl;

    return 0;
}