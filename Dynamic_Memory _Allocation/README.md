# Laboratorio 4

##  Objetivo

- Resolver problemas utilizando punteros.
- Resolver problemas mediante asignación dinámica de memoria.


## Ejercicios

### Punteros

1. Explique para que sirve el operador `*` y el operador `&`. Indique un ejemplo para cada caso.


2. Dado el siguiente programa:
```cpp
#include <iostream>
int main(int argc, char const *argv[])
{
    int v;
    int *p; 
    v = 10;
    p = &v;
    return 0;
}
```
  Imprima en pantalla los valores de:
  - `v`
  - `*p`
  - `&v`
  - `v`
  - `&p`

3. Construya una función con la siguiente firma:
```cpp
void update(int *a,int *b);
```
La función no posee retorno pero debe devolver, mediante los punteros a y b los siguiente valores.
```
a : <contenido al que apunta a>+<contenido al que apunta b>
b : |<contenido al que apunta a>-<contenido al que apunta b>|
```
Donde `||` Representan el valor absoluto y  debe ser construido y no llamado desde alguna biblioteca como `cmath`.


### Asignación Dinámica de Memoria


3. En un programa contruido en **C++** cree un puntero de tipo *int* y luego asigne memoria dinámicamente mediante **malloc**.

4. En un programa contruido en **C++** cree un puntero de tipo *int* y luego asigne memoria dinámicamente para 5 elementos mediante **calloc**.

5. Dado un arreglo A de números enteros, cree una función  que reemplace sus elementos con :

- `1` si el elemento es impar.
- `0` si el elemento es par.

Además de la función, realice una prueba en la función `main`.

### Asignación Dinámica de Memoria con arreglos

6. Utilice como base el programa construido en la pregunta *4.*  para:

- Llenar el arreglo mediante operadores de punteros.
- Llenar el arreglo utilizando sus índices.
- Imprima por pantalla los elementos del arreglo.
- Imprima la dirección de memoria de los elementos del arreglo.

7. Implemente una matriz mediante punteros.
- Imprima las direcciones de memoria y posiciones de la matriz mediante el índice.
- Imprima las direcciones de memoria y posiciones de la matriz mediante punteros.


### Estructuras 

1. Implemente una estructura en **C++** que represente una fecha, esta debe permitir el ingreso del día, mes y año.
- Cree una variable de tipo fecha e ingrese un elemento.
- Utilice la re-definición de tipos `typedef` sobre la estructura.
- Cree un puntero de tipo `fecha` que apunte a la variable anteriormente creada, luego acceda a los elementos mediante el puntero.
- Cree un puntero de tipo fecha, reserve memoria para el puntero e ingrese un elemento.
