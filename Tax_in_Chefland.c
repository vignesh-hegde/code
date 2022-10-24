#include <stdio.h>
#include <stdlib.h>

int main()
{
	int test_cases = 0;
	int *income_values = NULL;
	int i;

	scanf("%d", &test_cases);

	income_values = (int *)malloc( sizeof(int) * test_cases );

	if( income_values == NULL )
		return -1;

	for( i = 0 ; i < test_cases ; i++ )
	{
		scanf("%d", &income_values[i]);
		
		if( income_values[i] > 100 )
			income_values[i] -= 10;
	}

	for( i = 0 ; i < test_cases ; i++ )
	{
		printf("%d\n",income_values[i]);
	}

	free(income_values);

	return 0;
}