CC= gcc 
CFLAGS= -Wall -Wextra -Werror 
DEBUGFLAGS=-g
CFILES= n_queens.c utils.c
BINARY= n_queens

all: $(BINARY)

re: fclean all

$(BINARY) : $(CFILES)
	$(CC) $(CFLAGS) $(CFILES) -o $(BINARY)

v: 
	$(CC) $(DEBUGFLAGS) $(CFLAGS) $(CFILES) -o $(BINARY)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(BINARY) 
