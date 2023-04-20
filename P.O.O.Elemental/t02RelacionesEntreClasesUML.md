<div align="center">

# Relaciones en UML

</div>
Hay que tener presente los diferentes tipos de conectores en UML, sabiendo que cada uno de ellos representa una relacion entre las diferentes clases

![Diagrama general](https://objetosweb.files.wordpress.com/2016/05/relacionesuml.png)

![Ejemplo de aplicacion](https://2.bp.blogspot.com/-KmDQlu9PbI8/UbiJbhEfwQI/AAAAAAAAAG0/aaK2nTQJfLI/s1600/UML-relaciones-asociacion-agregacion-composicion-realizacion-generalizacion.jpg)

## UML Relaciones

En UML, las formas en que las cosas se conectan entre si se modelan como **relaciones**

En el modelado de POO hay tres relaciones muy importantes:

- asociaciones
- dependecias
- generalizaciones

![Relaciones mas importants](https://abialeba.files.wordpress.com/2012/11/relaciones-1.png?w=622&h=251&zoom=2)

### Asociación

![Asociacion](https://abialeba.files.wordpress.com/2012/11/relaciones2.png?w=622&h=187&zoom=2)
La asociacion representa un tipo de relacion general entre clases, que indica que los objetos de una clase estan conectados con objetos de otra clase.

Esta asociación se diagrama con una **linea solida** y punta de flecha **abierta** cuando se quiere indicar el sentido de navegación. No se ponen puntas flecha cuando la navegación es **bidireccional**.

- En el ejemplo anterior, podemos conocer la Universidad a la que asiste cada Estudiante y tambien podemos saber que Estudiantes van a cada Universidad.
- Una asociacion entre dos clases representa una relacion estructural entre iguales, ambas clases estan en el mismo nivel siendo las dos igual de importantes. A veces, se desea modelar una relación de Todo/Parte, en la cual una clase representa algo grande (TODO), que consta de elementos más pequeños (PARTES). Aquí aparecen dos tipos de asociaciones llamadas _**Agregacion**_ y _**Composición**_.

#### Agregación

![Agregacion](https://abialeba.files.wordpress.com/2012/11/agregacion1.jpg?w=768&h=116)

Representa una relación del tipo Todo/Parte. Este tipo de asociación se representa agregando un rombo vacio en la parte del "todo".

Un aspecto importante de este tipo de relacion, es que los objetos existen independientemente de la relacion, es decir, si se eliminara el objeto "todo" las "partes" seguirian existiendo.
**vinculo debil**

|                                              Ejemplo1                                               |                                                     Ejemplo2                                                     |
| :-------------------------------------------------------------------------------------------------: | :--------------------------------------------------------------------------------------------------------------: |
| Un equipo está formado por 0 o varios jugadores y un jugador podra jugar en un solo equipo a la vez | La agenda podra tener de 0 a muchas personas anotadas. Y una Persona, podrá estar anotada en 0 o muchas agendas. |

> _AMBOS OBJETOS EXISTIRAN MAS ALLA DE LA RELACION_

#### Composición

![Composicion](https://abialeba.files.wordpress.com/2012/11/composicion1.jpg?w=622&h=93&zoom=2)

Es otra forma de agregacion pero con **vinculo fuerte**. Las "partes" pueden crearse despues del "todo" al que pertenecen, pero una vez creadas viven y mueren juntas. Se diagrama con un rombo relleno en el extremo del "todo".

|                       Ejemplo1                        |                Ejemplo2                 |
| :---------------------------------------------------: | :-------------------------------------: |
| La mesa tiene patas y esas patas pertenecen a la mesa | La empresa tiene uno o varios empleados |

> _Si el "todo", mesa y empresa respectivamente, deja de existir las clases "partes", patas y empleado respectivamente, no tendrian razon de ser sin su todo._

### Cardinalidad de las relaciones

![Multiplicidad de relaciones](https://objetosweb.files.wordpress.com/2016/02/multiplicidad.png)

La multiplicidad especifica cuántas instancias de una clase pueden relacionarse con una instancia simple de una clase asociada. Por tanto, limita el número de objetos relacionados.

- En general, la multiplicidad es un subconjunto (posiblemente infinito) de los números enteros no negativos.
- En los diagramas de clases se indica la multiplicidad con símbolos especiales en los extremos de las líneas de las asociaciones.

### Dependencia

Una dependencia es una relación de uso que declara que un elemento utiliza la información y los servicios de otro elemento, pero no necesariamente a la inversa.

Graficamente, se representa como una linea discontinua dirigida hacia el elemento del cual se depende. Las dependencias se usaran cuando queremos indicar que un elemento utiliza a otro.

> _La clase relacionada aparece como parametro de la otra._

### Generalización
Es una relación entre un elemento general (llamado superclase o padre) y un caso mas específico de ese elemento (llamado subclase o hijo)