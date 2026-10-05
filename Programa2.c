/*Jhonathan Camarena Cédula: 8-1038-738 Fecha: 24/09/2026*/
#include <stdio.h>
#include <string.h>

int main()
 {
    char nombre[50];
    int zona;
    double peso_kg, peso_g, costo_por_gramo = 0.0, precio_final;
    char ubicacion[30];
    int zona_valida = 1;

    // Entrada de datos
    printf("COMPAÑÍA DE PAQUETERÍA INTERNACIONAL XPRESS \n\n");
    printf(" Entrada de Datos del Cliente \n");
    printf("Ingrese el nombre del cliente: ");
    fgets(nombre, sizeof(nombre), stdin);
    nombre[strcspn(nombre, "\n")] = '\0'; // Eliminar el salto de línea

    printf("Ingrese la zona (1: América del Norte, 2: América Central, 3: América del Sur, 4: Europa, 5: Asia): ");
    scanf("%d", &zona);

    printf("Ingrese el peso del paquete en Kilogramos (kg): ");
    scanf("%lf", &peso_kg);

    // Selección del costo por gramo y ubicación según la zona seleccionada
    switch (zona) {
        case 1:
            strcpy(ubicacion, "América del Norte");
            costo_por_gramo = 11.00;
            break;
        case 2:
            strcpy(ubicacion, "América Central");
            costo_por_gramo = 10.00;
            break;
        case 3:
            strcpy(ubicacion, "América del Sur");
            costo_por_gramo = 12.00;
            break;
        case 4:
            strcpy(ubicacion, "Europa");
            costo_por_gramo = 24.00;
            break;
        case 5:
            strcpy(ubicacion, "Asia");
            costo_por_gramo = 27.00;
            break;
        default:
            zona_valida = 0;
            break;
    }

    // Procesamiento y salida con validaciones de seguridad
    printf("\n Recibo / Estado del Servicio \n");
    if (!zona_valida) {
        printf("Error: La zona ingresada (%d) no es correcta. Operación cancelada.\n", zona);
    } else {
        printf("Nombre del Cliente: %s\n", nombre);
        printf("Zona:               %d\n", zona);
        printf("Ubicación:          %s\n", ubicacion);
        printf("Peso registrado:    %.2f kg\n", peso_kg);

        // Validación del límite de peso (máximo 15 kg)
        if (peso_kg > 15.0) {
            printf("ESTADO: ENTREGA RECHAZADA (Motivo: El peso supera el límite máximo permitido de 15 kg).\n");
        } else {
            peso_g = peso_kg * 1000.0;
            precio_final = peso_g * costo_por_gramo;
            printf("Costo por gramo:    $%.2f\n", costo_por_gramo);
            printf("Precio Final:       $%.2f\n", precio_final);
            printf("ESTADO: ENTREGA ACEPTADA\n");
        }
    }

    return 0;
}
