void mostrarAprobados(Estudiante* raiz) {
    if (raiz != NULL) {
        mostrarAprobados(raiz->izquierdo);
        if (raiz->nota >= 6.0) {
            cout << raiz->nombre << " - " << raiz->nota << endl;
        }
        mostrarAprobados(raiz->derecho);
    }
}

void mostrarReprobados(Estudiante* raiz) {
    if (raiz != NULL) {
        mostrarReprobados(raiz->izquierdo);
        if (raiz->nota < 6.0) {
            cout << raiz->nombre << " - " << raiz->nota << endl;
        }
        mostrarReprobados(raiz->derecho);
    }
}

