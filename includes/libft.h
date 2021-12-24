/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egiraldi <egiraldi@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 02:00:38 by egiraldi          #+#    #+#             */
/*   Updated: 2021/12/02 12:43:30 by egiraldi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

/*----------------------------------------------*/
/*---------------[ DEPENDENCIES ]---------------*/
/*----------------------------------------------*/

# include <unistd.h>
# include <stdlib.h>

/*----------------------------------------------*/
/*-----------------[ TYPEDEFS ]-----------------*/
/*----------------------------------------------*/
/*                  [ GLOBAL ]                  */

typedef int(*predicate)(void *el, void *arg);

/*                  [ LISTS ]                   */

typedef struct s_list_elem {
	struct s_list_elem	*next;
	struct s_list_elem	*prev;
	void		*data;
}				t_list_elem;

typedef struct s_list
{
	t_list_elem	*top;
	t_list_elem	*bottom;
}				t_list;

/*                 [ VECTOR ]                   */

typedef void * t_vector;
typedef void * t_vectorptr; 

typedef void(*vector_callback)(void *el, void *arg);


/*----------------------------------------------*/
/*----------------[ PROTOTYPES ]----------------*/
/*----------------------------------------------*/

/*                 [ CHARACTER ]                */

int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
int				ft_toupper(int c);
int				ft_tolower(int c);

/*                [ CONVERSION ]               */

int				ft_atoi(const char *str);
char			*ft_itoa(int n);
char			*ft_itoa_un(size_t n);
char			*ft_itoa_un_base(size_t number, char *base_to);
char			*ft_convert_base(char *number, char *base_from, char *base_to);

/*              [ FILE DESCRIPTOR ]            */

void			ft_putchar_fd(char c, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
void			ft_putstr_fd(char *s, int fd);

/*                [ LINKED LIST ]               */

t_list_elem		*ft_lstcreate_el(void *data);
t_list			*ft_lstnew();
size_t			ft_lstsize(t_list *lst);
void			ft_lstadd_back(t_list *lst, void *data);
void			ft_lstadd_front(t_list *lst, void *data);
void			ft_lstclear(t_list *lst, void (*del)(void*));
void			ft_lstdelone(t_list_elem *elem, void (*del)(void*));
void			ft_lstiter(t_list *lst, void (*f)(void*, void*), void *arg);
t_list			*ft_lstmap(t_list *lst, void *(*f)(void*, void*), void *arg);

/*                   [ MATH ]                  */

unsigned int	ft_abs(int n);

/*                  [ MEMORY ]                 */

void			*ft_memset(void *s, int c, size_t n);
void			*ft_bzero(void *s, size_t n);
void			*ft_memcpy(void *destination, const void *source, size_t num);
void			*ft_memccpy(void *dest, const void *src, int c, size_t n);
void			*ft_memdup(const void *src, size_t n);
void			*ft_memmove(void *dest, const void *src, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			*ft_calloc(size_t count, size_t size);

/*                  [ STRING ]                 */

size_t			ft_strlen(const char *s);
char			*ft_strrev(char *str);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
size_t			ft_strlcpy(char *dst, const char *src, size_t size);
size_t			ft_strlcat(char *dst, const char *src, size_t size);
char			*ft_strnstr(const char *haystack, const char *needle,
					size_t len);
char			*ft_strdup(const char *str);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s1, char const *set);
char			**ft_split(char const *s, char c);
char			*ft_strmapi(const char *s, char (*f)(unsigned int, char));
void			ft_striteri(const char *s, void (*f)(unsigned int, char *));


/*                  [ VECTOR ]                 */

void			*get_vec_begin(t_vector vec);
size_t			get_vec_type_size(t_vector vec);
size_t			*get_vec_capacity(t_vector vec);
size_t			*get_vec_used(t_vector vec);

t_vector		ft_vecnew(size_t initial_capacity, size_t type_size);
void			ft_vecclear(t_vector vec);
void			*ft_vecget(t_vector vec, size_t i);
void			ft_vecpush_back(t_vectorptr vecptr, void *data);
void			ft_vecpop_back(t_vector vec);

void			ft_vecfor_each(t_vector vec, vector_callback callback, void *arg);
t_vector		ft_vecmap(t_vector vec, vector_callback callback, void *arg);
void			*ft_vecfind(t_vector vec, predicate predicate, void *arg);
t_vector		ft_vecfilter(t_vector vec, predicate predicate, void *arg);


#endif