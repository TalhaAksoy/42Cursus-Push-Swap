#include "push_swap.h"

int main(int argc, char **argv)
{
	int *a;
	int	*b;
	int	i;
	if (argc <= 1)
	{
		printf("Missing Parameter");
	}
	else
	{
		i = 0;
		a = malloc(sizeof(int) * argc + 1);
		b = malloc(sizeof(int) * argc + 1);
		while (argv[i + 1])
		{
			a[i] = atoi(argv[i + 1]);
			b[i] = 0;
			i++;
		}
		push_b(a,b);
		push_b(a,b);
		push_b(a,b);
		push_b(a,b);
		push_b(a,b);
		push_b(a,b);
		print_stack(a, 'a');
		print_stack(b , 'b');
	}
}
