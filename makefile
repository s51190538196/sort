all: main

main: maineng.c randeng.c randeng.h quicksort.c quicksort.h partition.c partition.h
	gcc maineng.c randeng.c randeng.h quicksort.c quicksort.h partition.c partition.h -o a.out
clean:
	rm -f a.out sortwords.txt words.txt
