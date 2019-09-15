#include<stdio.h>
int hash_table[13];int hash_table2[26];
int h1(int key,int l)
{
    int temp=key%l;
    
    return temp;

}
int h2(int key,int l)
{
    return (7-(key%7));
}
int colres(int key,int l)
{
    int i,temp;
    for(i=0;i<l;i++)
    {
        temp=(h1(key,l)+i*h2(key,l))%l;
        if(hash_table[temp]==-1)
        {

                return temp;}
        else
            continue;
    }

   }

void main()
{
    int key;int lf;int i;
    printf("\n enter the number of elements to be inserted");
    int n;int nindex;float count=0;int cindex;
    scanf("%d",&n);
    for(i=0;i<13;i++)
        hash_table[i]=-1;int j=0;lf=0;
    while(j<=n&&lf<=50)
    {
        scanf("%d",&key);
        nindex=h1(key,13)+1;
        cindex=colres(key,13)+1;
        if(hash_table[nindex]==-1)
        hash_table[nindex]=key;
        else
        {
            hash_table[cindex]=key;
        }
        count++;
        lf=(count/13)*100;
        j++;
        printf("\n the load factor is currently %d",lf);
     }
     printf("\n the first hash table is");
     for(i=0;i<13;i++)
     {
         printf(" %d ",hash_table[i]);
     }
     printf("\n THE LOAD FACTOR IS NOW > 50 MAKING NEW HASH TABLE AND REHASHING.......");
     for(i=0;i<26;i++)
        hash_table2[i]=-1;
        
     for(i=0;i<26;i++)
     {
         key=hash_table[i];
         nindex=h1(key,26);
         cindex=colres(key,26);
         if(key!=-1)
         {
             if(hash_table2[nindex]==-1)
                    hash_table2[nindex]=key;
             else
             {
                    hash_table2[cindex]=key;
             }
             
         }
     }
     printf("\n enter the rest of the keys");
     for(i=count;i<n;i++)
     {
         scanf("%d",&key);
         nindex=h1(key,26);
         cindex=colres(key,26);
         if(hash_table2[nindex]==-1)
                    hash_table2[nindex]=key;
             else
             {
                    hash_table2[cindex]=key;
             }
         
     }

     
     printf("\n THE FINAL HASH TABLE IS ......");
     for(i=0;i<26;i++)
     {
         printf(" %d ",hash_table[i]);
     }
}
