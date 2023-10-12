# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlaazouz <jlaazouz@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/09 16:54:22 by jlaazouz          #+#    #+#              #
#    Updated: 2023/10/12 21:39:31 by jlaazouz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS_M = main.c

OBJS_M = ${ALL_SRCS:.c=.o}

PARSING_M =	${addprefix parsing/,check_colors_textures.c check_colors_textures_1.c\
						check_map.c checks_player.c error_logs.c fill_data.c parsing.c\
						parsing_utils_1.c	parsing_utils_2.c parsing_utils_3.c read_map.c}

PARSING_OBJ_M = ${PARSING_M:.c=.o}


ALL_SRCS = ${SRCS_M} ${PARSING_M} 


NAME = cub3D

LIBFT = libft/libft.a

CC = cc 

CFLAGS = -Wall -Wextra -Werror -g -fsanitize=address

RM = rm -rf

all : ${NAME}


${NAME} : ${ALL_OBJS} ${PARSING_M:.c=.o}
	@make -C libft
	${CC} ${CFLAGS} ${ALL_SRCS} ${LIBFT} -o ${NAME} # -lmlx -framework OpenGL -framework AppKit
clean:
	${RM} ${OBJS_M} 
	${MAKE} -C libft clean

fclean: clean
	${RM} ${NAME}
	${MAKE} -C libft fclean

re: fclean all

.PHONY: all bonus clean fclean re ${LIBFT}
