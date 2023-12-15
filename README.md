# libft

`libft` es una biblioteca de funciones en C re-escritas de la librería estándar, así como algunas funciones adicionales que pueden ser útiles para los proyectos en C.

`libft` es el primer proyecto en el Core-Curriculum dentro de la escuela de programación "42", esta es mi interpretacion de la asignación con algunas funciones extras que ire agregando conforme sean necesarias.

## Categorías

Dentro de `libft` se encuentran funciones para todo tipo de aplicaciones, por lo que he decidido dividirlas en diferentes `header files`, para que encontrar la función adecuada sea eficiente y facil, ademas de dar la opción de incluir unicamente las funciones necesarias.

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

 - `ft_printf.h`: La función `ft_printf()` al ser mas compleja que las anteriores ocupa su propio `header file` para su funcionamiento.
 - `get_next_line_bonus.h`: `get_next_line()` es una versión con los bonus descritos en el proyecto `get_next_line` de la escuela de codigo 42, de ahí que todos sus archivos relacionados incluyen el sufijo `_bonus`. El igual que con `ft_printf()` al ser una función compleja requiere de su propio `header file`.
 - `libft.h`: Este `header file` es la recopilación de todos los anteriores para poder incluir todas las funciones cómodamente.

## Funciones

La biblioteca `libft` incluye las siguientes funciones (para información mas detallada leer el `header file`, ahí se incluye syntax, descripcion de parametros, notas, y mas información relevante):

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
- `ft_lstlast()`: Avanza en la lista hasta llegar al ultimo miembro.
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
- `ft_strrchr()`: Esta función es similar a `ft_strchr()`, pero comienza a buscar desde el final de la cadena `src`. Devuelve la dirección del último lugar donde aparece el `carácter` c. Si no lo encuentra, devuelve `NULL`.
- `ft_strncmp()`: Compara las 2 cadenas dadas hasta `n` caracteres o hasta que encuentre una diferencia. Devuelve la diferencia o `0` si son iguales.
- `ft_strnstr()`: Esta función busca la primera aparición de la cadena `needle` en la cadena `haystack`, pero no busca más allá de `len` caracteres en `haystack`. Si encuentra `needle`, devuelve la dirección del inicio de `needle`. Si no la encuentra, devuelve `NULL`.

### Libft Str Manipulation

- `ft_putchar_fd()`: Escribe un `carácter` en un descriptor de archivo dado.
- `ft_putstr_fd()`: Escribe una cadena en un descriptor de archivo dado.
- `ft_putendl_fd()`: Escribe una cadena seguida de una nueva línea en un descriptor de archivo dado.

## Uso

Para usar `libft`, simplemente incluye el archivo de encabezado en tu archivo de código fuente:

```c
#include "libft.h"
```

Luego, puedes llamar a cualquier función de la biblioteca como lo harías con cualquier otra función de C.

## Compilación

Para compilar `libft`, usa el comando make en la línea de comandos:
```bash
make
```

Esto generará un archivo libft.a que puedes enlazar con tus programas de C.
