NAME = test.out

SRC += $(TESTS)
SRC += main.c auto_assert.c test_list.c test_fn_list.c utils.c assert_handler.c print_test_report.c

CC = gcc
CFLAGS += -g -I ~/.local/include
LDLIBS += -lcmocka# -ltap
LDFLAGS += -L$(HOME)/.local/lib
#export LD_LIBRARY_PATH=$(HOME)/.local/lib:$LD_LIBRARY_PATH
#LDFLAGS += -L./tap
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

auto:
	ls $(SRC) | entr -c make test
clean:
	#$(RM) -rf $(OBJ)

fclean: clean
	#$(RM) -f $(NAME)

re: fclean all

.PHONY: clean fclean re all 
