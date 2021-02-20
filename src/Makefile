tokenizer.o: tokenizer.c tokenizer.h
	gcc -c tokenizer.c

gui.o: gui.c tokenizer.h
	gcc -c gui.c

gui: gui.o tokenizer.o
	gcc -o gui gui.o tokenizer.o
