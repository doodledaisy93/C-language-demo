//https://www.hackerrank.com/challenges/30-2d-arrays/problem
#include <stdio.h>
int main(){
    int arr[6][6], s, p = -64;
    for(int i = 0; i < 6; i++)
       for(int j = 0; j < 6; j++)
        scanf("%d",&arr[i][j]);
     for(int i = 0; i < 4; i++)
       for(int j = 0; j < 4; j++){   
      
        s=arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2] ;   
    
        if(s > p)  
    {
            p=s;
        }
    }
    printf("%d",p);
    return 0;
}
