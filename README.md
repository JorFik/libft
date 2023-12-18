# Libft

Para leer la descripción del proyecto en Español, saltese hasta `Libft Español`.

`libft` is a library of C functions rewritten from the standard library, as well as some additional functions that can be useful for C projects.

`libft` is the first project in the Core-Curriculum within the "42" programming school, this is my interpretation of the assignment with some extra functions that I will add as needed.

## Usage

To use `libft`, download the library in the root of your project using the following command line

#### SSH
```bash
git clone git@github.com:JorFik/libft.git
```
#### HTTPS
```bash
git clone https://github.com/JorFik/libft.git
```
#### GitHub CLI
```bash
gh repo clone JorFik/libft
```
This will create a directory called ``libft/`, enter with the command

```bash
cd libft
```
Once inside, create the static library `libft.a` with the following command

```bash
make
```
`libft.a` will be inside `libft/`, now you just need to compile your project including `libft/libft.a` and adding the `header files` that contain the functions you want to use, all `header files` are inside `libft/h_files`.

### Example of how to include all functions:

```c
#include "libft/h_files/libft.h"
```

For more information about the functions, see directly in the corresponding `header file` or for a quick description read the **Functions** section below.

To find the appropriate `header file` see **Categories** below.

## Categories

Inside `libft` there are functions for all kinds of applications, so I have decided to divide them into different `header files`, to make finding the right function efficient and easy, as well as giving the option to include only the necessary functions.

**The Categories are divided as follows:**

- Functions for character manipulation, defined in `libft_char_manipulation.h`.
- Functions for integer manipulation, defined in `libft_int_manipulation.h`.
- Functions for manipulation of a `linked list`, defined together with the functions in `libft_lst_manipulation.h`.
- Functions for dynamic memory allocation, defined in `libft_mem_allocation.h`.
- Functions that check memory, defined in `libft_mem_checks.h`.
- Functions for memory manipulation, defined in `libft_mem_manipulation.h`.
- Functions that check a `string` ending in `0`, defined in `libft_str_checks.h`.
- Functions to manipulate a `string`, defined in `libft_str_manipulation.h`.
- Functions for checking the type of the provided value, defined in `libft_type_checks.h`.
- Functions for writing different variables to a `file descriptor` provided to the function, defined in `libft_write_fd.h`.

There are 3 additional `header files` to those previously described that are not a category per se, and are as follows

 - `ft_printf.h`: The `ft_printf()` function, being more complex than the previous ones, occupies its own `header file` for its operation.
 - `get_next_line_bonus.h`: `get_next_line()` is a version with the bonuses described in the `get_next_line` project of code school 42, hence all its related files include the `_bonus` suffix. As with `ft_printf()` being a complex function it requires its own `header file`.
 - `libft.h`: This `header file` is all the previous ones together in a single `header file` to be able to include all the functions comfortably.

## Functions

The `libft` library includes the following functions (for more detailed information read the `header file`, it includes syntax, parameter description, notes, and more relevant information):

### Complex functions
- `ft_printf()`: Print a `string` including variables of different types.
- `get_next_line()`: Read the text of a file descriptor until a `character` `n` is encountered or the end of the file is reached.

### Libft Char Manipulation
- `ft_toupper()`: Transforms a `char` from lowercase to uppercase.
- `ft_tolower()`: Transforms a `char` from uppercase to lowercase.

### Libft Int Manipulation
- `ft_itoa()`: Transforms an `int` value to its `string` counterpart.

### Libft Lst Manipulation
- `ft_lstnew()`: Creates a new node type `t_list`.
- `ft_lstadd_front()`: Adds a node to the front of the list.
- `ft_lstadd_back()`: Adds a node to the end of the list.
- `ft_lstsize()`: Counts the number of nodes belonging to the list.
- `ft_lstlast()`: Scrolls down the list until the last member is reached.
- `ft_lstdelone()`: Deletes the contents of the node with the provided function, then frees the node with `free()` from the standard library.
- `ft_lstclear`: Completely removes the list, using the provided function for the content and `free()` to free each of the nodes.
- `ft_lstiter()`: Iterates the given function on each node of the list.
- `ft_lstmap()`: Iterate the `f()` function on each node in the list, saving the result in a new list, if something goes wrong, use the `del()` function to remove the contents of the new nodes, and `free()` to remove all nodes from the new list.

### Libft Mem Allocation
- `ft_calloc`: Performs a dynamic memory allocation and initializes all values to 0.
- `ft_free_n_null()`: Check if the given pointer is different from `NULL`, if so perform `free()` of the standard library and move the `pointer` to `NULL`.
- `ft_close`: Checks if the `file descriptor` is valid, if so closes it using `close()` from the standard library.

### Libft Mem Checks
- `ft_memchr`: Searches for the first occurrence of the given `character` within the described memory range.
- `ft_memcmp()`: Compares two memory ranges, returning `0` if they are equal, `>0` or `<0` if they are different.

### Libft Mem Manipulation
- `ft_memset()`: This function takes a memory block and sets it to the given value.
- `ft_memcpy()`: This function copies a source memory block to the destination address.
- `ft_memmove()`: This function is similar to `ft_memcpy()`, but handles cases where the source and destination overlap. `ft_memmove()` avoids this problem by copying the data in an order that depends on the relationship between src and dest.
- `ft_bzero()`: Sets a memory block at the given address to 0.

### Libft Str Checks
- `ft_strchr()`: Searches for the first occurrence of the given `character` within the `string`. If found, returns the address of that location. If not found, returns `NULL`.
- `ft_strrchr()`: This function is similar to `ft_strchr()`, but starts searching from the end of the `string `src`. It returns the address of the last place where the `character` c appears. If not found, it returns `NULL`.
- `ft_strncmp()`: Compares the 2 given strings up to `n` characters or until a difference is found. Returns the difference or `0` if they are equal.
- `ft_strnstr()`: This function searches for the first occurrence of the `array` `needle` in the `array` `haystack`, but does not search beyond `len` characters in `haystack`. If it finds `needle`, it returns the start address of `needle`. If not found, it returns `NULL`.

### Libft Str Manipulation

- `ft_strlen()`: Counts the number of characters in a `string`.
- `ft_strlcpy()`: Copies a `string` from source to destination up to a specified size.
- `ft_strlcat()`: Concatenates a source `string` to the end of a destination `string`, up to a specified size.
- `ft_atoi()`: Converts a `string` to an integer.
- `ft_strdup()`: Creates a copy of a `string`.
- `ft_substr()`: Extracts a substring of a given `string` from a specified index with a given length.
- `ft_strjoin()`: Joins two strings into a new `string`.
- `ft_strtrim()`: Removes the characters defined in `set` from the beginning and end of the `string` `src`, and stores the result in a new `string`.
- `ft_split()`: Splits a `string` into a `string array` using the `char` `c` as delimiter.
- `ft_strmapi()`: Applies a function to each character of a `string` and stores the results in a new `string`.
- `ft_striteri()`: Applies a function to each character in a `string`.

### Libft Type Checks

- `ft_isalpha()`: Checks if the given character is a letter in the `ASCII` table.
- `ft_isdigit()`: Checks if the given character is a digit in the `ASCII` table.
- `ft_isalnum()`: Check if the given character is a letter or a digit in the `ASCII` table.
- `ft_isascii()`: Check if the given character is in the `ASCII` table.
- `ft_isprint()`: Check if the given character is printable according to the `ASCII` table.

### Libft Write FD
- `ft_putchar_fd()`: Writes a `char` to a given file descriptor.
- `ft_putstr_fd()`: Writes a `string` to a given file descriptor.
- `ft_putendl_fd()`: Writes a `string` followed by a newline to a given file descriptor.

# Libft Español

`libft` es una biblioteca de funciones en C reescritas de la librería estándar, así como algunas funciones adicionales que pueden ser útiles para los proyectos en C.

`libft` es el primer proyecto en el Core-Curriculum dentro de la escuela de programación "42", esta es mi interpretación de la asignación con algunas funciones extras que iré agregando conforme sean necesarias.

## Uso

Para usar `libft`, descarga la biblioteca en la raíz de tu proyecto usando la siguiente línea de comandos

#### SSH
```bash
git clone git@github.com:JorFik/libft.git
```
#### HTTPS
```bash
git clone https://github.com/JorFik/libft.git
```
#### GitHub CLI
```bash
gh repo clone JorFik/libft
```
Esto creará un directorio llamado `libft/`, entra con el comando

```bash
cd libft
```
Una vez dentro crea la librería estática `libft.a` con el siguiente comando

```bash
make
```
`libft.a` se encontrará en la raíz de tu proyecto, ahora solo necesitas compilar tu proyecto incluyendo `libft.a` y agregando los `header files` que contengan las funciones que quieras usar, todos los `header files` están dentro de `libft/h_files`

### Ejemplo de como incluir todas las funciones:

```c
#include "libft/h_files/libft.h"
```

Para más información sobre las funciones, ver directamente en el `header file` correspondiente o para una descripción rápida, leer la sección **Funciones** a continuación.

Para encontrar el `header file` apropiado ver en **Categorías** a continuación.

## Categorías

Dentro de `libft` se encuentran funciones para todo tipo de aplicaciones, por lo que he decidido dividirlas en diferentes `header files`, para que encontrar la función adecuada sea eficiente y fácil, además de dar la opción de incluir únicamente las funciones necesarias.

- Funciones para la manipulación de caracteres, definidas en `libft_char_manipulation.h`
- Funciones para la manipulación de enteros, definidas en `libft_int_manipulation.h`
- Funciones para la manipulación de una `linked list`, definida junto a las funciones en `libft_lst_manipulation.h`
- Funciones para la allocación dinámica de memoria, definidas en `libft_mem_allocation.h`
- Funciones que checan la memoria, definidas en `libft_mem_checks.h`
- Funciones para la manipulación de memoria, definidas en `libft_mem_manipulation.h`
- Funciones que chequen un `string` terminado en `\0`, definidas en `libft_str_checks.h`
- Funciones para la manipulación de un `string`, definidas en `libft_str_manipulation.h`
- Funciones para checar el tipo de valor proporcionado, definidas en `libft_type_checks.h`
- Funciones para la escritura de distintas variables a un `file descriptor` proporcionado a la función, definidas en `libft_write_fd.h`

Hay 3 `header files` adicionales a los previamente descritos que no son una categoría per se, y son los siguientes

 - `ft_printf.h`: La función `ft_printf()` al ser más compleja que las anteriores, ocupa su propio `header file` para su funcionamiento.
 - `get_next_line_bonus.h`: `get_next_line()` es una versión con los bonus descritos en el proyecto `get_next_line` de la escuela de código 42, de ahí que todos sus archivos relacionados incluyen el sufijo `_bonus`. El igual que con `ft_printf()` al ser una función compleja requiere de su propio `header file`.
 - `libft.h`: Este `header file` es la recopilación de todos los anteriores para poder incluir todas las funciones cómodamente.

## Funciones

La biblioteca `libft` incluye las siguientes funciones (para información más detallada leer el `header file`, ahí se incluye syntax, descripción de parámetros, notas, y más información relevante):

### Funciones complejas
- `ft_printf()`: Imprime un `string` que incluyendo variables de distintos tipos.
- `get_next_line()`: Leerá el de texto de un descriptor de archivo hasta encontrarse un `carácter` `\n` o alcanzar el final del archivo.

### Libft Char Manipulation
- `ft_toupper()`: Transforma un `char` de minúscula a mayúscula.
- `ft_tolower()`: Transforma un `char` de mayúscula a minúscula.

### Libft Int Manipulation
- `ft_itoa()`: Transforma un valor `int` a su homólogo en `string`.

### Libft Lst Manipulation
- `ft_lstnew()`: Crea un nuevo nodo tipo `t_list`.
- `ft_lstadd_front()`: Agrega un nodo al inicio de la lista.
- `ft_lstadd_back()`: Agrega un nodo al final de la lista.
- `ft_lstsize()`: Cuenta la cantidad de nodos pertenecientes a la lista.
- `ft_lstlast()`: Avanza en la lista hasta llegar al último miembro.
- `ft_lstdelone()`: Elimina el contenido del nodo con la función proporcionada, luego libera el nodo con `free()` de la librería estándar.
- `ft_lstclear`: Elimina por completo la lista, usando la función proporcionada para el contenido y `free()` para liberar cada uno de los nodos.
- `ft_lstiter()`: Itera la función dada en cada nodo de la lista.
- `ft_lstmap()`: Itera la función `f()` en cada nodo de la lista, guardando el resultado en una nueva lista, si algo sale mal, usa la función `del()` para eliminar el contenido de los nuevos nodos, y `free()` para eliminar todos los nodos de la nueva lista.

### Libft Mem Allocation
- `ft_calloc`: Realiza un allocación dinámica de memoria e inicializa todos los valores a 0.
- `ft_free_n_null()`: Checa si el pointer dado es diferente a `NULL`, de ser así realiza `free()` de la librería estándar y mueve el `pointer` a `NULL`.
- `ft_close`: Checa si el `file descriptor` es válido, de ser así lo cierra usando `close()` de la librería estándar.

### Libft Mem Checks
- `ft_memchr`: Busca por la primera aparición del `carácter` dado dentro del rango de memoria descrito.
- `ft_memcmp()`: Compara dos rangos de memoria, devolviendo `0` si son iguales, `>0` o `<0` si son distintos.

### Libft Mem Manipulation
- `ft_memset()`: Esta función toma un bloque de memoria y lo establece al valor dado.
- `ft_memcpy()`: Esta función copia un bloque de memoria fuente a la dirección destino.
- `ft_memmove()`: Esta función es similar a `ft_memcpy()`, pero se encarga de los casos en los que la fuente y el destino se superponen. `ft_memmove()` evita este problema copiando los datos en un orden que depende de la relación entre src y dest.
- `ft_bzero()`: Establece un bloque de memoria en la dirección dada a 0.

### Libft Str Checks
- `ft_strchr()`: Busca la primera aparición del `carácter` dado dentro del `string`. Si lo encuentra, devuelve la dirección de ese lugar. Si no lo encuentra, devuelve `NULL`.
- `ft_strrchr()`: Esta función es similar a `ft_strchr()`, pero comienza a buscar desde el final del `string` `src`. Devuelve la dirección del último lugar donde aparece el `carácter` c. Si no lo encuentra, devuelve `NULL`.
- `ft_strncmp()`: Compara las 2 cadenas dadas hasta `n` caracteres o hasta que encuentre una diferencia. Devuelve la diferencia o `0` si son iguales.
- `ft_strnstr()`: Esta función busca la primera aparición del `array` `needle` en el `array` `haystack`, pero no busca más allá de `len` caracteres en `haystack`. Si encuentra `needle`, devuelve la dirección del inicio de `needle`. Si no la encuentra, devuelve `NULL`.

### Libft Str Manipulation

- `ft_strlen()`: Cuenta el número de caracteres en un `string`.
- `ft_strlcpy()`: Copia un `string` de origen a un destino hasta un tamaño especificado.
- `ft_strlcat()`: Concatena un `string` de origen al final de un `string` de destino, hasta un tamaño especificado.
- `ft_atoi()`: Convierte un `string` a un número entero.
- `ft_strdup()`: Crea una copia de un `string`.
- `ft_substr()`: Extrae una subcadena de un `string` dada, desde un índice especificado y con una longitud dada.
- `ft_strjoin()`: Une dos cadenas en un nuevo `string`.
- `ft_strtrim()`: Elimina los caracteres definidos en `set` del inicio y el final del `string` `src`, y guarda el resultado en un nuevo `string`.
- `ft_split()`: Divide un `string` en un `string array` usando como delimitador el `char` `c`.
- `ft_strmapi()`: Aplica una función a cada carácter de un `string` y almacena los resultados en un nuevo `string`.
- `ft_striteri()`: Aplica una función a cada carácter de un `string`.

### Libft Type Checks

- `ft_isalpha()`: Verifica si el carácter dado es una letra en la tabla `ASCII`.
- `ft_isdigit()`: Verifica si el carácter dado es un dígito en la tabla `ASCII`.
- `ft_isalnum()`: Verifica si el carácter dado es una letra o un dígito en la tabla `ASCII`.
- `ft_isascii()`: Verifica si el carácter dado está en la tabla `ASCII`.
- `ft_isprint()`: Verifica si el carácter dado es imprimible según la tabla `ASCII`.

### Libft Write FD
- `ft_putchar_fd()`: Escribe un `char` en un descriptor de archivo dado.
- `ft_putstr_fd()`: Escribe un `string` en un descriptor de archivo dado.
- `ft_putendl_fd()`: Escribe un `string` seguida de una nueva línea en un descriptor de archivo dado.
