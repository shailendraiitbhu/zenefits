#include <stdio.h>
#include<bits/stdc++.h>

using namespace std;


int rank(char c,char*a,int n)
{    int i=0;
    while(i<n && c!=a[i])
            i++;
      
      return i+1;
      
}

int fact(int n)
{
    if(n<=0)
      return 0;
    else if(n==1)
        return 1;
    else
        return (n)*fact(n-1);
}

int output(string s, char*a,int n)
{
   sort(a,a+n);
    int ans=0,p=n;
    for(int i=0;i<n;i++)
    {
        ans+=(rank(s[i],a,n)-1)*fact(p-1);
        p--;
    }
    
    return ans;
    
    
    
    
    
    
    
    
}






int main(void) {

	
	int n;
	cin>>n;
	char a[n];
	for(int i=0;i<n;i++)
	 cin>>a[i];
	 
	string s; cin>>s;
	cout<<output(s,a,n);
	
	return 0;
}

