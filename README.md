[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-24ddc0f5d75046c5622901739e7c5dd533143b0c8e959d652212380cedb1ea36.svg)](https://classroom.github.com/a/ke8zCzPd)
[![Open in Codespaces](https://classroom.github.com/assets/launch-codespace-7f7980b617ed060a017424585567c406b6ee15c891e84e1186181d67ecf80aa0.svg)](https://classroom.github.com/open-in-codespaces?assignment_repo_id=13539625)
# Práctica 4: Algoritmos de ordenamiento
# Analisis del problema 

Para la resolucion de esta practica requerimos primeramente de entender la logica detras de cada uno de los algoritmos de ordenamiento, de forma que nos pueda facilitar el entendimiento e interpretacion de los experimentos que realizamos. En el caso de Insertion sort, Selection sort y Bubble sort estos algoritmos son útiles para listas pequeñas, pero pueden volverse ineficientes para conjuntos de datos más grandes, la elección del algoritmo de ordenamiento depende de factores como el tamaño del conjunto de datos, la estabilidad requerida y las restricciones de memoria. Para conjuntos de datos pequeños o casi ordenados como mencione anteriormente, los algoritmos más simples pueden ser adecuados, pero para conjuntos de datos grandes y diversas situaciones, los algoritmos más eficientes como Merge Sort y Quick Sort son preferibles.

Merge Sort y Quick Sort son preferibles para conjuntos de datos más grandes pues son algoritmos con complejidad  O(nlogn) a diferencia de los tres algortimos anteriormente mencionados que se manejan con complejidad cuadrática O(n^2). Cuando comparamos la eficiencia de algoritmos, estamos interesados en cuánto tiempo tardan en ejecutarse a medida que el tamaño de los datos aumenta, en el caso de Merge Sort y Quick sort que se manejan en base a nlogn es un crecimiento moderado, a medida que la cantidad de datos (n) aumenta, el tiempo de ejecución crece de manera más controlada; por otro lado los algoritmos con base n^2 es un crecimiento rápido, a medida que la cantidad de datos(n) aumenta, el tiempo de ejecución crece de manera más pronunciada. Ambos algoritmos aprovechan la recursividad para dividir el problema en subproblemas más pequeños y resolverlos de manera eficiente. Sin embargo, es importante destacar que no todos los algoritmos de ordenamiento utilizan la recursividad. Algoritmos como Insertion Sort, Selection Sort y Bubble Sort, por ejemplo, no son recursivos y siguen un enfoque iterativo. La recursividad puede hacer que algunos algoritmos sean más elegantes y fáciles de entender, también puede tener un costo en términos de uso de memoria y rendimiento. En la práctica, la eficiencia de un algoritmo depende de diversos factores, y no todos los problemas se benefician de la recursividad en la misma medida.

Ahora bien para el diseño de nuestro programa que nos permite realizar los experimentos de dichos algortimos, utilizamos principalmente bibliotecas que permitiesen el manejo de tiempos dentro del programa como "ctime" y "chrono", "iomanip" para la representacion de datos y "cmath" para el calculo de datos como lo serian la desviacion estandar que mencionare a detalle mas adelante; utilizamos los algoritmos que fueron desarrollados durante los laboratorios y agregamos otras funciones como la impresion de una tabla en donde podremos observar los tiempos promedio de cada uno de los algoritmos con arreglos de tamaño n y un numero m de veces asi como su desviacion estandar.

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

Comenzando por analizar los tiempos promedio de cada uno de los algoritmos de ordenamiento; podemos observar en el caso de Insertion sort, Selection sort y Bubble sort que el tiempo no hace mas que aumentar exponencialmente al momento que aumentamos tambien el tamaño de los arreglos, pues como mencionamos anteriormente estos algoritmos tienen complejidad n^2 siendo n el tamaño de los arreglos que estamos manejando. Si bien durante los tamaños de arreglo de 5 hasta 100 se mantiene con tiempos cercanos a 0, una vez que sobre pasamos este tamaño la cifra comienza a despegarse cada vez mas del 0 y una vez que llegamos a los arreglos con tamaño 100,000 o superior la cifra se despega demasiado de lo que teniamos en un principio llegando en el caso de Insertion a los 4.96 segundos y los otros 2 hasta los 7 segundos teniendo un aumento de hasta el 35900%, con arreglos de un tamaño mayor va aumentando exponencialmente haciendo ineficiente para la computadora realizar estos procesos utilizando estos algoritmos por los tiempos extensos que dan los mismos como lo mencionamos en el analisis. 

![Insertion](https://github.com/AGN-Teaching/practica-4-algoritmos-de-ordenamiento-gab0-21/assets/118947538/9a3efd19-f358-4f60-b1b1-0ad196ec2a18)

*Tiempo en segundos
En el caso de insertion Sort podemos observar que a comparacion de los 3 algoritmos iterativos, es el mas eficiente en terminos de tiempo para arreglos de menor tamaño.

![selection](https://github.com/AGN-Teaching/practica-4-algoritmos-de-ordenamiento-gab0-21/assets/118947538/e1cf94a9-a7fb-4bcc-8ed2-d1d3df8bdbda)

*Tiempo en segundos
Selection Sort es el segundo mejor algoritmo iterativo en terminos de tiempo siendo peor por unas decimas de segundo a Insertion Sort y bastante similar a Bubble Sort en terminos de tiempos promedio. 

![Bubble](https://github.com/AGN-Teaching/practica-4-algoritmos-de-ordenamiento-gab0-21/assets/118947538/a1e69fdf-311a-4dca-85aa-15d972628e98)

*Tiempo en segundos
Bubble sort es el algoritmo iterativo mas lento de los 3 consiguiendo tiempos bastante inferiores para arreglos pequeños a comparacion de Insertion Sort.

En el caso de Merge sort y Quick sort los tiempos si bien aumentan, no se despegan demasiado del 0 si no hasta superar los 100 millones en el tamaño del arreglo, en ese tamaño es cuando observamos un cambio notable entre ambos algoritmos siendo Quick sort bastante mas lento a comparacion de Merge sort, esto puede ser debido a la logica de funcionamiento de Quik sort pues puede degradarse a O(n^2) en el peor caso cuando la elección del pivote no es adecuada y resulta en particiones desbalanceadas. Una vez que sobrepasamos 100 millones utilizaremos solamente Merge sort para obtener los datos, donde podemos observar que con arreglos de tamaño 500 millones los tiempos aumentan hasta lo 132 segundos donde si bien es posible realizar estas tareas, se vuelve un proceso tardado al momento de realizar las mismas con arreglos de tamaños tan grandes.

![Merge](https://github.com/AGN-Teaching/practica-4-algoritmos-de-ordenamiento-gab0-21/assets/118947538/bda61e58-c7d0-463e-979c-09b3e99b53b9)

*Tiempo en segundos.
En terminos de eficiencia de tiempo, Merge sort es el mejor cuando se trata de arreglos cuyo tamaño supere los 100,000 llegando a sobre pasar el tamaño de los 50 millones cuando realmente se puede observar una diferencia de aumento notable entre los tiempos de dicho algoritmo.

![Quicsort](https://github.com/AGN-Teaching/practica-4-algoritmos-de-ordenamiento-gab0-21/assets/118947538/14ff5d80-8298-4a18-989a-e0459e787723)

Quick Sort es el segundo algortimo mas eficiente para arreglos de tamaños muy grandes, en algunos casos cuando la particion es mas adecuada puede llegar incluso a superar a Merge Sort por algunas centecimas de segundo sin embargo al sobre pasar los 50 millones la diferencia entre ambos es muy grande por lo que ya no es optimo el uso del mismo.

![TiempoyDesviacion](https://github.com/AGN-Teaching/practica-4-algoritmos-de-ordenamiento-gab0-21/assets/118947538/8017382c-1a83-4416-9c07-a02f4820d8e6)

En resumen estos 2 ultimos algoritmos son mas eficientes para arreglos de tamaño mucho mayor.

Ahora en el caso de la desviacion estandar, se mide en las mismas unidades que los datos originales, ya que es una medida de dispersión que indica cuánto se alejan los valores individuales del promedio (media) de un conjunto de datos. Para los algoritmos iterativos Insertion sort, Selection sort y Bubble sort podemos observar que hay un aumento iniciando con valores cercanos al cero y despegandose cada vez mas de ellos sin embargo nunca sobre pasa los valores de 1, al principio, las mediciones son bastante precisas y consistentes, pero a medida que avanzas, hay más variabilidad, aunque sigue siendo relativamente baja en comparación con el rango general de los datos esto podría indicar que las mediciones iniciales son bastante consistentes y no hay mucha variabilidad entre ellas. 

Para los algoritmos Merge sort y Quick sort los valores son aun mas consistentes y de igual forma no hay demasiada variabilidad despegandose incluso menos del 0 que los algortimos anteriores, sin embargo cuando sobre pasamos el tamaño de 100 millones hay una variacion considerable en base a los datos anteriores esto sugiere que hay una variabilidad más pronunciada entre los valores de los datos, están más dispersos y hay una mayor amplitud en las diferencias entre los puntos individuales y la media del conjunto de datos. La desviación estándar, en este contexto, indicará cuánto varían las duraciones individuales respecto a esa duración promedio.

![Desviacion](https://github.com/AGN-Teaching/practica-4-algoritmos-de-ordenamiento-gab0-21/assets/118947538/ce8b6495-1b81-4ef3-95ee-171186b05ed8)

# Extra 
Para el caso de encontrar un numero k de tamaño de arreglo donde el algoritmo Insertion sort sea mas eficiente que el Merge sort, requerimos de realizar diversos experimentos tomando como base los realizados anteriormente para trazar un parametro y tratar de encontrar el numero que necesitamos; analizando nuestros experimentos nos dimos cuenta que apartir de arreglos de tamaño 100 es cuando existe una variacion mas considerable entre los tiempos promedio de Insertion y Merge por lo que decidimos ir reduciendo de 10 en 10 para encontrar el valor, probando en 90 observamos que si bien los valores se parecen sigue siendo mejor Merge que Insertion sin embargo en 80 es el caso contrario por lo que delimitamos a un intervalo entre 80 y 90 hallando que a partir de un tamaño 85 o menor Insertion es superior en tiempo promedio que Merge.

Una vez que hayamos el numero a partir del cual Insertion sort es mas eficiente que Merge sort comenzamos a realizar experimentos observando que efectivamente conforme vamos reduciendo el tamaño de los arreglos mejora el promedio de Insertion y en caso contrario hay una desmejora en los tiempos del algoritmo Merge siendo con la prueba de tamaño 10 con la que existe una diferencia mas notoria pues hay una variacion de hasta 4 segundos.

![Insertion1](https://github.com/AGN-Teaching/practica-4-algoritmos-de-ordenamiento-gab0-21/assets/118947538/3a537160-6c8f-4e2a-9fd2-a62cb677f52e)
![Merge1](https://github.com/AGN-Teaching/practica-4-algoritmos-de-ordenamiento-gab0-21/assets/118947538/57d64820-1a96-478b-ac7a-88cf2223eb6f)

Por otro lado la desviacion estandar tiene una variacion minima pues al ser valores cercanos a 0 la desviacion es muy pequeña lo que indica menor dispersión de los datos, lo que sugiere una mayor agrupación alrededor de la media es decir que no hay una variacion muy grande entre la media de los datos obtenidos.

![Desviacion1](https://github.com/AGN-Teaching/practica-4-algoritmos-de-ordenamiento-gab0-21/assets/118947538/ff694883-5859-435d-9662-02238608cbac)

Por otro lado requerimos de modificar el algoritmo de Merge sort para que tome en consideracion que a partir de un tamaño de arreglo 85 debe realizar el algoritmo de Insertion sort para ello establecemos un condicional el cual verificará si el tamaño del subarreglo es 85 o menor, y en ese caso, utilizará insertion_sort. De lo contrario, aplicará el algoritmo de merge_sort estándar.

# Conclusiones

En conclusion los experimentos realizados permitieron observar el comportamiento de los diferentes algoritmos en distintos contextos debido a eso pude ver que es necesario analizar primeramente los arreglos y la problematica a resolver para poder tomar una decision sobre el algoritmo a implementar, por ejemplo Insertion Sort cuando el conjunto de datos es pequeño o ya está parcialmente ordenado pues funciona bien para conjuntos de datos pequeños debido a su simplicidad y baja sobrecarga y pasa algo muy similar para Selection Sort o Bubble Sort. 

Por otro lado Merge Sort y Quick Sort son una excelente elección para conjuntos de datos grandes y desordenados. Ofrece un rendimiento constante en diferentes escenarios y garantiza un tiempo de ejecución O(n log n), aunque su principal desventaja es el uso de memoria adicional. 

Fue util realizar los experimentos tambien para observar su comportamiento en una computadora pues al trabajar con arreglos tan grandes se requiere del uso de mayores recursos por lo mismo fue que se tomo la decision de ejecutar algoritmos recursivos cuando el arreglo excedia cierto tamaño; en el caso de los algoritmos iterativos a diferencia de por ejemplo los algoritmos recursivos como Merge Sort los tiempos eran exponencialmente mas prolongados y aunque en arreglos no tan grandes algunos tiempos pueden tener diferencias minimas, es cuanto implementamos arreglos mayores que vemos la verdadera ventaja de dichos algoritmos y cuando las comparaciones pueden ayudarnos a tomar una mejor decision sobre las implementaciones que llevaremos a cabo. 
