all:
	echo 'DSA with C'

dist/middle-of-linkedlist: src/middle-of-linkedlist.c
	gcc -Iinc/ src/middle-of-linkedlist.c -o dist/middle-of-linkedlist