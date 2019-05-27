#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int l;
	   // l=n.length();
	    //testing
	    int count=0;
	    int temp =n;
	    while(temp)
	    {
	        temp=temp/10;
	        count++;
	    }
	    l=count;
	    int arr[count];
	    temp=n;
	    for(int i=0; i<count; i++)
	    {
	        arr[l-1-i]=temp%10;
	        temp=temp/10;
	        
	    }

	    //here
	    int a,b; //a , b variable for checking sorted part of string
	    a=l-1;
	    b=l-2;
	    int k=0; //Variable for traversing through string
	    
	    while(arr[b] >= arr[a])
	    {
	        b--;
	        a--;
	  	}

	    if(arr[b] < arr[a])
	    {
	    // To find the just greater element than n[b]
	    for(int i=l-1; i>b; i--)
	    {
	        if(arr[i]>arr[b])
	        {
	        swap(arr[i],arr[b]);
	        break; //break the loop if we find just greater ele
	        }
	    }
	    sort(arr+a,arr+l);
	    for(int i=0; i<l; i++)
	    cout<<arr[i];
	    cout<<endl;
	    }
	    else
	    cout<<"not possible"<<endl;
	}
	return 0;
}