#include "libft.h"

/*typedef struct		st_list
{
	char 			*content;
	struct st_list	*next;
}					st_list;*/


int main ()
{
	
	char	*s0 = "elem0";
	char	*s1 = "elem1";
	char	*s2 = "elem2";
	char	*s3 = "!!";
	t_list	*begin;
	t_list	*list0;
	t_list	*list1;
	t_list	*list2;
	t_list	*list;
	
	list0 = ft_lstnew(s0);
	list1 = ft_lstnew(s1);
	list2 = ft_lstnew(s2);
	begin = list1;
	list2->next = 0;
	
	ft_lstadd_front(&begin, list0);
	ft_lstadd_back(&list0, list2);
	ft_lstsize(begin);
	
	while(begin)
	{
		printf("%s\n", begin->content);
		begin = begin->next;
	}
	printf("lstsize: %d\n", ft_lstsize(list0));
	list = ft_lstlast(list0);
	printf("lstlast: %s\n", list->content);
}
