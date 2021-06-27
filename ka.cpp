# include<stdio.h>
int main()
{
int n=16,j,i,m;
int px=n;
int py=n;
int pz=i/2;
int pn=i/2;
for(i=1;i<=1;i++)
{
for(j=1;j<=n*2;j++)
{
if(i==1)
printf("¶");
else
printf(" ");
}
printf("\n");
}
for(i=1;i<=n;i++)
{
for(j=1;j<=n*2;j++)
{
if(((py==j||pz==j)&&(j>=n/2))||((j==n)&&(i
<=n))||((px==j)&&(i==n/2))||((px==j-2)&&(i==n/2-1))||((px==j-4)&&(i==n/2-2))||((px==j-5)&&(i==n/2-3))||((px==j-5)&&(i==n/2-4))||((px==j-3)&&(i==n/2-5))||((px==j-1)&&(i==n/2-6))||((px==j)&&(i==n/
2-7))||((px==j+3)&&(i==n/2+1))||((px==j+4
)&&(i==n/2))||((px==j+1)&&(i==n/2-1)))
printf("¶");
else
printf(" ");
}
px++;
py--;
pz++;
pn--;
printf("\n");
}
return 0;
}
