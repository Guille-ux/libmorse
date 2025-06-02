gcc -c morse.c -march=native -O2 -o libmorse.o
ar rcs libmorse.a libmorse.o
mv libmorse.a ../lib/
