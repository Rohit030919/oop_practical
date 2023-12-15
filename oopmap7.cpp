#include<iostream>
#include<iterator>
#include<string>
#include<map>
using namespace std;

int main(){
	
	string name;
	int population;
	int n;
	map<string,int> state;
	
	cout<<"Enter Number of entries in map"<<endl;
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"Enter State Name:";
		cin>>name;
		cout<<"Enter State Population:";
		cin>>population;
		state.insert(pair<string,int>(name,population));
	}
	
	cout<<"Enter the state name,to find its population:";
	cin>>name;
	
	map<string,int>::iterator itr=state.find(name);
	if(itr == state.end()){
		cout<<"State Not found";
	}
	else{
		cout<<"The Population is:"<<itr->second<<endl;
	}
	
}
