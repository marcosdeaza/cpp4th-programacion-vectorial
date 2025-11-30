#include <iostream>

int main() {
    // 4. Encontrar elementos únicos (que aparecen una sola vez)
    // Puedes cambiar los valores de este array
    int arr[] = {1, 2, 3, 2, 1, 4, 5, 4, 6, 7, 7};
    
    int n = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Array original: ";
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Elementos únicos: ";

    // Recorremos cada elemento (bucle externo)
    for (int i = 0; i < n; ++i) {
        int contador = 0;
        
        // Comparamos con todos los elementos (bucle interno)
        for (int j = 0; j < n; ++j) {
            if (arr[i] == arr[j]) {
                contador++;
            }
        }

        // Si el contador es 1, significa que solo se encontró a sí mismo
        if (contador == 1) {
            std::cout << arr[i] << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}