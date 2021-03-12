tokenizer.o: tokenizer.c tokenizer.h history.h
	gcc -c tokenizer.c

gui.o: gui.c tokenizer.h history.h
	gcc -c gui.c

history.o: history.c history.h
	gcc -c history.c

gui: gui.o tokenizer.o history.o
	gcc -o gui gui.o tokenizer.o history.o

