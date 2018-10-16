# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: alepercq <marvin@le-101.fr>                +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/10/03 12:29:39 by alepercq     #+#   ##    ##    #+#        #
#    Updated: 2018/10/03 12:43:28 by alepercq    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME	=	libft.a

SRCS	=	./srcs/ft_putchar.c \
			 ./srcs/ft_swap.c \
			 ./srcs/ft_putstr.c \
			 ./srcs/ft_strlen.c \
			 ./srcs/ft_strcmp.c

INCLUDES=$(wildcard ./includes/*.h)

OBJS	=	ft_putchar.o \
	 		ft_swap.o \
			ft_putstr.o \
			ft_strlen.o \
			ft_strcmp.o

CC		=	gcc

CFLAGS+	=	-Wall -Wextra -Werror

AR		=	ar

ARFLAGS	=	rc

RM		=	rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

$(OBJS): $(SRCS)
	$(CC) -c $(CFLAGS) $(SRCS) -I $(INCLUDES)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
