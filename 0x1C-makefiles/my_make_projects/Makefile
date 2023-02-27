.PHONY: all 

all:create compile

CC = gcc
CR = touch

create:
	@echo "Create file"
	${CR} hello.c

compile:
	@echo "Compile hello.c"
	${CC} hello.c -o hello

generate:
	@echo "Creating empty text files..."
	touch file-{1..10}.txt

clean:
	@echo "Cleaning up..."
	rm *.txt
	
