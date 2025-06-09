all:
	g++ main.cpp funcionario.cpp desenvolvedor.cpp gerente.cpp estagiario.cpp -o main

clean: main
	rm main

run: main
	./main
