#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cout<<"Enter the number of marks you want to provide: ";
	cin>>n;
	vector<int> marks;
	int sum=0,average=0;
	for(int i=0;i<n;i++){
		cin>>marks[i];
		sum+=marks[i];
	}
	average = sum/n;

	cout<<"Total marks: "<<sum<<endl;
	cout<<"Average: "<<average<<endl;
}
