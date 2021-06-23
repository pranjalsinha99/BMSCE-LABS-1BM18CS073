class binary{
void toh(int n,char src,char temp,char des)
{
	if(n==1)
	{
		System.out.println("Move disc 1 from %c to %c\n",src,des);
		return;
	}
	else
	{
		toh(n-1,src,des,temp);
		printf("Move disc %d from %c to %c\n",n,src,des);
		toh(n-1,temp,src,des);
	}
}

void search(int arr[],int key,int n)
{
	int mid,last,beg;
	int i,j,count=0,k;
	beg=0;
	last=n-1;
	mid=(beg+last)/2;
	while (beg <= last) 
	{
    if (arr[mid] < key)
      beg = mid + 1;
    else if (arr[mid] == key) {
     break;
    }
    else
      last = mid - 1;

    mid = (beg + last)/2;
  	}
  	
	if(beg>last)
	{
	printf("-1-10\n");
	return;
	}
	i=beg;
	
	for(i=beg;i<last;i++)
	{
		if(arr[i]==key)
			{
			printf("first occurance: %d\n",i);
			break;
			}
		}
		j=i-1;
	for(k=i;k<n;k++)
	{
		if(key==arr[k])
		{
			
			j++;
			count++;
		}
	}

	printf("last occurance: %d\n",j);
	printf("count: %d\n",count);
}

void main()
{
	int ch,a,x,b,g;
	printf("1.TOH\n");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:
	printf("Enter number of discs\n");
	scanf("%d",&a);
	toh(a,'s','t','d');
	break;
  case 2:
  
	int a[10],l,i,k;
	printf("Enter size of array\n");
	scanf("%d",&l);
	printf("Enter elements in sorted manner\n");
	for(i=0;i<l;i++)
	scanf("%d",&a[i]);
	printf("Enter element to be searched\n");
	scanf("%d",&k);
	search(a,k,l);
  break;
	}
}
