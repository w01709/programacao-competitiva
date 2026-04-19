#include <stdio.h>
#include <stdlib.h>

int main(){    	
    int arr[3];

    for(int i = 0; i < 2; i++)
    {
        scanf("%d", &arr[i]);
    }

    if (arr[0] < 1 || arr[0] > 40)
    {
        return 1;
    }
    
    if (arr[1] < arr[0] || arr[1] > 40)
    {
        return 1;
    }

    int interval = arr[1] - arr[0];

    printf("%d", arr[1] + interval);

    return 0;
}