/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfreitas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 15:35:21 by sfreitas          #+#    #+#             */
/*   Updated: 2020/05/04 22:32:00 by sfreitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

typedef struct		s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

/*
** Regular functions
*/

int				ft_atoi(const char *str);
void			ft_bzero(void *source, size_t len);
void			*ft_calloc(size_t count, size_t size);
int				ft_isalnum(int caracter);
int				ft_isalpha(int caracter);
int				ft_isascii(int caracter);
int				ft_isdigit(int caracter);
int				ft_isprint(int caracter);
void			*ft_memccpy(void *dest, const void *source, int c, size_t len);
void			*ft_memchr(const void *source, int caracter, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			*ft_memcpy(void *dest, const void *source, size_t len);
void			*ft_memmove(void *dst, const void *src, unsigned long int len);
void			*ft_memset(void *source, int caracter, size_t len);
char			*ft_strchr(const char *source, int caracter);
char			*ft_strdup(const char *s1);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
size_t			ft_strlcpy(char *dest, char *src, size_t size);
size_t			ft_strlen(const char *source);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
char			*ft_strnstr(const char *text, const char *word, int value);
char			*ft_strrchr(const char *source, int caracter);
int				ft_tolower(int caracter);
int				ft_toupper(int caracter);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			**ft_split(char const *s, char c);
char			*ft_itoa(int n);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char			*ft_strtrim(char const *s1, char const *s2);

/*
** Bonus functions
*/

void			ft_lstadd_back(t_list **lst, t_list *new);
void			ft_lstadd_front(t_list **lst, t_list *new);
void			ft_lstclear(t_list **lst, void (*del)(void*));
void			ft_lstdelone(t_list *lst, void (*del)(void*));
void			ft_lstiter(t_list *lst, void (*f)(void*));
t_list			*ft_lstlast(t_list *lst);
t_list			*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
t_list			*ft_lstnew(void *content);
int				ft_lstsize(t_list *lst);


#endif