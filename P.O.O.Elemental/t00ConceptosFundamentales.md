<div align="center">

# POO Elemental

</div>

<div align="center">

## Los 4 principios de POO

</div>

![imagen de los 4 pilares de POO](https://edteam-media.s3.amazonaws.com/infographics/original/5c9df5f7-db33-4603-b6d3-ed0b71628eda.png)

[4 PRINCIPIOS de POO](https://www.youtube.com/watch?v=tTPeP5dVuA4&t=42s)

> link: https://www.youtube.com/watch?v=tTPeP5dVuA4&t=42s

Es un paradigma de programación (Modelo), nos da unas guias para organizar nuestro codigo.

Se hablan de objetos y no de procesos, como se hacia antiguamente. Los objetos son un conjunto de atributos y metodos.

Un ejemplo clasico de objeto es un perro y un gato que pertenecen a la clase Animal. Estos objetos son instancias de la clase.

```c++
class Animal{
    protected: edad;
    public:
    Animal(edad){ this->edad=edad;}
   void envejecer(){edad++;}
};
Animal perro(3);
Animal gato(2);
```

### Encapsulacion

![Imagen de encapsulamiento, desde blog alura](https://www.aluracursos.com/blog/assets/poo-que-es-la-programacion-orientada-a-objetos/poo-que-es-la-programacion-orientada-a-objetos-img1.png)

_Nadie se mete donde no le llamen_. Cada objeto es responsable de su propia informacion y de su estado. Y solo pueden ser modificados desde los propios metodos del objeto.

Entonces los atributos no deben ser accesibles desde fuera ,osea, debe tener atributos internos privados.

> **GETTERS y SETTERS** para acceder a los atributos privados, consultar y fijar valores.

### Abstraccion

![Caja negra en version gato](https://ferestrepoca.github.io/paradigmas-de-programacion/poo/poo_teoria/images/Abstraccion.jpg)
Hay que pensar en los objetos como cajas negras.
Esto se traduce en que sabemos como interactuar con ellos pero no sabemos como implementa lo que le pedimos.Un ejemplo cotidiano seria un smartphone.

La implementacion de los metodos es libre del programador. Con esto se logra flexibilidad a la hora de programar y abre la posibilidad a aplicar TDD.

### Herencia

![Ejemplo de herencia, Persona como superclase cliente y empleado como subclases](https://4.bp.blogspot.com/-BQ2Sr33UlEk/WJnpXQuTXJI/AAAAAAAABbo/GTUrPvV3f-Ec8YQeDa3O9yEaB4U-Y107ACK4B/s640/herencia.PNG)

Es la base en reutilizacion de metodos. Con la herencia podemos definir relaciones jerarquicas entre clases. Estas clases comparten metodos comunes.
Con el ejemplo animal podemos crear clases hija que sean animales terrestres y animales acuaticos, que compartan los metodos del padre y utilicen sus metodos para especializar los objetos.

### Polimorfismo

![ejemplo de polimorfismo con la superclase transporte](https://agrega.juntadeandalucia.es/repositorio/02122016/da/es-an_2016120212_9103251/Polimorfismo.jpg)

Se puede modificar el comportamiento de los métodos heredados. De esta manera, objetos de diferentes tipos pueden responder de forma diferente a la misma llamada.
Este es el concepto clave del polimorfismo.

> Ejemplo:Se mueve igual un pez, un pájaro o una rana?.En cambio, todos son animales y por tanto podrían heredar el método mover de dicha clase. Gracias al polimorfísmo, cada objeto concreto realizaría la operación mover como corresponda.

<div align="center">

## Conceptos básicos de POO

</div>

[Programación en C++ || POO || Conceptos básicos de Programación Orientada a Objetos (POO)](https://www.youtube.com/watch?v=aEVH7oFoWnw)

> link: https://www.youtube.com/watch?v=aEVH7oFoWnw

### ¿Qué es una clase?

Una clase es una **abstracción** del entorno. Tendemos a agrupar seres o cosas (_objetos_) con características similares en grupos (_clases_).

### Definición de Objeto

Es un **conjunto de atributos y métodos**,un objeto se deriva de una clase.

> Los atributos se refieren a las caracteristicas y los métodos a las acciones que puede realizar nuestro objeto.

### Definición de Abstracción

Es un proceso mental de extracción de las caracteristicas esenciales de algo, ignorando los detalles superfluos.

### Definición de Encapsulación

Proceso por el que se ocultan los detalles del soporte de las características de una abstracción.

### Definición de Herencia

La herencia es donde una clase nueva se crea a partir de una clase existente, heredando **todos sus atributos y métodos**.

La clase que hereda es clase hija o subclase y la clase de la que hereda es clase padre o superclase

### Definición de Polimorfismo
Por polimorfismo entendemos aquella cualidad que poseen los objetos para responder de distinto modo ante el mismo mensaje.
