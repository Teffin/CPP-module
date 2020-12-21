CC = clang++

SRC = ./

IDIR = ./

ODIR = obj

MKDIR_P = mkdir -p

CFLAGS = -I$(IDIR) -Wall -Wextra -Werror -std=c++98

NAME = SuperTrap

_DEPS = FragTrap.hpp ScavTrap.hpp ClapTrap.hpp NinjaTrap.hpp SuperTrap.hpp

DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = main.o FragTrap.o ScavTrap.o ClapTrap.o NinjaTrap.o SuperTrap.o

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