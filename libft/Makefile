# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makecub->file                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlaazouz <jlaazouz@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/31 15:33:16 by jlaazouz          #+#    #+#              #
#    Updated: 2023/10/08 21:25:18 by jlaazouz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

SRCS	=	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c\
			ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c\
			ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c\
			ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strcmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c\
			ft_tolower.c ft_toupper.c\
			ft_printf.c ft_ptr.c ft_putchar.c ft_putnbr_u.c ft_putnbr.c ft_putstr.c ft_hexa_convert.c ft_countdigit.c\
			get_next_line.c get_next_line_utils.c\

OBJS	= ${SRCS:.c=.o}


CC		= cc

CFLAGS	= -Wall -Wextra -Werror

RM		= rm -f

all:		${NAME}

${NAME} :	${OBJS}
			@ar rcs ${NAME} ${OBJS}


clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all
