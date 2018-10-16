# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: alepercq <marvin@le-101.fr>                +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/10/03 14:40:43 by alepercq     #+#   ##    ##    #+#        #
#    Updated: 2018/10/03 14:42:25 by alepercq    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME		=	ft_display_file

SRCS		=	ft_util.c \
	 			ft_display_file.c

INCLUDES	=	ft_util.h

OBJS		=	ft_util.o \
	 			ft_display_file.o

CC			=	gcc

CFLAGS		+=	-Wall -Wextra -Werror

RM			=	rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS)

$(OBJS): $(SRCC)
	$(CC) -c $(CFLAGS) $(SRCS) -I $(INCLUDES)

clean:
	$(RM) $(OBJS) *gch

fclean: clean
	$(RM) $(NAME)
