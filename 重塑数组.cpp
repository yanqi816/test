#include<iostream>

using namespace std;
 
int main()
{
	char a[100];
	int b[100];
	int s=0;
	char ch;
	while((ch=cin.get())!='\n')
	{
		a[s++]=ch;
	}
	int m=0,n=0; 
	for(int i=0;i<s;i++)
	{
		if(a[i]=='['&&i!=1) m++;
		if(a[i]>='0'&&a[i]<='9') n++;
	}
	
	int u=0;
	for(int i=0;i<s;i++){
		if(a[i]=='['&&i!=0)
		{i++;
			while(a[i]!=']'){
				if(a[i]>='0'&&a[i]<='9')
				b[u++]=a[i]-'0';
			i++;	
			}
			
		}
	}
	int r,c;
	cin>>r;
	cin>>c;
	int o=0;
	if(r*c!=n) cout<<"error" <<endl;
	else {
		cout<<"[";
		for(int i=0;i<r;i++ ){
		cout<<"[";
		for(int j=0;j<c;j++){
			cout<<b[o];
			o++;
			if(j!=c-1) cout<<",";
		}
		cout<<"]";
		
	}
	cout<<"]"<<endl;
	}
	return 0;
	
}
