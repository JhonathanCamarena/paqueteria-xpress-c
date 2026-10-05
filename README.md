# Paquetería Internacional Xpress

## ¿Qué problema resuelve?
Calcula el precio de envío de un paquete según la zona de destino y su peso, y decide si la entrega es aceptada o rechazada (el límite es de 15 kg).

| Zona | Destino | Costo por gramo |
|---|---|---|
| 1 | América del Norte | $11.00 |
| 2 | América Central | $10.00 |
| 3 | América del Sur | $12.00 |
| 4 | Europa | $24.00 |
| 5 | Asia | $27.00 |

Si la zona no existe, el programa muestra un error y cancela la operación.

## Tecnologías
- Lenguaje **C**
- Estructura de selección múltiple `switch`
- Condicionales `if / else` para validar peso y zona
- Librerías `stdio.h` y `string.h`

## ¿Cómo se instala y ejecuta?
1. Instala un compilador de C (GCC / MinGW, Code::Blocks o Dev-C++).
2. Descarga el archivo `paqueteria_xpress.c`.
3. Compila y ejecuta:
```bash
gcc paqueteria_xpress.c -o paqueteria
./paqueteria      # en Windows: paqueteria.exe
```
## Ejemplo de uso
```
COMPAÑÍA DE PAQUETERÍA INTERNACIONAL XPRESS

 Entrada de Datos del Cliente
Ingrese el nombre del cliente: Jhonathan Camarena
Ingrese la zona (1: América del Norte, 2: América Central, 3: América del Sur, 4: Europa, 5: Asia): 2
Ingrese el peso del paquete en Kilogramos (kg): 12

 Recibo / Estado del Servicio
Nombre del Cliente: Jhonathan Camarena
Zona:               2
Ubicación:          América Central
Peso registrado:    12.00 kg
Costo por gramo:    $10.00
Precio Final:       $120000.00
ESTADO: ENTREGA ACEPTADA
```

## Captura de pantalla
*(agrega aquí tu captura del programa funcionando)*

## Autor
Jhonathan Camarena, estudiante de Licenciatura en Redes Informáticas, UTP.
