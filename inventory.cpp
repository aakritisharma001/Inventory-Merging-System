#include <iostream>
using namespace std;
int main(){
	
	int product1, product2, ID;
	
	cout<<"Enter the number of products for store 1: ";
	cin>>product1;
	
	int store1[100];
	
	cout<<"enter the product ID's for store 1: "<<endl;
	int i;
	for(i=0; i<product1; i++)
	{
		cin>>store1[i];
	}
	
	
	cout<<"Enter the number of products in store 2: ";
	cin>>product2;
	
	int store2[100];
	
	cout<<"Enter the product ID's for store 2: ";
	int j;
	for(j=0; j<product2; j++)
	{
		cin>>store2[j];
	}
	
	
	int n;
	int store3[200];
	int k=0;
	
	for(i=0; i<product1; i++)
	{
		store3[k] = store1[i];
		k++;
	}
	int m;
	
	for(j=0; j<product2; j++)
	{
		store3[k] = store2[j];
		k++;
	}
	cout<<"Total products: "<<endl;
	for(n=0; n<k; n++)
	{
		cout<<store3[n]<<" "<<endl;
	}
	int a, b;
	for(a=0; a<n-1; a++)
	{
		for(b=0; b<n-1; b++)
		{
			if(store3[b] > store3[b+1])
		{
			int t = store3[b];
			store3[b] = store3[b+1];
			store3[b+1] = t;
		}
		
		}
	}
	cout<<"After Sort: "<<endl;
	for(a=0; a<n; a++)
	{
		cout<<store3[a]<<" "<<endl;
	}
	
	int c = 1;
	
	for(i=0; i<n-1; i++)
	{
		if(store3[i] == store3[i+1])
		{
			c++;
		}
		if(store3[i] != store3[i+1])
		{
			if(c>1)
			{
				cout<<store3[i]<<" is duplicate and appears "<<c<<" times";
			}
			c =1;
		}
	}
	if(c>1)
	{
		cout<<store3[n-1]<<" is duplicate and appears "<<c<<" times";
	}
	cout<<endl;
	
	int d[200];
	int x = 0;
	
	d[x++] = store3[0];
	for(i=1; i<n; i++)
	{
		if(store3[i] != store3[i-1])
		{
			d[x++] = store3[i];
		}
	}
	
	
	cout<<"After removing duplicates: "<<endl;
	for(i=0; i<x; i++)
	{
		cout<<d[i]<<" ";
	}
	cout<<endl;

	return 0;
}
