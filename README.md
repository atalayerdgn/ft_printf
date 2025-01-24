
## FT_PRINTF

This project is pretty straightforward, you have to recode printf. You will learn what is and how to implement variadic
functions.


## Variadic Functions and VA Macros
In C, variadic functions allow you to define functions that accept a variable number of arguments. These functions rely on macros provided in the <stdarg.h> header. The key macros used for handling variadic arguments are:
	* va_list: A type that holds information needed for traversing the variable arguments.
	* va_start: Initializes a va_list variable to retrieve the additional arguments passed to the function. It requires the name of the last fixed argument in the function's parameter list.
	* va_arg: Retrieves the next argument from the va_list. It requires the type of the argument to retrieve.
	* va_end: Cleans up the va_list after all arguments have been processed.
## Example main.c


```C
#include "stdio.h"
#include "ft_printf.h"

int main(void){
    ft_printf("%d\n",strlen("string"));
	printf("%d\n",strlen("string"));
}
```
## Compile

```bash
  make
  gcc ./libftprintf.a main.c
  ./a.out
```

  
