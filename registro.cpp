void buscarEstudiante(Estudiante* raiz, int carnet) {
    if (raiz == NULL) {
        cout << "Estudiante no encontrado\n";
        return;
    }

    if (carnet == raiz->carnet) {
        cout << "Carnet: " << raiz->carnet
             << " Nombre: " << raiz->nombre
             << " Nota: " << raiz->nota << endl;
    } else if (carnet < raiz->carnet) {
        buscarEstudiante(raiz->izquierdo, carnet);
    } else {
        buscarEstudiante(raiz->derecho, carnet);
    }
}
