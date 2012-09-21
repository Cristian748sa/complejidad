// 1) Calcular el tiempo de ejecución de cada ejercicio.
// a)
j=j-2; //oe 2
i=j*12; //oe 2
printf("%d\n",i); //oe 0
// O(n) = 4

// b)
for (i = 0; i < n; i++) 
    printf("%d\n",i); 
//cambiar a while
i=0; // oe 1
while (i<n) {  //oe 1
    printf("%d\n", i); // oe 0
    i++; // i=i+1 oe 2
}
//usando while = T(A) + n_iter * (T(B)+T(A))
//           1 + n * (2+1) => O(n) = 3n+1

//c)
for (i = 0; i < 10; i++) {
    for (j = 0; j < n; j++) 
        printf("%d\n",i+j);
}
//cambiamos a while
i=0;
while (i<10) {      // oe 1
    // begin B
    j=0;            // oe 1
    while (j<n) {            // oe 1
        printf("%d\n",i+j);  // oe 1
        j++;                 // oe 2
    } // 1 + (n-j)_iter * (1+3) => B = 4(n-j)+1
    // end B
    i++;            // oe 2
} // 1 + 10*(1+4(n-j)+1)
  // O(n,j) = 40n-40j+21


/*2) Desarrollar un algoritmo para calcular la media de un vector de n elementos.
Calcular luego, su tiempo de ejecución.

3) Desarrollar un algoritmo para calcular el elemento máximo de un vector y luego
calcular su tiempo de ejecución.
*/
