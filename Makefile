install:
	sudo apt-get install libglfw3 && sudo apt-get install libglfw3-dev

run:
	gcc src/main.c -o hello-world -lglfw -lGLU -lGL -lGLESv2 && ./hello-world
