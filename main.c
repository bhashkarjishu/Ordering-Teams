#include <stdio.h>
#include <math.h>

int difference(int *arr1,int *arr2)
{
    int pos = 0,neg = 0,equal = 0;
    for (int i = 0; i < 3; i++)
    {   
        if (arr1[i] - arr2[i] >= 0)
            pos++;
        
        if (arr1[i] - arr2[i] <= 0)
            neg++;
        
        if(arr1[i] - arr2[i] == 0)
            equal++;
    }
    if ((pos == 3 || neg == 3) && equal != 3)
    {
        return 1;
    }
    else
        return 0;
    
}
int main() 
{
	int t;
	
	scanf("%d\n",&t);
	for(int i = 0; i < t; i++)
    {
        int person1[3],person2[3],person3[3];
        for (int i = 0; i < 3; i++)
        {
            scanf("%d",&person1[i]);
        }
        for (int i = 0; i < 3; i++)
        {
            scanf("%d",&person2[i]);
        }

        for (int i = 0; i < 3; i++)
        {
            scanf("%d",&person3[i]);
        }
        
        if (difference(person2,person3)&&difference(person1,person2)&&difference(person1,person3) == 1)
        {
            printf("yes\n");
            continue;
        }
        else
            printf("no");
        
        printf("\n");
    }
    return 0;
}



