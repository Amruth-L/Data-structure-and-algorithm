void merge(int x[],int low,int mid,int high)
{
    int i,j,k,l;
    int c[5000];
    i=k=low;
    j=mid+1;
    while(i<=mid && j<=high)
    {
        if(x[i]<=x[j])
        c[k++]=x[i++];
        else
        c[k++]=x[j++];
    }
    if(i>mid)
    for(l=j;l<=high;l++)
    {
        c[k++]=x[l];
    }
    else
    for(l=i;l<=mid;i++)
    {
        c[k++]=x[l];

    }
    for(i=low;i<=high;i++)
    x[i]=c[i];

    }
void mergsort(int x[],int low,int high)
{
    int mid;
    if(low<high)
    {
        mid=(low+high)/2;
        mergsort(x,low,mid);
        mergsort(x,mid+1,high);
        merge(x,low,mid,high);
    }
}