# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: selee <selee@student.42lyon.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/14 13:48:53 by selee             #+#    #+#              #
#    Updated: 2020/12/14 14:46:54 by selee            ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_bzero.c ft_calloc.c ft_isalnum.c\
		  ft_isalpha.c ft_isascii.c ft_isdigit.c\
		  ft_isprint.c ft_memccpy.c ft_memchr.c\
		  ft_memcmp.c ft_memcpy.c ft_memmove.c\
		  ft_memset.c ft_putchar_fd.c ft_putstr_fd.c\
		  ft_strchr.c ft_strdup.c ft_strjoin.c\
		  ft_strlcat.c ft_strlcpy.c ft_strlen.c\
		  ft_strncmp.c ft_strnstr.c ft_strrchr.c\
		  ft_substr.c ft_tolower.c ft_toupper.c\
		  ft_putendl_fd.c ft_putnbr_fd.c ft_atoi.c\
		  ft_itoa.c ft_strtrim.c ft_strmapi.c\
		  ft_split.c

BONUS	= ft_lstnew.c ft_lstadd_front.c ft_lstlast.c ft_lstsize.c\
		ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c\
		ft_lstiter.c ft_lstmap.c

OBJS	= ${SRCS:.c=.o}

BONUS_OBJS = ${BONUS:.c=.o}

NAME	= libft.a

CC		= gcc
RM		= rm -rf

CFLAGS	= -Wall -Wextra -Werror

.c.o: libft.h	
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			ar rc ${NAME} ${OBJS}
			ranlib $(NAME)


all:		${NAME}

clean:
			${RM} ${OBJS} ${BONUS_OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

bonus:		$(OBJS) $(BONUS_OBJS)
			ar rc $(NAME) $(OBJS) $(BONUS_OBJS)

PHONY: all clean fclean are bonus
