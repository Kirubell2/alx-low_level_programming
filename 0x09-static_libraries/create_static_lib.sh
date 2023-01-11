#bin/bash
gcc -wall -pendatic -werror -wextra -c *.c
ar -rc libmy.a *.o
