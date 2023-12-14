# libft

`libft` es una biblioteca de funciones de C re-escritas, así como algunas funciones adicionales que pueden ser útiles para los proyectos de C.

`libft` es el primer proyecto en el Core-Curriculum dentro de la escuela de programacion "42", esta es mi interpretacion de la tarea, con algunas funciones extras que ire agregando conforme las necesite.

## Categorias

Dentro de `libft` se encuentran funciones para todo tipo de aplicaciones por lo que he decidido dividirlas para encontrar la funcion que necesito de una manera mas rapida y tener la opcion de solo incluir las funciones que necesitare.

### Las Categorias son las siguientes
- Funciones de manipulacion de caracteres, definidas en `libft_char_manipulation.h`
- Funciones de manipulacion de enteros, definidas en `libft_int_manipulation.h`
- 

## Funciones

La biblioteca `libft` incluye las siguientes funciones:

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
