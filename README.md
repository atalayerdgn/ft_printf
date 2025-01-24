
## FT_PRINTF

This project is pretty straightforward, you have to recode printf. You will learn what is and how to implement variadic
functions.
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

  