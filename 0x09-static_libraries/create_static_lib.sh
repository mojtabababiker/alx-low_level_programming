#!/bin/bash
find . -type f -name '*.c' -exec gcc -c {} \;
ar rc libmy.a *.o
ranlib -t libmy.a
rm -f *.o
