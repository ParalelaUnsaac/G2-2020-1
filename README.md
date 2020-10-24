# G2-2020-1
## Calculadora de Matrices
***Este proyecto lo escogimos porque encontramos los módulos necesarios y modificables y también por los temas de matrices y vectores, ya que nos basamos ampliamente en esos temas, las diferentes operaciones de matrices como algunas de las clases de matrices con vectores***
### Operaciones
1. GenerarMatriz

![](https://wikimedia.org/api/rest_v1/media/math/render/svg/6222e9f1577287b35d8c10bdb1a8018dcb46a934)

2. GenerarVector

![](https://wikimedia.org/api/rest_v1/media/math/render/svg/1d3e746ed932973918d7db5847ae3ea8c0071396)

3. Suma de Vectores


![](https://wikimedia.org/api/rest_v1/media/math/render/svg/085adea1c46361c73113e7ed098471dfe3ff3e51)

4. Suma de Matrices


![](http://recursostic.educacion.es/descartes/web/materiales_didacticos/matrices/imagenes/matriz4.png)


5. Multiplicacion de Matrices


![](https://www.jc-mouse.net/wp-content/uploads/2018/07/matriz_kotlin.gif)

6. Transpuesta de una Matriz



![](https://cdn-images-1.medium.com/freeze/max/1000/1*4upDn3ViMJXr3dGov8JP1Q.png?q=20)


### ¿Como paralelizamos? ¿y porque?
***Al tener diferentes módulos, cada uno con una función distinta, usaremos la cláusula "section", esto nos da la facilidad de que para cada sección que nombremos con dicha cláusula, se pase por un hilo distinto. Así que por defecto hay una barrera al final de cualquier bloque SECTIONS. En conclusión, usaremos la cláusula SECTION para invocar a las funciones y evitar el mal uso de los hilos, así facilitar la paralelización.
Usando la cláusula CRITICAL, garantizamos la exclusión mutua, esto quiere decir que solamente un hilo a la vez puede entrar a la región que nombremos como crítica. Que en este caso será para imprimir el título de la función y su resultado correspondiente.***
