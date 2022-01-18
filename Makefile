FILES=./src/main.c
FLAGS=-Wall -Wextra

OUTPUT=./bin/bored

all:
	gcc $(FILES) $(FLAGS) -o $(OUTPUT)
	$(OUTPUT)

compile:
	gcc $(FILES) $(FLAGS) -o $(OUTPUT)

run:
	$(OUTPUT)
	$(OUTPUT)
	$(OUTPUT)
	$(OUTPUT)