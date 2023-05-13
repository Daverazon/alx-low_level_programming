# My first makefile, i'll use it to quickly compile
# and delete files in my terminal
Compiler = gcc #variable to enable me easily change compilers
Flags = -o a.out
Targets = pre_post_increment.c
To_remove = a.out
a: #make or make adam executes only this terminal command
	$(Compiler) $(Flags) $(Targets) && ./a.out
c: #I can use make clean to execute the following indented command as a terminal command
	rm $(To_remove)
r: #I can use make run to execute the following indented command as a terminal command
	./a.out