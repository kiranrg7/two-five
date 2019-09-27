// cerner_2^5_2019
//Program for base_value ^ power_value

#include <stdio.h>

int main()
{
    int base_value,power_value;;
    int i=1;
    long result=1;

    printf("Enter base and power value respectively");
    scanf("%d%d",&base_value,&power_value);
    
    for(i=1;i<=power_value;i++)
     result = result*base_value;
     
    printf("result = %d",result);
    return 0;
}
