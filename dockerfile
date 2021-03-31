FROM debian

WORKDIR /laba_3

COPY sum_squar.asm main.c /laba_3/

RUN apt update;                             \
	apt install nano -y;                    \
	apt install gcc -y;                     \
	apt install nasm -y;                    \
	apt install gcc-multilib -y;            \
	apt install gdb -y

CMD nasm -g -f elf sum_squar.asm;           \
	gcc -g -m32 sum_squar.o main.c -o test; \
	/bin/bash