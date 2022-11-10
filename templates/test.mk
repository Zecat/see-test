NAME = test.out

SRC += $(TESTS)
ShRC += auto_assert.c

CC = gcc
CFLAGS += -Wall -Wextra -Werror -I ~/.local/include
LDLIBS += -lcmocka
LDFLAGS += -L~/.local/lib
RM = rm
OBJDIR = build
#export LD_LIBRARY_PATH=/nfs/homes/fjullien/.local/lib:$LD_LIBRARY_PATH

OBJ = $(addprefix $(OBJDIR)/, $(notdir $(SRC:.c=.o)))

# $(OBJ): $(OBJDIR)/%.o: ../%.c
	# $(CC) -c -o $@ $< $(CFLAGS)

ROOT_DIR:=$(shell dirname $(realpath $(firstword $(MAKEFILE_LIST))))

preload:
	gcc override.c -o override.so -fPIC -shared -ldl

$(NAME): $(SRC) preload 
	$(CC) $(CFLAGS) $(SRC) $(LDFLAGS) $(LDLIBS) -o $@

test: $(NAME)
	LD_PRELOAD="$(ROOT_DIR)/override.so" $(ROOT_DIR)/$(NAME) & # The & prevents makefile from displaying "make *** error..." when the test fail

#%.o: %.c
#	$(CC) $(CFLAGS) -c -o $@ $< -L./libft -lft 

clean:
	#$(RM) -rf $(OBJ)

fclean: clean
	#$(RM) -f $(NAME)

re: fclean all

.PHONY: clean fclean re all 
