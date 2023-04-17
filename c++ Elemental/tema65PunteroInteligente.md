<div align="Center">

# Puntero inteligente (Smart Pointers)

</div>

En C++ tenemos un tipo de dato bastente útil llamado **"punteros inteligentes"** o **"smart pointers"**, estos son muy fáciles de crear y nos ayudaran al acceso de recursos que son externos a nuestro programa. Estos punteros inteligentes son una manera de sustituir el uso de los punteros tradicionales de C++, ya que estos son más propensos a fallos y pueden causar errores de memoria.

```c++
class Rectangle {
  private:
      int length;
      int breadth;
};

void fun() {
    Rectangle *p = new Rectangle();
}

int main() {
    // Infinite Loop
    while (1) {
        fun();
    }
}
```

En este caso se hace uso de un puntero en la función **fun** llamado p y este tiene dos variables, cuando termine la variable p será eliminada con éxito ya que es una varible local de su función, el problema es el espacio en memoria que deja, ya que no usamos **delete** para borrar lo que tenia p. Por ende, así como está el codigo, vamos a estar creando variables p una n cantidad de veces, así que también tendremos una n cantidad de espacio de memoria usándose aun cuando ya termine el ciclo. A esto se le denomina cómo "memory leak" o "pérdida de memoria".

Ahora retomando el tema, los punteros inteligentes no sufren de este problema, ya que estos tienen la capacidad de controlar de manera automática el ciclo de vida de sus punteros, lo que significa que se encargan de liberar el espacio de memoria sin nosotros tener que hacer uso de **delete**. Estos punteros tienen 3 tipos que se usan bastante seguido:

1. **unique_ptr:** Cómo su nombre lo indica, es un puntero de uso exclusivo o único, por lo tanto, un solo puntero va a poder apuntar a un objeto en un momento dado. Y cuando termine la vida de este, la información igual se elimina.

```c++
#include <iostream>
#include <memory>

int main() {
    std::unique_ptr<int> num(new int(5));
    //It will print the number 5
    std::cout << *num << std::endl;
    return 0;
}
```

En este ejemplo, se crea un puntero inteligente exclusivo **num** que apunta a un nuevo objeto entero con el valor 5. Al salir del alcance de la función **main**, el puntero inteligente **num** se destruirá automáticamente y liberará la memoria asignada al objeto entero.

2. **shared_ptr:** En este caso la información este puntero va a poder ser distribuida entre otros punteros inteligentes. Y para eliminar la información creada por el shared_ptr, se debe eliminar todo puntero que tenga relación con esta información. Dicho de otra manera, el objeto se liberará automáticamente siempre y cuando todos los punteros inteligentes que apuntan a él hayan sido eliminados.

```c++
#include <iostream>
#include <memory>

int main() {
    std::shared_ptr<int> num1(new int(5));
    std::shared_ptr<int> num2 = num1;
    //It will print the number 5
    std::cout << *num2 << std::endl;
    return 0;
}
```

En este ejemplo, se crea un puntero inteligente compartido **num1** que apunta a un nuevo objeto entero con el valor 5. Luego se crea otro puntero inteligente compartido **num2** y se le asigna el valor de **num1**, ambos punteros comparten el mismo objeto, cuando los punteros inteligentes **num1 y num2** salen del alcance de la función **main**, se destruirán automáticamente y liberarán la memoria asignada al objeto entero.

3. **weak_ptr:** Finalmente, este puntero tiene de nombre "débil" ya que no tendrá control sobre el ciclo de vida del objeto al que apunta. Usualmente se utiliza cómo parámetros en funciones o evitar problemas de referencia circular.

```c++
#include <iostream>
#include <memory>

int main() {
    std::shared_ptr<int> num1(new int(5));
    std::weak_ptr<int> num2 = num1;
    //It will print the number 1
    std::cout << num2.use_count() << std::endl;
    return 0;
}
```

En este ejemplo, se crea un puntero inteligente compartido **num1** que apunta a un nuevo objeto entero con el valor 5. Luego se crea un puntero débil **num2** y se asigna el valor de **num1**, el puntero débil no tiene control sobre el ciclo de vida del objeto al que apunta.

Finalmente, la función **use_count** devolverá el número de punteros inteligentes compartidos que apuntan al objeto, en este caso es 1.
