#include <iostream>

int main() {
    // 2. Suma de valores pares e impares
    // Puedes cambiar los valores de este array
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    int n = sizeof(arr) / sizeof(arr[0]);

    int sumaPares = 0;
    int sumaImpares = 0;

    // Recorremos el array
    for (int i = 0; i < n; ++i) {
        // Usamos el operador módulo (%) para ver si es par o impar
        if (arr[i] % 2 == 0) {
            // Es par
            sumaPares += arr[i];
        } else {
            // Es impar
            sumaImpares += arr[i];
        }
    }

    std::cout << "El array es: ";
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "La suma de los valores pares es: " << sumaPares << std::endl;
    std::cout << "La suma de los valores impares es: " << sumaImpares << std::endl;

    return 0;
}