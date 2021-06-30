#include<bits/stdc++.h>
using namespace std;

int main()
{
    int accounts[][4]={
        {1,2,3},
        {4,1,6},
        {4,4,4}
    };

    int rows=3,cols=3,cust_id=0;

    int max=0,cust=0,sum=0;
    for(int i=0;i<rows;i++)
    {
        sum=0;
        for(int j=0;j<cols;j++){
        
            sum=sum+accounts[i][j];
        }
        if(sum>max){
        max=sum;
        cust_id=i;
        }
}

cout<<"Cust id is "<<cust_id+1<<" "<<max;


}