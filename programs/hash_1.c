#include<stdio.h>
int hash[13];int key;
void cr(int pos)
{   int i;
    int flag=0;
    for(i=pos;i<13;i++)
    {  
   
        if(hash[i]==-1)
        {
            hash[i]=key;flag=1;
            break;
        }
    }
    if(flag==0)
    {   for(i=0;i<pos;i++)
        {
            if(hash[i]==-1)
            {
                hash[i]=key;
                break;
            }
        }
    }
}
 
 
 
int main()
{
int temp;int nk;int i;
for(i=0;i<13;i++)
    hash[i]=-1;
printf("\n tnter the number of keys");
scanf("%d",&nk);
for(i=0;i<nk;i++)
{
    printf("\n enter the key ");
    scanf("%d",&key);
    temp=key%13;
printf("\n temp=%d",temp);
    if(hash[temp]==-1)
    {
        hash[temp]=key;
    }
    else
    {
        if(temp==12)
 
            cr(0);
 
        else
            cr(temp);
    }
}
printf("\n the hash table is: ");
for(i=0;i<13;i++)
{
    printf("\n %d ",hash[i]);
 
}
return 0;
}