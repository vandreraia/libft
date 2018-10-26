/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vraia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 20:29:12 by vraia             #+#    #+#             */
/*   Updated: 2018/10/25 22:27:53 by vraia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <string.h>

int	ft_isdigit(int c);
int	ft_isalpha(int c);
int	ft_tolower(int c);
int	ft_strnequ(char const *s1, char const *s2, size_t n);
int	ft_isalnum(int c);
int	ft_toupper(int c);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
int	ft_strcmp(const char *s1, const char *s2);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
int	ft_strequ(char const *s1, char const *s2);
int	ft_isascii(int c);
int	ft_isprint(int c);
int	ft_atoi(const char *nptr);
int	ft_isprint(int c);
char	**ft_strsplit(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strnstr(const char *s1, const char *s2, size_t len);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strstr(const char *s1, const char *s2);
char	*ft_strdup(const char *str);
char	*ft_strmap(char const *s, char (*f)(char));
char	*ft_strsub(char const *s, unsigned int start, size_t len);
char	*ft_strnew(size_t size);
char	*ft_strcat(char *dest, const char *src);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strncpy(char *dest, const char *src, size_t n);
char	*ft_strncat(char *dest, const char *src, size_t n);
char	*ft_strtrim(char const *s);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
size_t	ft_strlen(const char *str);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr(char const *s);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	ft_putnbr(int n);
void	ft_strdel(char **as);
void	*ft_memchr(const void *s, int c, size_t n);
void	ft_memdel(void **ap);
void	*ft_memset(void *s, int c, size_t n);
void	ft_strclr(char *s);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	ft_striter(char *s, void (*f)(char *));
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	ft_putchar(char c);
void	ft_putendl(char const *s);
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
void	*ft_memalloc(size_t size);
void	ft_putchar_fd(char c, int fd);
void	ft_bzero(void *s, size_t n);

#endif
