void mostrarEstudiantes(Estudiante* raiz) {
    if (raiz != NULL) {
        mostrarEstudiantes(raiz->izquierdo);
        cout << "Carnet: " << raiz->carnet
             << " Nombre: " << raiz->nombre
             << " Nota: " << raiz->nota << endl;
        mostrarEstudiantes(raiz->derecho);
    }
}
