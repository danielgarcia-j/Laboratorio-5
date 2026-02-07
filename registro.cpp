float calcularPromedio(Estudiante* raiz, int* contador) {
    if (raiz == NULL) return 0;

    float suma = raiz->nota;
    (*contador)++;

    suma += calcularPromedio(raiz->izquierdo, contador);
    suma += calcularPromedio(raiz->derecho, contador);

    return suma;
}

