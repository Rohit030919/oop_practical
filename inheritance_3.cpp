#include<iostream>
#include<string>
using namespace std;

class publication{
	public:
		string name;
		int price;
		void get(){
			cout<<"Enter NAme:";
			cin>>name;
			cout<<"Enter Price";
			cin>>price;
		}
		void disp(){
			cout<<"Name--"<<name;
			cout<<"Price--"<<price;
		}	
};
class book:public publication{
	public:
		int pages;
		void getpage(){
			try{
				publication::get();
				cout<<"Enter Number of pages:";
				cin>>pages;	
				if(pages<=0)
				throw pages;
			}
			catch(...){
				cout<<"Invalid page count";
			}
			
		}
		void dispbook(){
			publication:disp();
			cout<<"Number of Pages in Book:"<<pages;
		}
};
class tape:public publication{
	public:
		int duration;
		void getdur(){
			try{
				publication::get();
				cout<<"Enter duration:";
				cin>>duration;
				if(duration<=0)
				throw duration;
			}
			catch(...){
				cout<<"Invalid Duration";
			}
			
		}
		void disptape(){
			publication:disp();
			cout<<"duration of the tape:"<<duration;
		}
};
int main(){
	book b;
	cout<<"Details of Book:";
	b.getpage();
	b.dispbook();
	
	cout<<" "<<endl;
	
	tape t;
	cout<<"Details of Tape:";
	t.getdur();
	t.disptape();
}

