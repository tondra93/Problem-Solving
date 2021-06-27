#include<bits/stdc++.h>
using namespace std;
int matrixMultiplication(int mat[],int i,int j)
{
    //base case:one matrix
    if(j<=i+1)
    {
        return 0;
    }
     // stores the minimum number of scalar multiplications (i.e., cost)
    // needed to compute matrix `M[i+1] … M[j] = M[i…j]`
    int min=INT_MAX;
    for(int k=i+1;k<=j-1;k++)
    {
        // recur for `M[i+1]…M[k]` to get an `i × k` matrix
        int cost=matrixMultiplication(mat,i,k);
        // recur for `M[k+1]…M[j]` to get an `k × j` matrix
        cost+=matrixMultiplication(mat,k,j);
        cost+=mat[i]*mat[k]*mat[j];
        if(cost<min)
        {
            min=cost;
        }

    }
    return min;

}
int main()
{
    //int mat[]={10,30,5,60};
    int n;
    cin>>n;
    int mat[n];
    for(int x=0;x<n;x++)
    {
        cin>>mat[x];
    }
    //int n=sizeof(mat)/sizeof(mat[0]);
    cout<<matrixMultiplication(mat,0,n-1);
    return 0;
}
