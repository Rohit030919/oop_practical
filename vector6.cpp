#include<iostream>
#include<vector>
#include<iterator>
#include<string>
#include<algorithm>
using namespace std;

struct Item{
	
	string name;
	int quantity;
	int code;
	int cost;
	bool operator<(Item &other){
	return cost<other.cost;
	}
};
int main(){
	vector<Item> items;
	
	cout<<"Enter Item,Quantity,Code & Cost"<<endl;
	cout<<"Enter exit to stop"<<endl;
	
	
	//for insertion
	while(true){
		Item newitem;
		
		cout<<"Enter Item Name:";
		cin>>newitem.name;
		
		if(newitem.name=="exit"){
			break;	
		}
		
		cout<<"Enter Item Quantity:";
		cin>>newitem.quantity;
		
		cout<<"Enter Item Code";
		cin>>newitem.code;
		
		cout<<"Enter Item Cost";
		cin>>newitem.cost;
		
		items.push_back(newitem);
	}
	
	
	//for deleting
	int itemcode;
	cout<<"Enter Item Code to delete an Item:";
	cin>>itemcode;
	vector<Item>::iterator it;
	for(it=items.begin();it != items.end();++it){
		if(it->code == itemcode){
			items.erase(it);
			cout<<"Item Deleted";
			break;
		}
	}
	
	
	//for searching
	int ser;
	bool found = false;
	cout<<"Enter Item Code to search an Item:";
	cin>>ser;
	for(it=items.begin();it != items.end();++it){
		if(it->code == ser){
			found = true;
			cout<<it->code;
			cout<<"Item Found"<<endl;
			break;
		}
	}
	if(!found){
		cout<<"Not Found";
	}
	
	//for sorting
	sort(items.begin(),items.end());
	
	//for displaying
	for(int i=0;i<items.size();++i){
		cout<<"Items:"<<i+1<<"Name-"<<items[i].name<<"Quantity-"<<items[i].quantity
		<<"Code-"<<items[i].code<<"Cost-"<<items[i].cost<<endl;
	}
	
	
}
