#include <iostream>

int main() {
    // 5. Encontrar el elemento más frecuente (moda)
    // Puedes cambiar los valores de este array
    int arr[] = {1, 3, 2, 1, 4, 1, 3, 5, 3, 3, 3};
    
    int n = sizeof(arr) / sizeof(arr[0]);

    // Inicializamos con 0, ya que cualquier frecuencia real (>= 1) será mayor.
    int maxFrecuencia = 0; 
    // Inicializamos el elemento más frecuente con el primero del array.
    int elementoMasFrecuente = arr[0]; 

    // Recorremos cada elemento (bucle externo)
    for (int i = 0; i < n; ++i) {
        int frecuenciaActual = 0;

        // Contamos cuántas veces aparece el elemento arr[i] (bucle interno)
        for (int j = 0; j < n; ++j) {
            if (arr[i] == arr[j]) {
                frecuenciaActual++;
            }
        }

        // Si la frecuencia de este elemento es la más alta hasta ahora...
        if (frecuenciaActual > maxFrecuencia) {
            maxFrecuencia = frecuenciaActual;
            elementoMasFrecuente = arr[i];
        }
    }

    std::cout << "Array original: ";
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "El elemento más frecuente es: " << elementoMasFrecuente << std::endl;
    std::cout << "(Aparece " << maxFrecuencia << " veces)" << std::endl;

    return 0;
}