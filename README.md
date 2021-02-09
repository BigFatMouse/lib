# Libft

This is a study project for School21

# Subject
Write your own library, containing an extract of
important functions for your cursus.

# Part1
In the partI, you must re-code a set of the libc functions, as defined in their man. Your functions will need to present the same prototype and behaviors as the originals. Your functions’ names must be prefixed by “ft_”. For instance strlen becomes
ft_strlen

You must re-code the following functions. These function do not need any external
functions:
• memset
• bzero
• memcpy
• memccpy
• memmove
• memchr
• memcmp
• strlen
• strlcpy
• strlcat
• strchr
• strrchr
• strnstr
• strncmp
• atoi
• isalpha
• isdigit
• isalnum
• isascii
• isprint
• toupper
• tolower

You must also re-code the following functions, using the function “malloc”:
• calloc
• strdup

# Part2

• ft_substr

Prototype char *ft_substr(char const *s, unsigned int start,
size_t len);

Parameters #1. The string from which to create the substring.
#2. The start index of the substring in the string ’s’.
#3. The maximum length of the substring.
Return value The substring. NULL if the allocation fails.
External functs. malloc
Description Allocates (with malloc(3)) and returns a substring
from the string ’s’.
The substring begins at index ’start’ and is of
maximum size ’len’.

• ft_strjoin
Prototype char *ft_strjoin(char const *s1, char const *s2);

Parameters #1. The prefix string.
#2. The suffix string.
Return value The new string. NULL if the allocation fails.
External functs. malloc
Description Allocates (with malloc(3)) and returns a new
string, which is the result of the concatenation
of ’s1’ and ’s2’.

• ft_strtrim

Prototype char *ft_strtrim(char const *s1, char const *set);

Parameters #1. The string to be trimmed.
#2. The reference set of characters to trim.
Return value The trimmed string. NULL if the allocation fails.
External functs. malloc
Description Allocates (with malloc(3)) and returns a copy of
’s1’ with the characters specified in ’set’ removed
from the beginning and the end of the string.


• ft_split

Prototype char **ft_split(char const *s, char c);

Parameters #1. The string to be split.
#2. The delimiter character.
Return value The array of new strings resulting from the split.
NULL if the allocation fails.
External functs. malloc, free
Description Allocates (with malloc(3)) and returns an array
of strings obtained by splitting ’s’ using the
character ’c’ as a delimiter. The array must be
ended by a NULL pointer.

• ft_itoa

Prototype char *ft_itoa(int n);

Parameters #1. the integer to convert.
Return value The string representing the integer. NULL if the
allocation fails.
External functs. malloc
Description Allocates (with malloc(3)) and returns a string
representing the integer received as an argument.
Negative numbers must be handled.

• ft_strmapi

Prototype char *ft_strmapi(char const *s, char (*f)(unsigned
int, char));

Parameters #1. The string on which to iterate.
#2. The function to apply to each character.
Return value The string created from the successive applications
of ’f’. Returns NULL if the allocation fails.
External functs. malloc
Description Applies the function ’f’ to each character of the
string ’s’ to create a new string (with malloc(3))
resulting from successive applications of ’f’.

• ft_putchar_fd

Prototype void ft_putchar_fd(char c, int fd);

Parameters #1. The character to output.
#2. The file descriptor on which to write.
Return value None
External functs. write
Description Outputs the character ’c’ to the given file
descriptor.

• ft_putstr_fd

Prototype void ft_putstr_fd(char *s, int fd);

Parameters #1. The string to output.
#2. The file descriptor on which to write.
Return value None
External functs. write
Description Outputs the string ’s’ to the given file
descriptor.

• ft_putendl_fd

Prototype void ft_putendl_fd(char *s, int fd);
Turn in files -
Parameters #1. The string to output.
#2. The file descriptor on which to write.
Return value None
External functs. write
Description Outputs the string ’s’ to the given file
descriptor, followed by a newline.

• ft_putnbr_fd
Prototype void ft_putnbr_fd(int n, int fd);

Parameters #1. The integer to output.
#2. The file descriptor on which to write.
Return value None
External functs. write
Description Outputs the integer ’n’ to the given file
descriptor.

# Bonus part

Here is a description of the fields of the t_list struct:

typedef struct s_list
</br>{
</br>void *content;
</br>struct s_list *next;
</br>} t_list;

content : The data contained in the element. The void * allows to store any kind
of data.
</br>next : The next element’s address or NULL if it’s the last element.

• ft_lstnew

Prototype t_list *ft_lstnew(void *content);

Parameters #1. The content to create the new element with.
Return value The new element.
External functs. malloc
Description Allocates (with malloc(3)) and returns a new
element. The variable ’content’ is initialized
with the value of the parameter ’content’. The
variable ’next’ is initialized to NULL.

• ft_lstadd_front

Prototype void ft_lstadd_front(t_list **lst, t_list *new);

Parameters #1. The address of a pointer to the first link of
a list.
#2. The address of a pointer to the element to be
added to the list.
Return value None
External functs. None
Description Adds the element ’new’ at the beginning of the
list.

• ft_lstsize

Prototype int ft_lstsize(t_list *lst);

Parameters #1. The beginning of the list.
Return value Length of the list.
External functs. None
Description Counts the number of elements in a list.

• ft_lstlast

Prototype t_list *ft_lstlast(t_list *lst);

Parameters #1. The beginning of the list.
Return value Last element of the list.
External functs. None
Description Returns the last element of the list.

• ft_lstadd_back

Prototype void ft_lstadd_back(t_list **lst, t_list *new);

Parameters #1. The address of a pointer to the first link of
a list.
#2. The address of a pointer to the element to be
added to the list.
Return value None
External functs. None
Description Adds the element ’new’ at the end of the list.

• ft_lstdelone

Prototype void ft_lstdelone(t_list *lst, void (*del)(void
*));

Parameters #1. The element to free.
#2. The address of the function used to delete the
content.
Return value None
External functs. free
Description Takes as a parameter an element and frees the
memory of the element’s content using the function
’del’ given as a parameter and free the element.
The memory of ’next’ must not be freed.

• ft_lstclear

Prototype void ft_lstclear(t_list **lst, void (*del)(void
*));

Parameters #1. The adress of a pointer to an element.
#2. The adress of the function used to delete the
content of the element.
Return value None
External functs. free
Description Deletes and frees the given element and every
successor of that element, using the function ’del’
and free(3).
Finally, the pointer to the list must be set to
NULL.

• ft_lstiter

Prototype void ft_lstiter(t_list *lst, void (*f)(void *));

Parameters #1. The adress of a pointer to an element.
#2. The adress of the function used to iterate on
the list.
Return value None
External functs. None
Description Iterates the list ’lst’ and applies the function
’f’ to the content of each element.

• ft_lstmap

Prototype t_list *ft_lstmap(t_list *lst, void *(*f)(void *),
void (*del)(void *));

Parameters #1. The adress of a pointer to an element.
#2. The adress of the function used to iterate on
the list.
#3. The adress of the function used to delete the
content of an element if needed.
Return value The new list. NULL if the allocation fails.
External functs. malloc, free
Description Iterates the list ’lst’ and applies the function
’f’ to the content of each element. Creates a new
list resulting of the successive applications of
the function ’f’. The ’del’ function is used to
delete the content of an element if needed.


