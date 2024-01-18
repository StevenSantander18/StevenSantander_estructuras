#include <stdio.h>

// Definición de la estructura Alumno
struct Alumno {
    int matricula;
    char nombre[50];
    char direccion[50];
    char carrera[50];
    float promedio;
};

// Función para ingresar datos de un alumno
void ingresarDatos(struct Alumno *alumno) {
    puts("Ingrese los datos del alumno:");

    printf("Matricula: ");
    scanf("%d", &alumno->matricula);

    puts("Nombre: ");
    fflush(stdin); // Limpiar el búfer de entrada
    gets(alumno->nombre);

    puts("Dirección: ");
    fflush(stdin);
    gets(alumno->direccion);

    puts("Carrera: ");
    fflush(stdin);
    gets(alumno->carrera);

    puts("Promedio: ");
    scanf("%f", &alumno->promedio);
}

// Función para mostrar los detalles de un alumno
void mostrarDatos(const struct Alumno *alumno) {
    puts("\nDetalles del alumno:");
    printf("Matricula: %d\n", alumno->matricula);
    printf("Nombre: %s\n", alumno->nombre);
    printf("Dirección: %s\n", alumno->direccion);
    printf("Carrera: %s\n", alumno->carrera);
    printf("Promedio: %.2f\n", alumno->promedio);
}

int main() {
    int numAlumnos;

    // Pedir al usuario el número de alumnos
    puts("Ingrese el número de alumnos: ");
    scanf("%d", &numAlumnos);

    // Declaración de un arreglo de estructuras Alumno
    struct Alumno alumnos[numAlumnos];

    // Pedir al usuario la información de cada alumno
    for (int i = 0; i < numAlumnos; ++i) {
        puts("\nIngrese los detalles del Alumno:");
        ingresarDatos(&alumnos[i]);
    }

    // Imprimir detalles de cada alumno
    puts("\nDetalles de los Alumnos:");
    for (int i = 0; i < numAlumnos; ++i) {
        mostrarDatos(&alumnos[i]);
    }

    return 0;
}
