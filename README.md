# Práctica 4: Algoritmos de ordenamiento
# Analisis del problema 

Para la resolucion de esta practica requerimos primeramente de entender la logica detras de cada uno de los algoritmos de ordenamiento, de forma que nos pueda facilitar el entendimiento e interpretacion de los experimentos que realizamos. En el caso de Insertion sort, Selection sort y Bubble sort estos algoritmos son útiles para listas pequeñas, pero pueden volverse ineficientes para conjuntos de datos más grandes, la elección del algoritmo de ordenamiento depende de factores como el tamaño del conjunto de datos, la estabilidad requerida y las restricciones de memoria. Para conjuntos de datos pequeños o casi ordenados como mencione anteriormente, los algoritmos más simples pueden ser adecuados, pero para conjuntos de datos grandes y diversas situaciones, los algoritmos más eficientes como Merge Sort y Quick Sort son preferibles.

Merge Sort y Quick Sort son preferibles para conjuntos de datos más grandes pues son algoritmos con complejidad  O(nlogn) a diferencia de los tres algortimos anteriormente mencionados que manejan con complejidad cuadrática O(n^2). Cuando comparamos la eficiencia de algoritmos, estamos interesados en cuánto tiempo tardan en ejecutarse a medida que el tamaño de los datos aumenta, en el caso de Merge Sort y Quick sort que se manejan en base a nlogn es un crecimiento moderado. A medida que la cantidad de datos (n) aumenta, el tiempo de ejecución crece de manera más controlada; por otro lado los algoritmos con base n^2 es un crecimiento rápido, a medida que la cantidad de datos(n) aumenta, el tiempo de ejecución crece de manera más pronunciada. Ambos algoritmos aprovechan la recursividad para dividir el problema en subproblemas más pequeños y resolverlos de manera eficiente. Sin embargo, es importante destacar que no todos los algoritmos de ordenamiento utilizan la recursividad. Algoritmos como Insertion Sort, Selection Sort y Bubble Sort, por ejemplo, no son recursivos y siguen un enfoque iterativo. La recursividad puede hacer que algunos algoritmos sean más elegantes y fáciles de entender, también puede tener un costo en términos de uso de memoria y rendimiento. En la práctica, la eficiencia de un algoritmo depende de diversos factores, y no todos los problemas se benefician de la recursividad en la misma medida.

Ahora bien para el diseño de nuestro programa que nos permite realizar los experimentos de dichos algortimos, utilizamos principalmente bibliotecas que permitiesen el manejo de tiempos dentro del programa como "ctime" y "chrono", "iomanip" para la representacion de datos y "cmath" para el calculo de datos como lo serian la desviacion estandar que mencionare a detalle mas adelante; utilizamos los algoritmos desarrollados durante los laboratorios y agregamos otras funciones como la impresion de una tabla en donde podremos observar los tiempos promedio de cada uno de los algoritmos con arreglos de tamaño n y un numero m de veces asi como su desviacion estandar.

Para la funcion que permite calcular la desviacion estandar realizamos lo siguiente: La desviación estándar mide cuánto se alejan los valores individuales de la media aritmética del conjunto de datos. Una desviación estándar baja indica que los datos están cerca de la media, mientras que una desviación estándar alta indica que los datos están más dispersos.

-Cálculo del Tiempo Promedio:
Se calcula la suma de los tiempos y se divide por el número de repeticiones para obtener el tiempo promedio.

-Cálculo de las Diferencias Cuadráticas:
Se calcula la diferencia entre cada tiempo individual y el tiempo promedio, se eleva al cuadrado y se suma.

-Cálculo de la Varianza:
Se divide la suma de las diferencias cuadráticas por el número de repeticiones para obtener la varianza.

-Cálculo de la Desviación Estándar:
Se toma la raíz cuadrada de la varianza para obtener la desviación estándar.

Por otro lado para la realizacion de los experimentos debemos tomar en cuenta que al pasar de un arreglo de tamaño 100,000 los tiempos de ejecucion de los algoritmos Insertion sort, Selection sort, Bubble sort pasan a ser bastante altos por lo que para la computadora es un proceso muy tardado poder realizar las 30 repeticiones con estos tamaños, por lo que se tomo la decision que a partir de este tamaño solo se ejecutarian los algoritmos Merge sort y Quick sort para poder obtener resultados con tamaños que sobrepasen los 500 mil, para tamaños de mas de 50 millones solo utilizaremos Merge sort. Limitar la ejecución de algoritmos menos eficientes para conjuntos de datos grandes permite optimizar el uso de recursos computacionales. En lugar de gastar tiempo en ejecutar algoritmos con tiempos de ejecución prolongados, puedes centrarte en obtener resultados más rápidos utilizando algoritmos más eficientes.

# Analisis de los resultados 
