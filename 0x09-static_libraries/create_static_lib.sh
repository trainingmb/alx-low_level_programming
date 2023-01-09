gcc -c -Wall $(echo $(ls *.c))
ar rc liball.a *.o