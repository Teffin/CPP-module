CC = clang++

SRC = ./

IDIR = ./

ODIR = obj

MKDIR_P = mkdir -p

CFLAGS = -I$(IDIR) -Wall -Wextra -Werror -std=c++98

NAME = zombies

_DEPS = Zombie.hpp ZombieEvent.hpp

DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = main.o Zombie.o ZombieEvent.o\


OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: $(SRC)/%.cpp $(DEPS)

	$(CC) -c -o $@ $< $(CFLAGS)

all: directories $(NAME)

directories: $(ODIR)

$(ODIR):
	$(MKDIR_P) $(ODIR)

$(NAME): $(OBJ)

	$(CC) -o $@ $^ $(CFLAGS)

clean:

	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~
	rm -rf $(ODIR)

fclean: clean

	rm -f $(NAME)

re: fclean all