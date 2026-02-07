Estudiante* encontrarMejorNota(Estudiante* raiz) {
    if (raiz == NULL) return NULL;

    Estudiante* mejor = raiz;
    Estudiante* izq = encontrarMejorNota(raiz->izquierdo);
    Estudiante* der = encontrarMejorNota(raiz->derecho);

    if (izq != NULL && izq->nota > mejor->nota)
        mejor = izq;
    if (der != NULL && der->nota > mejor->nota)
        mejor = der;

    return mejor;
}

int main() {
    Estudiante* sistema = NULL;
    int opcion;

    do {
        cout << "\n===== SISTEMA DE GESTION DE ESTUDIANTES =====\n";
        cout << "1. Agregar estudiante\n";
        cout << "2. Mostrar todos los estudiantes\n";
        cout << "3. Buscar estudiante por carnet\n";
        cout << "4. Mostrar estudiantes aprobados\n";
        cout << "5. Mostrar estudiantes reprobados\n";
        cout << "6. Calcular promedio general\n";
        cout << "7. Mostrar estudiante con mejor nota\n";
        cout << "8. Salir\n";
        cout << "Opcion: ";
        cin >> opcion;

        if (opcion == 1) {
            int carnet;
            char nombre[50];
            float nota;

            cout << "Carnet: ";
            cin >> carnet;
            cin.ignore();
            cout << "Nombre: ";
            cin.getline(nombre, 50);
            cout << "Nota: ";
            cin >> nota;

            sistema = insertar(sistema, carnet, nombre, nota);
        }
        else if (opcion == 2) {
            mostrarEstudiantes(sistema);
        }
        else if (opcion == 3) {
            int carnet;
            cout << "Carnet a buscar: ";
            cin >> carnet;
            buscarEstudiante(sistema, carnet);
        }
        else if (opcion == 4) {
            mostrarAprobados(sistema);
        }
        else if (opcion == 5) {
            mostrarReprobados(sistema);
        }
        else if (opcion == 6) {
            int contador = 0;
            float suma = calcularPromedio(sistema, &contador);
            if (contador > 0)
                cout << "Promedio general: " << suma / contador << endl;
            else
                cout << "No hay estudiantes registrados.\n";
        }
        else if (opcion == 7) {
            Estudiante* mejor = encontrarMejorNota(sistema);
            if (mejor != NULL) {
                cout << "Mejor estudiante:\n";
                cout << mejor->nombre << " - " << mejor->nota << endl;
            }
        }

    } while (opcion != 8);

    return 0;
}

