#include <iostream>

int main() {
    // 3. Separar valores pares e impares
    // Puedes cambiar los valores de este array
    int arr[] = {8, 1, 7, 4, 5, 10, 3, 6, 9, 2};
    
    int n = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Array original: ";
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // Mostramos primero los pares
    std::cout << "Valores pares: ";
    for (int i = 0; i < n; ++i) {
        if (arr[i] % 2 == 0) {
            std::cout << arr[i] << " ";
        }
    }
    std::cout << std::endl;

    // Mostramos luego los impares
    std::cout << "Valores impares: ";
    for (int i = 0; i < n; ++i) {
        if (arr[i] % 2 != 0) {
            std::cout << arr[i] << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}