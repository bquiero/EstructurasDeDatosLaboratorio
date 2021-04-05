# Laboratorio 1

##  Objetivo

- Recordar las estructuras de decisión, ciclos y funciones.
- Conocer el lenguaje de programación C++.
- Comprender la diferencia entre paso por valor y referencia.
- Conocer el uso de estructuras en C++.


## Ejercicios

### Programación Básica

1. Genere un programa "hola mundo" en C++, para esto utilice un editor a elección. Compile mediante g++.
- Modifique el programa anterior para que acepte como entrada el nombre del usuario  y muestre un mensaje personalizado.  Ejemplo: "Hola, Juan".
- Modifique el programa para que el nombre del usuario sea ingresado como argumento del programa principal (función main).

2. Contruya un programa en C++ que:

- Permita saber cuando un número es par.
- Permita saber cuando un número es positivo.
- Permita saber cuando un número es primo.


3. Construya una biblioteca llamada "utilidades.hpp" que contenga las funciones solicitadas en el ejercicio 2. Describa la entrada y salida de datos.

4. Contruya un programa que:

- Imprima los números los 10 primeros números primos. Utilice la función construida en 3.
- Transforme el programa del punto anterior en una función que tome como parámetro de entrada la cantidad de números primos que desea obtener.

5. Construya un programa que:

- Lleve un vector con números aleatorios.
- Contenga una función que busque un elemento en un arreglo.
- Contenga una función capaz de invertir un arreglo.

### Funciones por Valor y Referencia

1. Modifique las funciones obtenidas en el ejercicio 3 para que el páso de parámetros sea por referencia.

2. Contruya una función que, dado un número entero, entregue el factorial del número.

- Contruya la función por valor.
- Contruya la función por referencia. Modifique la variable de entrada para que esta entregue el factorial.

3. Contruya una función que, dada la base y el exponente, entregue la potencia de un núemro.

- Contruya la función por valor.
- Contruya la función por referencia. Modifique la base para que esta entregue la potencia.

4. Indique cual es la diferencia entre el paso de parámetros por valor y el paso de parámetros por referencia.

5. Indique que funciones conoce (de las bibliotecas de C o C++) que utilizan el paso de parámetros por referencia.

6. ¿Cuando utilizaría paso por valor y cuando paso por referencia?

### Estructuras

1. Contruya un programa que contenga una estructura de datos de la siguiente forma:

```cpp
struct t_data{
  int data;
}
```
- Genere una variable de tipo `t_data`.
- Ingrese un dato al componente `data` de la estructura.
- Imprima por pantalla el componente `data`.

2. Contruya una estructura de la siguiente forma:

```cpp
struct t_complex{
  float real;
  float img;
}
```
- Genere una variable de tipo `t_complex`.
- Ingrese un dato al componente `real` e `img` de la estructura.
- Imprima por pantalla ambas componentes.

3. Con la estructura del ejercicio 2, contruya una función que tome como parámetro de entrada 2 números complejos y:

- Retorne la suma de ambos número.
- Retorne la resta de ambos números.
- Retorne la multiplicación de ambos números.

4. Construya las mismas funciones mencionadas en el ejercicio 3, pero ahora ingrese los parámetros por referencia.

5. Construya una estructura que permita manejar la fecha (día, mes y año).
  - Implemente la estructura utilizando la re-definición de tipos `typedef`.
