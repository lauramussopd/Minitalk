# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: laurmuss <laurmuss@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/15 18:19:36 by laurmuss          #+#    #+#              #
#    Updated: 2023/07/04 17:35:14 by laurmuss         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:=	libft.a
HEADER	:=	libft.h
SRCS	:=	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
			ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_tolower.c \
			ft_toupper.c ft_memmove.c ft_strlcpy.c ft_atoi.c ft_strnstr.c \
			ft_strcpy.c ft_memchr.c ft_strlcat.c ft_memcmp.c ft_calloc.c \
			ft_strdup.c ft_substr.c ft_strjoin.c ft_strjoin.c ft_strtrim.c \
		   	ft_split.c ft_itoa.c ft_putchar_fd.c ft_putstr_fd.c \
		   	ft_putendl_fd.c ft_putnbr_fd.c ft_strchr.c ft_strrchr.c \
		   	ft_strncmp.c ft_strmapi.c ft_striteri.c  ft_putptr.c \
			ft_printf.c ft_tipo.c ft_putstr.c ft_putchar.c ft_putnbr.c \
			ft_putpercentage.c ft_putuns.c ft_puthex_maius.c ft_puthex.c

SRCS_BONUS	:= ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
			   ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c

OBJS	:=	$(SRCS:.c=.o)
OBJS_BONUS := $(SRCS_BONUS:.c=.o)
CC		:=	gcc
CFLAGS	:=	-Wall -Werror -Wextra
AR		:=	ar rcs
RM		:=	rm -f
MODE	:=	normal

#Metodo implicito
%.o: %.c $(HEADER) Makefile
	$(CC) -c $(CFLAGS) $< -o $@

#Mis metodos
all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

bonus: .bonus

.bonus: $(OBJS) $(OBJS_BONUS)
	$(AR) $(NAME) $(OBJS) $(OBJS_BONUS)
	@touch .bonus

clean:
	$(RM) $(OBJS) $(OBJS_BONUS)

fclean: clean
	$(RM) $(NAME)
	$(RM) .bonus
re:	fclean all

.PHONY: all clean fclean re
