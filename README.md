"# TP1" 
## 2.a) Archivo .gitignore

El archivo `.gitignore` es utilizado en Git para indicar qué archivos o carpetas deben ser ignorados y no incluidos en el repositorio.

### ¿Por qué es conveniente incluirlo?
Es conveniente porque permite evitar subir archivos innecesarios o generados automáticamente, como ejecutables, archivos temporales o configuraciones locales. Esto mantiene el repositorio limpio y organizado.

### ¿Cuándo se debe hacer?
Se recomienda crear y configurar el archivo `.gitignore` al inicio del proyecto, antes de realizar los primeros commits, para evitar que archivos no deseados sean agregados al repositorio.

### ¿Cómo se configura?
El archivo `.gitignore` se configura agregando patrones de archivos o carpetas que se desean ignorar.

### Regla para ignorar un archivo específico
ignorado.txt


### Codigos
Codigo sin funcionar: falta el #include <stdio.h>, falta algunos ; y faltaba el & en valor1, hacia la funcion cumplia su trabajo pero nunca retornaba esa variable, cambiar la funcion de void a int y agregar una variable que retorne y muestre luego en el printf.

Codigo misterioso: invierte los digitos, los divide por dos y le suma la suma de sus digitos. 


punto_g Los puntos 2 y 3 muestran el mismo resultado porque el puntero almacena la dirección de memoria de la variable. Es decir, el valor del puntero es justamente la dirección de la variable.
En el punto 4 se obtiene la dirección de memoria del propio puntero. Esta dirección es diferente a las anteriores, ya que el puntero también es una variable que ocupa un espacio en memoria distinto.
Por lo tanto, mientras que en los puntos 2 y 3 se trabaja con la dirección de la variable original, en el punto 4 se observa la dirección donde está almacenado el puntero en memoria.