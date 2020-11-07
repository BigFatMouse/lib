#ifndef LIBFT_H
# define LIBFT_H

#include <stdio.h>
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memccpy(void *dst, void *src, int c, size_t n);
void	*ft_memmove(void *dst,const void *src, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char*dst, const char *src, size_t n);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
void    ft_putnbr_fd(int n, int fd);
void    ft_putchar_fd(char c, int fd);
void    ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
int		ft_memcmp(const void *s1, const void *s2, size_t n);

#endif
