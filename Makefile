CC = cc
CFLAGS = -Wall -Wextra -Werror
SERVER = server
CLIENT = client
PRINTF_DIR = ./ft_printf/
PRINTF_A = libftprintf.a

all: $(SERVER) $(CLIENT)

$(SERVER): server.o
	$(MAKE) -C $(PRINTF_DIR)
	$(CC) $(CFLAGS) -o $(SERVER) server.o -L$(PRINTF_DIR) -lftprintf

$(CLIENT): client.o
	$(MAKE) -C $(PRINTF_DIR)
	$(CC) $(CFLAGS) -o $(CLIENT) client.o -L$(PRINTF_DIR) -lftprintf


clean:
	$(MAKE) -C $(PRINTF_DIR) clean
	rm -f server.o client.o

fclean: clean
	$(MAKE) -C $(PRINTF_DIR) fclean
	rm -f $(SERVER) $(CLIENT)

re: fclean all

.PHONY: all clean fclean re


