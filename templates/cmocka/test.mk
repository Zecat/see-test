NAME = test.out

SRC += $(TESTS)

CC = gcc
CFLAGS += -Wall -Wextra -Werror -I ~/.local/include
LDLIBS += -lcmocka
RM = rm
OBJDIR = build

OBJ = $(addprefix $(OBJDIR)/, $(notdir $(SRC:.c=.o)))

# $(OBJ): $(OBJDIR)/%.o: ../%.c
	# $(CC) -c -o $@ $< $(CFLAGS)

ROOT_DIR:=$(shell dirname $(realpath $(firstword $(MAKEFILE_LIST))))

$(NAME): $(SRC) 
	$(CC) $(CFLAGS) $(SRC) $(LDFLAGS) $(LDLIBS)  -o $@

test: $(NAME)
	$(ROOT_DIR)/$(NAME) & # The & prevents makefile from displaying "make *** error..." when the test fail

#%.o: %.c
#	$(CC) $(CFLAGS) -c -o $@ $< -L./libft -lft 

clean:
	#$(RM) -rf $(OBJ)

fclean: clean
	#$(RM) -f $(NAME)

re: fclean all

.PHONY: clean fclean re all 
