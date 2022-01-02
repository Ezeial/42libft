#-----------------------------------------------#
#------------------[ DIR NAME ]-----------------#
#-----------------------------------------------#

DIR_SRCS 		= srcs
DIR_CHARACTER	= character
DIR_CONVERSION	= conversion
DIR_FD			= file_descriptor
DIR_LL			= linked_list
DIR_MATH		= math
DIR_MEMORY		= memory
DIR_STRING		= string
DIR_VECTOR		= vector
DIR_ALGORITHM	= algorithm

DIR_OBJS		= objs

DIR_INCLUDES	= includes

#-----------------------------------------------#
#-----------------[ SRCS NAME ]-----------------#
#-----------------------------------------------#

SRCS_CHARACTER	=	ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
					ft_tolower.c ft_toupper.c
SRCS_CONVERSION	=	ft_atoi.c ft_convert_base.c ft_itoa_un_base.c ft_itoa_un.c ft_itoa.c
SRCS_FD			=	ft_putchar_fd.c ft_putendl_fd.c 
SRCS_LL			=	ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c \
					ft_lstiter.c ft_lstmap.c ft_lstnew.c ft_lstsize.c ft_lstcreate_el.c \
					ft_lstshift_up.c ft_lstshift_down.c ft_lstpop_back.c
SRCS_MATH		=	ft_abs.c
SRCS_MEMORY		= 	ft_bzero.c ft_calloc.c ft_memccpy.c ft_memchr.c ft_memcmp.c \
					ft_memcpy.c ft_memdup.c ft_memmove.c ft_memset.c ft_swap_int.c
SRCS_STRING		=	ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c \
					ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c \
					ft_strnstr.c ft_strrchr.c ft_strrev.c ft_strtrim.c ft_substr.c \
					ft_is_integer.c
SRCS_VECTOR		=   ft_vecclear.c ft_vecfilter.c ft_vecfind.c ft_vecfor_each.c ft_vecget.c \
					ft_vecmap.c ft_vecnew.c ft_vecpop_back.c ft_vecpush_back.c get_vec_data.c
SRCS_ALGORITHM	=	ft_quicksort.c

SRCS_FLAT		=	$(addprefix $(DIR_CHARACTER)/, $(SRCS_CHARACTER)) \
					$(addprefix $(DIR_CONVERSION)/, $(SRCS_CONVERSION)) \
					$(addprefix $(DIR_FD)/, $(SRCS_FD)) \
					$(addprefix $(DIR_LL)/, $(SRCS_LL)) \
					$(addprefix $(DIR_MATH)/, $(SRCS_MATH)) \
					$(addprefix $(DIR_MEMORY)/, $(SRCS_MEMORY)) \
					$(addprefix $(DIR_STRING)/, $(SRCS_STRING)) \
					$(addprefix $(DIR_VECTOR)/, $(SRCS_VECTOR)) \
					$(addprefix $(DIR_ALGORITHM)/, $(SRCS_ALGORITHM)) 

		
SRCS 			=	$(addprefix $(DIR_SRCS)/, $(SRCS_FLAT))

#-----------------------------------------------#
#----------------[ COMPILATION ]----------------#
#-----------------------------------------------#

OBJS			=	$(addprefix $(DIR_OBJS)/, $(SRCS_FLAT:.c=.o))
HEADERS			=	$(addprefix $(DIR_INCLUDES)/, libft.h)

CC				=	gcc
RM				=	rm -rf
CFLAGS			=	-Wall -Wextra -Werror -g3

NAME			=	libft.a

#-----------------------------------------------#
#-------------------[ TARGET ]------------------#
#-----------------------------------------------#

all:				$(NAME)

$(DIR_OBJS)/%.o:	$(DIR_SRCS)/%.c $(HEADERS)
					mkdir -p $(dir $@)
					$(CC) $(CFLAGS) -I./$(DIR_INCLUDES) -c $< -o $@

$(NAME):			$(OBJS)
					ar rcs $(NAME) $(OBJS)

clean:
					$(RM) $(OBJS)

fclean:				clean
					$(RM) $(DIR_OBJS)
					$(RM) $(NAME)

re:					fclean $(NAME)

.PHONY:				all clean fclean re
