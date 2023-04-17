# <center> Excepciones </center>

## ¿Qué es una excepción?

Es un error controlado que se produce durante la ejecución del código, las excepciones son la forma general de notificar errores lógicos y errores en tiempo de ejecución.

Para realizar el manejo de excepciones se utilizan las palabras claves:

- try
- throw
- catch

## ¿Qué es y para qué sirve TRY?

La palabra clave **try**, es un bloque de código el cual se usara para excepciones especificas, después de poner try se debe poner llaves({}) tanto de apertura como de cierre, todo lo que se encuentre dentro de estas llaves se tratara de ejecutar de forma normal. En caso de que suceda algo anormal se realizara el tratamiento en catch y throw

```
try{
    //tu codigo
}
```

## ¿Qué es y para qué sirve THROW?

El **throw** es el encargado de lanzar las excepciones que puedan surgir en el try, una vez lanzada la excepción esta debe ser atrapada por un catch, cabe aclarar que throw no se usa exclusivamente en la sección de try, puede ser dentro de una función, pero es importante tener un catch para que no se ejecute una sección que pueda romper el ciclo del programa.

```
#include <iostream>
using namespace std;

void miFuncion(){
    trhow runtime_error("Algo salió mal");
}

int main(){
    try{
        miFuncion();
    }catch(const runtime_error &e){
        cout<<e.what()<<endl;
    }
    return 0;
}
```

## ¿Qué es y para qué sirve CATCH?

El **catch** es el encargado de atrapar las excepciones que se lancen, para evitar interrupciones abruptas. Puedes modificar que tipos de excepciones quieres atrapar,por lo que un bloque de try puede tener varios catch, ya sea de int, string, u otros datos, todo dependera de lo que necesites.

```
try {
  // tu codigo
}

catch (int param) {
cout << "int exception";
}

catch (char param) {
cout << "char exception";
}

catch (...) {
 cout << "default exception";
}

```

Si se utilizan los tres puntos (...) quiere decir que el catch detectará cualquier excepción sin importar el tipo de excepción lanzada.Esto se puede usar como un controlador predeterminado que detecta todas las excepciones no detectadas por otros catch

## Especificar excepciones en funciones

Con esto nos referimos a que se pueden especificar que tipos de excepciones puede lanzar una función. Esto se hace mediante la adición de una lista de tipos de excepciones entre paréntesis después del prototipo de la función o del método.

```
void miFuncion() throw(int, string);
```

En este ejemplo la función solo permite lanzar excepciones del tipo int y string, si se trata de lanzar otro tipo de excepción, se generará una excepción de tipo std::unexpected.

Tambien se puede usar la palabra clave throw para indicar que la función no generara ningun tipo de excepción.

```
void miFuncion()throw();
```

## Standard exceptions

En C++ existe una lista de excepciones standar o predefinidas, que son utilizadas para indicar errores en tiempo de ejecución, estas excepciones son:

- **std::exception:** esta es la clase base para todas las excepciones standar de C++, tambien se puede usar como base para crear excepciones personalizadas.
- **std::bad_alloc:** esta excepción se lanza cuando no hay suficiente espacio para realizar una acción de asignación de memoria o cuando un new falla, esto durante el tiempo de ejecución.
- **std::bad_cast:** esta excepción se lanza cuando un casteo dinámico falla, o cuando se intenta ejecutar una conversión de tipo no válida utilizando el operador dynamic_cast
- **std::bad_exception:** este se emplea cuando se quiere capturar excepciones inesperadas o aquellas que pudiste no tomar en cuenta.
- **std::bad_typeid:** se lanza cuando una operacion typeid falla. Esto puede ocurrir si el tipo que se esta consultando no es un tipo polimórfico o si el objeto que se está consultando es un puntero nulo.
- **std::logic_error:** este es un error que es el resultado de un error de programación, usualmente puede ser visto solo con leer y analizar el código.
- **std::domain_error:** esta excepción esta relacionada con std::logic_error ya que se lanza cuando una función u operación es invocada con un argumento o valor no permitido. Por ejemplo, calcular la raíz cuadrada de un número negativo, calcular la divisón de un numero por cero.
- **std::invalid_argument:** esta excepción es lanzada cuando un argumento que tratamos de usar es inválido, por ejemplo pasar un parámetro con un valor que no corresponde.
- **std::length_error:** la excepción se lanza cuando se trata de crear un string demasiado grande.
- **std::out_of_range:** se lanza cuando se usa array o vectores, esto cuando en algún iterador como while o for, se trata de acceder a una posición del contenedor que esta fuera de rango.
- **std::runtime_error:** una excepción que teóricamente no se puede detectar leyendo el código.
- **std::bad_weak_ptr:** se utiliza cuando se intenta utilizar un weak_ptr que ya se liberó su memoria.

## Tus propias excepciones

Como usuario puedes definir tus propias excepciones, overraideando **std::exception,std::logic_error** o **std::runtime_error**, en alguna clase o estructura como por ejemplo:

```
class MiExcepción : public std::runtime_error {
public:
  MiExcepción(const std::string &msg) : std::runtime_error(msg) {}
};
```

```
#include <iostream>
#include <exception>
using namespace std;

struct MyException : public exception {
   const char * what () const throw () {
      return "C++ Exception";
   }
};

int main() {
   try {
      throw MyException();
   } catch(MyException& e) {
      std::cout << "MyException caught" << std::endl;
      std::cout << e.what() << std::endl;
   } catch(std::exception& e) {
      //Other errors
   }
}
```

Es importante tener en cuenta que al crear tus propias clases de excepción, es recomendable overraidear la clase de excepción estándar existente que más te convenga y proporciones un mensaje de error significativo al usuario.

Esto puede servir para tener mensajes más concretos o significativos que ayuden al usuario a entender mejor el error, agregar más datos o métodos a su clase de excepción para almacenar más información relacionada con el error, entre otros casos.
