/*Find the security key to access the bank account in from the encrypted message. The key in the message is the first repeating number from the given message of numbers.
 Input:
String
 Output:
The first repeating number from the message
 Example:
Input:

123456654321

Output:

1*/

#include <stdio.h> 
#include <string.h>
int main(){
    char arr[20];         
    int x, y, len, flag=0;
    scanf("%s",arr);
    len = strlen(arr);
    for(x=0;x<len;x++)
    {
        for(y=x+1;y<len;y++)
        {
            if(arr[x]==arr[y] && flag == 0)
            {
                printf("%c",arr[y]);
                flag = 1;
                break;
            }
        }
    }
    return 0;
}