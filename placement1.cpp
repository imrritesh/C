#include<iostream>
using namespace std;
int main()
{
        int  limit, no, i,j,t, odd[100], even[100],ecount=0,ocount=0;
        printf("Enter the vkalue of N \n");
        scanf("%d", &no);
		cout<<"Enter limit of numbers.\n";
		cin>>limit;
for(i=1;i<=limit;i++)
	{
		cout<<"enter "<<i<<"st no ";
		cin>>no;
        for(i=1; i<=limit; i++)
		{
			for(j=i+1; j<=limit; j++)
			{
				if(odd[i] > odd[j])
				{
					t = odd[i];
					odd[i] = odd[j];
					odd[j] = t;
				}
			}
		}
	}
//Sorting in Descending Order
for(i=1; i<=limit; i++)
	{
	for(j=i+1; j<=limit; j++)
		{
		if(even[i]<even[j])
			{
			t = even[i];
			even[i] = even[j];
			even[j] = t;
			}
		}
	}

//Display in Descending Order
cout<<"Even numbers (Descending): ";
for(i=1; i<=ecount; i++)
	{
		cout<<even[i]<<" ";
	}
	cout<<"\n";

//Display in Ascending Order
cout<<"Odd numbers (Ascending): ";
for(i=1; i<=ocount; i++)
	{
		cout<<odd[i]<<" ";
	}
	return 0;
}

