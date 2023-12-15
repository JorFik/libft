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
- Funciones que chequen un string terminado en `\0`, definidas en `libft_str_checks.h`
- Funciones para la manipulación de un string, definidas en `libft_str_manipulation.h`
- Funciones para checar el tipo de valor proporcionado, definidas en `libft_type_checks.h`
- Funciones para la escritura de distintas variables a un `file descriptor` proporcionado a la función, definidas en `libft_write_fd.h`

Hay 3 `header files` adicionales a los previamente descritos que no son una categoría per se, y son los siguientes

 - `ft_printf.h`: La función `ft_printf()` al ser mas compleja que las anteriores ocupa su propio `header file` para su funcionamiento.
 - `get_next_line_bonus.h`: `get_next_line()` es una versión con los bonus descritos en el proyecto `get_next_line` de la escuela de codigo 42, de ahí que todos sus archivos relacionados incluyen el sufijo `_bonus`. El igual que con `ft_printf()` al ser una función compleja requiere de su propio `header file`.
 - `libft.h`: Este `header file` es la recopilación de todos los anteriores para poder incluir todas las funciones cómodamente.

## Funciones

La biblioteca `libft` incluye las siguientes funciones (para información mas detallada leer el `header file`, ahí se incluye syntax, descripcion de parametros, notas, y mas información relevante):

- # `ft_printf`:
		Imprime un string que incluyendo variables de distintos tipos
- `ft_putchar_fd`: Escribe un carácter en un descriptor de archivo dado.
- `ft_putstr_fd`: Escribe una cadena en un descriptor de archivo dado.
- `ft_putendl_fd`: Escribe una cadena seguida de una nueva línea en un descriptor de archivo dado.

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
