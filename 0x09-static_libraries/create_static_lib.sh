#!/bin/bash
gcc -Wall -Waxtra -Werror -pedantic -c *.c
ar rc liball.a *.o
