/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vraia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 20:29:12 by vraia             #+#    #+#             */
/*   Updated: 2018/10/24 21:39:25 by vraia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



int	ft_isdigit(int c)
int	ft_isalpha(int c)
int	ft_tolower(int c)
int	ft_strnequ(char const *s1, char const *s2, size_t n)
int	ft_isalnum(int c)
int	ft_toupper(int c)
int	strncmp(const char *s1, const char *s2, size_t n)
int	strcmp(const char *s1, const char *s2)
int	memcmp(const void *s1, const void *s2, size_t n)
int	ft_strequ(char const *s1, char const *s2)
int		wordcount(char *s, char c)
int		count(char 
int	ft_isascii(int c)*s, char c, int i)
int	ft_isprint(int c)
int	ft_atoi(const char *nptr)
char	*strstr(const char *s1, const char *s2)
char	*ft_strdup(const char *str)
char	*ft_strmap(char const *s, char (*f)(char))
char	*ft_strsub(char const *s, unsigned int start, size_t len)
char	*ft_strnew(size_t size)
char	*strcat(char *dest, const char *src)
char	*strchr(const char *s, int c)
char	*strrchr(const char *s, int c)
char	*strncpy(char *dest, const char *src, size_t n)
char	*strncat(char *dest, const char *src, size_t n)
char	*ft_strtrim(char const *s)
char	*ft_strjoin(char const *s1, char const *s2)
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
size_t	ft_strlen(const char *str)
size_t	strlcat(char *dst, const char *src, size_t size)
void	ft_putstr(char const *s)
void	*memcpy(void *dest, const void *src, size_t n)
void	ft_putnbr(int n)
void	ft_strdel(char **as)
void	*memchr(const void *s, int c, size_t n)
void	ft_memdel(void **ap)
void	*memset(void *s, int c, size_t n)
void	ft_strclr(char *s)
void	*memmove(void *dest, const void *src, size_t n)
void	ft_striter(char *s, void (*f)(char *))
void	*memccpy(void *dest, const void *src, int c, size_t n)
void	ft_putchar(char c)
void	ft_putendl(char const *s)
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
void	*ft_memalloc(size_t size)
void	ft_putstr(char const *s, int fd)
void	ft_putnbr(int n, int fd)
void	ft_putendl(char const *s, int fd)
void	ft_putchar_fd(char c, int fd)
void	ft_bzero(void *s, size_t n)
void	check_negative(int *n, int *neg, int *i)
