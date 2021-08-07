#include<stdio.h>



int ackermann(int m ,int n){
    int ans;
    if (m==0) ans = n+1;
    else if(n==0) ans = ackermann(m-1,1);
    else{
        ans = ackermann(m-1,ackermann(m,n-1)); 
    }
    
return ans;

}





int main(){

printf("ackermann()is : %d\n",ackermann(4,3));

    for (int i = 0; i < 3; i++)
    {
       for (int j = 0; j < 3; i++)
       {
           printf("ackermann(%d ,%d)is : %d\n",i,j,ackermann(i,j));
       }
       
    }
    


    return 0;
}