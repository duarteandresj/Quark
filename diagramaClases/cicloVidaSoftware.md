<div align="center">

# Ciclo de vida del software
</div>

El paradigma de POO no sólo implica "programar" sino tambien llevar a cabo otras actividades como por ejemplo **"diseñar**.

![Ciclo de vida del software](https://static.wixstatic.com/media/fd2cc9_128a79ff8412496d9ee11d4a22d5e286~mv2.png)

[Que es el ciclo de vida del software](https://www.youtube.com/watch?v=QHOu7CEJR88)

> link: https://www.youtube.com/watch?v=QHOu7CEJR88

El ciclo de vidad del software se compone de los siguientes pasos:

- Planteamiento del problema.
- Análisis.
- Diseño.
- Implementación.
- Pruebas.
    - Depuración.
- Entrega.
    - Mantenimiento.


**Rational unified process**
![rup](https://upload.wikimedia.org/wikipedia/commons/thumb/f/f5/Fases_y_Flujos_de_trabajo_en_PUR.svg/400px-Fases_y_Flujos_de_trabajo_en_PUR.svg.png)

> Se realiza un enfoque en la Fase de diseño

<div align="center">

## FASE DE DISEÑO
</div>

> En esta fase, los ingenieros de software nos dedicamos a planificar estrategias para construir software de alta calidad, diseñamos arquitecturas de software escalables y de fácil mantenimiento y para ello modelamos distintas vistas (que son como "puntos de vista") del sistema que vamos a construir.


[UML](https://www.aprenderaprogramar.com/index.php?option=com_content&view=article&id=688:ique-es-y-para-que-sirve-uml-versiones-de-uml-lenguaje-unificado-de-modelado-tipos-de-diagramas-uml&catid=46&Itemid=163)
Es una notación gráfica que permite visualizar, especificar, construir y documentar un sistema de software. UML ofrece un estándar para describir "planos de software" o "vistas" de un sistema, mediante distintos tipos de diagramas, incluyendo aspectos conceptuales tales como procesos, usuarios, funcionalidades del sistema, interfaces, patrones de diseño, esquemas de bases de datos, componentes de software reutilizables, entre otros.

Es importante remarcar que UML es un "lenguaje de modelado" para especificar o para describir aspectos estáticos y dinámicos del software. Se utiliza para definir la arquitectura de un sistema, para detallar sus artefactos, para documentar y servir como especificación de desarrollo. En otras palabras, es el lenguaje en el que está descripto el sistema de software.

<div align="center">

## Modelado de Clases
</div>

[Diagrama de clases](https://www.youtube.com/watch?v=JioEGJIlg88)

El diagrama de clases realiza una _**captura de la estructura estática del sistema**_, mostrando las clases y relaciones entre ellas.
El diagrama esta compuesto de varias clases que tienen diferentes relaciones.
Asi como tambien los metodos, atributos, multiplicadores y referencia de visualizacion.

La clase describe un _**grupo de objetos con estructura y comportamiento similares**_. En la notacion se compone de un rectangulo/cuadrado con tres partes: 
- Compartimiento del nombre.
- Compartimiento de los atributos.
- Compartimiento de los métodos.

Tambien se acompaña con sus **reglas de visibilidad**(+,-,#)

Asociación, es una relacion estructural entre clases que especifica que los **objetos de una clase están conectados con los objetos de otra clase**.
- Es bidireccional.
- Se le asigna un nombre, o nombres de rol.
- Tienen multiplicidad en cada sentido.

Puede surgir de la asociacion atributos de enlace, que solo tienen vida mientras exista tal relacion. Estos atributos generalmente se realizan a traves de una clase de enlace.

Asociacion-> Agregacion es una asociacion con mas semantica. La relacion es _**"Esta formado por.."**_. El simbolo es un rombo vacio que se agrega a la clase "todo".

Asociacion-> Composicion es una agregacion inclusiva. La relacion entre clases es _**"Esta compuesto por.."**_. El simbolo es un rombo lleno que se agrega a la clase "todo". Si se elimina la clase "todo" no tiene sentido mantener las clases "partes".

Especializacion/Generalizacion--> Permite definir _**jerarquias de clases**_.La relacion entre clases es **"es un"**, por lo que estamos hablando de herencia. Se simboliza con una flecha hacia la clase mas general, clase padre o superclase.

### Conclusiones.
-   El diagrama de clases permite especificar la estructura del sistema.
-   UML proporciona una notacion para representar dicho diagrama.
    -   Clases con sus atributos (estructura) y metodos (comportamiento).
    -   Relaciones entre clases:
        - Asociacion, agregacion y composicion.
        - Especializacion/Generalizacion.
- El diagrma de clases es la principal herramienta de modelado y diseño de los metodos orientados a objetos.

<div align="center">

## Relaciones
</div>

### Asociacion
Una asociación es una relación estructural que describe una conexión entre objetos.Gráficamente, se muestra como una línea continua que une las clases relacionadas entre sí.

#### Navegación de las asociaciones
Aunque las asociaciones suelen ser bidireccionales (se pueden recorrer en ambos sentidos), en ocasiones es deseable hacerlas unidireccionales (navegación en un único sentido).

Gráficamente, cuando la asociación es unidireccional, la línea termina en una punta de flecha que indica el sentido de la asociación.
```java
class Cuenta
{
private Dinero balance;
public void ingresar (Dinero cantidad)
{
balance += cantidad;
}
public void retirar (Dinero cantidad)
{
balance -= cantidad;
}
public Dinero getSaldo ()
{
return balance;
}
}
```
Hemos supuesto que Dinero es un tipo de dato con el que se pueden hacer operaciones aritméticas y hemos añadido un método adicional que nos permite comprobar el saldo de una cuenta.
En el enlace bidireccional debemos mantenerlo nosotros
```java
public class Cuenta
{
...
private Cliente titular;
...
}
public class Cliente
{
...
private Cuenta cuenta[];
...
}
```
Un cliente puede tener varias cuentas, por lo que en la clase cliente hemos de mantener un conjunto de cuentas (un vector en este caso).

## Multiplicidad
La multiplicidad de una asociación determina cuántos objetos de cada tipo intervienen en la relación
 > El número de instancias de una clase que se relacionan con UNA instancia de la otra clase.

- Cada asociación tiene dos multiplicidades (una para cada extremo de la relación).
- Para especificar la multiplicidad de una asociación hay que indicar la multiplicidad mínima y la multiplicidad máxima (mínima..máxima)
- Cuando la multiplicidad mínima es 0, la relación es opcional.
- Una multiplicidad mínima mayor o igual que 1 establece una relación obligatoria.

## Relaciones involutivas
Cuando la misma clase aparece en los dos extremos de la asociación.

## Agregación y composición
Casos particulares de asociaciones: Relación entre un todo y sus partes

Gráficamente, se muestran como asociaciones con un rombo en uno de los extremos.

### Agregación
Las partes pueden formar parte de distintos agregados.

### Composición
Agregación disjunta y estricta: Las partes sólo existen asociadas al compuesto (sólo se accede a ellas a través del compuesto)

## Dependencia
Relación (más débil que una asociación) que muestra la relación entre un cliente y el proveedor de un servicio usado por el cliente.
- Cliente es el objeto que solicita un servicio.
- Servidor es el objeto que provee el servicio solicitado.

Gráficamente, la dependencia se muestra como una línea discontinua
con una punta de flecha que apunta del cliente al proveedor.

## Herencia (generalización y especialización)
La relación entre una superclase y sus subclases

Objetos de distintas clases pueden tener atributos similares y exhibir comportamientos parecidos (p.ej. animales, mamíferos...).
```java
public class Empleado
{
...
}
public class Profesor extends Empleado
{
...
}
public class PAS extends Empleado
{
...
}
```
**Las clases se organizan en una estructura jerárquica formando una taxonomía.**

- El comportamiento de una categoría más general es aplicable a una categoría particular.

- Las subclases heredan características de las clases de las que se derivan y añaden características específicas que las diferencian.

 >En el diagrama de clases, los atributos, métodos y relaciones de una clase se muestran en el nivel más alto de la jerarquía en el que son aplicables.