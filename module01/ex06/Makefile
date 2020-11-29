CC = clang++

SRC = ./

IDIR = ./

ODIR = obj

MKDIR_P = mkdir -p

CFLAGS = -I$(IDIR) -Wall -Wextra -Werror

NAME = human

_DEPS =

DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = Weapon.o HumanA.o HumanB.o main.o

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

	rm $(NAME)

re: fclean all