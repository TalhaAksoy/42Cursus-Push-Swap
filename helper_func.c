#include "push_swap.h"

static	int	stack_len(int *a)
{
	int i = 0;
	while(a[i])
		i++;
	return(i);
}

void print_stack(int *a, char stack_name)
{
    int i;

    i = 0;
    while(a[i])
    {
        printf("%c[%d] => %d\n",stack_name, i , a[i]);
		i++;
    }
}

void push_b(int *a, int *b)
{
    int i = 0;
	int a_len = stack_len(a);
	int b_len = stack_len(b);
	if(a_len <= 0)
	{
		printf("A boş\n");
		exit(1);
	}
    while(b_len >= 0)
    {
		b[b_len + 1] = b[b_len];
	    i++;
		b_len--;
    }
	b[0] = a[0];
	i = 0;
	while(a[i])
	{
		a[i] = a[i + 1];
	 	i++;
	}
}