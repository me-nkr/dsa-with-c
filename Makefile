all:
	echo 'DSA with C'

dist/middle-of-linkedlist: middle-of-linkedlist.c
	gcc middle-of-linkedlist.c -o dist/middle-of-linkedlist