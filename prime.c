#include <stdio.h>
int main()
{
    int a,b,count;
    printf("Enter two numbers(intervals): ");
    scanf("%d %d", &a, &b);
    printf("Prime numbers between %d and %d are: ", a,b);
    while (a < b)
    {
        count=0;
        for(int i=2; i<=a/2; ++i)
        {
            if(a%i == 0)
            {
                count=1;
                break;
            }
        }
      if (count== 0)
            printf("%d ",a);
            ++a;
    }
    return 0;
}
