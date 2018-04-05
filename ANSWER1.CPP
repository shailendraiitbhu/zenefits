#include<bits/stdc++.h>

using namespace std;

void output(string s)
{
    int len=s.length();
    int a[len]={-1};
    int k=0;
    for(int i=0;i<len;i++)
    {
        if(s[i]!=',' && s[i]!='}' && s[i]!='{')
        {
            a[k++]=s[i];
        }
    }
    
    pair< int,pair<int,int> >p;
    
    for(int j=0;j<k;j++)
    {
        // Code goes here by using queue and stack data structure.
    }
}






int main(void) {

	string s;
	cin>>s;
	output(s)
	
	int n;
	cin>>n;
	char a[n];
	for(int i=0;i<n;i++)
	 cin>>a[i];
	 
	string s; cin>>s;
	output(s,a);
	
	
	
	
	
	
	
	
	return 0;
}

