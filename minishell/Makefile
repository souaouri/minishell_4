# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: souaouri <souaouri@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/13 12:34:57 by souaouri          #+#    #+#              #
#    Updated: 2024/06/10 16:03:11 by souaouri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC 				=	cc -fsanitize=address -g
CC				+=	-Wall -Wextra -Werror
NAME 			=	minishell
HEADER 			=	minishell.h
DIR				=	.object_files

SRC_FILES		=	minishell.c		exec.c
BUILTS_FILES	=	cd.c			echo.c			pwd.c		\
					env.c			env_utile.c		export.c
UTILS_FILES		=	utils_1.c 		utils_2.c 		utils_3.c 	\
					utils_4.c 		utils_5.c 		utils_6.c	\
					utils_7.c		utils_8.c
VUR_FILES		=	list.c

SRC_SRC			=	$(addprefix src/,$(SRC_FILES))
BUILTS_SRC		=	$(addprefix builtins/,$(BUILTS_FILES))
UTILS_SRC		=	$(addprefix utils/,$(UTILS_FILES))
VUR_SRC			=	$(addprefix virtual/,$(VUR_FILES))

SRC_OBJ			=	$(addprefix $(DIR)/,$(SRC_SRC:.c=.o))
BUILTS_OBJ		=	$(addprefix $(DIR)/,$(BUILTS_SRC:.c=.o))
UTILS_OBJ		=	$(addprefix $(DIR)/,$(UTILS_SRC:.c=.o))
VUR_OBJ			=	$(addprefix $(DIR)/,$(VUR_SRC:.c=.o))

OBJ_FILES		=	$(SRC_OBJ)	$(BUILTS_OBJ)	$(UTILS_OBJ)	\
					$(VUR_OBJ)

all : $(NAME)

$(NAME) : $(OBJ_FILES)
	@$(CC) -lreadline -o $@ $^
	@echo "✅ \033[1;32mCompilation Completed Successfully!\033[0;m"

$(DIR)/src/%.o : src/%.c
	@mkdir -p $(dir $@)
	@$(CC) -c $< -o $@
	@echo "\033[1;30mObject files generated Successfully! $@ \033[0;m"

$(DIR)/builtins/%.o : builtins/%.c
	@mkdir -p $(dir $@)
	@$(CC) -c $< -o $@
	@echo "\033[1;30mObject files generated Successfully! $@ \033[0;m"

$(DIR)/utils/%.o : utils/%.c
	@mkdir -p $(dir $@)
	@$(CC) -c $< -o $@
	@echo "\033[1;30mObject files generated Successfully! $@ \033[0;m"

$(DIR)/virtual/%.o : virtual/%.c
	@mkdir -p $(dir $@)
	@$(CC) -c $< -o $@
	@echo "\033[1;30mObject files generated Successfully! $@ \033[0;m"

clean :
	@rm -rf $(DIR)
	@echo "\033[31mObject files has been removed Successfully! ✅\033[0;m"

fclean : clean
	@rm -f $(NAME)
	@echo "\033[31mExecutable file has been removed Successfully! ✅\033[0;m"

re : fclean all

# export > solimi | cat | cat | cat > solimi
# message error in parc and exec stop cmd to run becose infile=-1;
# message error "cmd not found"
# 4
