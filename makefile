all: compila executa
compila: main.o lista.o listaiguais.o arquivo.o
	gcc main.o lista.o listaiguais.o arquivo.o -o prog
main.o: main.c
	gcc -c main.c
lista.o: lista.c
	gcc -c lista.c
listaiguais.o: listaiguais.c
	gcc -c listaiguais.c
arquivo.o: arquivo.c
	gcc -c arquivo.c
executa:
	./prog
clean:
	rm main.o lista.o listaiguais.o arquivo.o prog