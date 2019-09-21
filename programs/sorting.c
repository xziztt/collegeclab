
void selectionsort(int a[],int n)
{
    int temp,i,j,index_min;
    for(i=0;i<n-1;i++)
    {
        int index_min = i;
        for(j=i+1;j<n;j++)
        {
            if(a[index_min]>a[j])
            {
                temp=a[index_min];
                a[index_min]=a[j];
                a[j]=temp;
            }
        }
    }
}

void insertion_sort(int a[],int n)
{
    int i,temp,j;
    int min_index;
    min_index=0;
    for(i=0;i<n;i++)
}
