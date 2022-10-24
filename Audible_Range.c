#include <stdio.h>
#include <stdlib.h>

int main()
{
	int test_cases = 0;
	int *frequency_values = NULL;
	int i;

	scanf("%d", &test_cases);

	frequency_values = (int *)malloc( sizeof(int) * test_cases );

	if( frequency_values == NULL )
		return -1;

	for( i = 0 ; i < test_cases ; i++ )
	{
		scanf("%d", &frequency_values[i]);
	}

	for( i = 0 ; i < test_cases ; i++ )
	{
		if( frequency_values[i] >= 67 && frequency_values[i] <= 45000)
			printf("YES\n");
		else
			printf("NO\n");
	}

	free(frequency_values);

	return 0;
}