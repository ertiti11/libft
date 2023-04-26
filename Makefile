# Nombre de la librería
LIBNAME=libft

#Archivos fuente
SRCS = ft_atoi.c ft_isalnum.c ft_calloc.c ft_substr.c ft_strtrim.c ft_itoa.c ft_split.c ft_strjoin.c ft_strdup.c ft_isascii.c ft_isprint.c ft_memcmp.c ft_memmove.c ft_strchr.c ft_strlcat.c ft_strlen.c ft_strrchr.c ft_toupper.c ft_bzero.c ft_isalpha.c ft_isdigit.c ft_memchr.c ft_memcpy.c ft_memset.c ft_strcmp.c ft_strlcpy.c ft_strnstr.c ft_tolower.c

#Archivos objeto
OBJS=$(SRCS:.c=.o)

CFLAGS=-Wall -Werror -Wextra

# Regla principal
all: $(OBJS)
	ar rcs $(LIBNAME).a $(OBJS)

# Regla para compilar archivos fuente
%.o: %.c
	$(CC) -c $(CFLAGS) $< -o $@

# Regla para limpiar archivos objeto y librería
clean:
	rm -f $(OBJS) 

fclean:
	rm -f $(OBJS) $(LIBNAME).a