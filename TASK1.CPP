#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class cqueue
{
	int n, fr, rr;
	cout<<"Enter number of petrol pumps";
	cin>>n;
	int l[n];
	int d[n];
	public:
	cqueue()
	{
		fr=rr=-1;
	}
	int noe=0;
	void ins();
	void cal();
}
void cqueue::ins()
{
	if(noe==n)
	cout<<"overflow";
	else
	{
		cout<<"Enter amount of petrol and distance from the next petrol pump";
		rr=(rr+1)%n;
		cin>>l[rr]>>d[rr];
		noe++;
	}
}
void cqueue::cal()
{
	int i, pos=-1;
	for(i=0; i<n; i++)
	{
		int total=0;
		int no=1; int k=i;
		while(no!=n)
		{
			total=total+l[k];
			if(total<d[k])
			{
				pos=-1;
				break;
			}
			else
			{
				k=(k+1)%n;
				no++;
			}
		}
		if(no==n)
		{
			pos=i;
			break;
		}
	}
	cout<<"Start="<<pos;
}
void main()
{
	clrscr();
	cqueue q;
	int ne;
	cout<<"Enter number of entries";
	cin>>ne;
	for(int i=0; i<ne; i++)
	{
		q.ins();
	}
	q.cal();
}





