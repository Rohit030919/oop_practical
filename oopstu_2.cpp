#include<iostream>
#include<string>
using namespace std;

class Student{
	public:
		string name;
		string ptr;
		string str;
		

		//Default Constructor
		Student(){
			cout<<"____________________________________________"<<endl;
		}
				
		//destructor
		~Student(){
			cout<<"Destructor"<<endl;
		}
		
		
		//Inline Function
		inline void inline_fun(){
			cout<<"__Student Data:__"<<endl;
		}
				
		
		
		//this Pointer
		void point(string ptr){
			this->ptr =ptr;
		}
		void disp_point(){
			cout<<"Printed Using This Pointer:"<<ptr;
		}
		
		
		//Frnd func. declared
		friend void frndfun(Student &obj);
};



//frnd fun. defined
void frndfun(Student &obj){
	cout<<"Enter Name:";
	cin>>obj.name;
	
}



int main(){
	int n;
	
	cout<<"Enter Number Of Students:[Max 10]:";
	cin>>n;
	
	Student *s = new Student[n];
	
	for(int i=0;i<n;i++){
		frndfun(s[i]);
	}
	
	for(int i=0;i<n;i++){
		s[i].inline_fun();
		cout<<"Name:"<<s[i].name<<endl;
	}
	
	s[1].point("End...");
	cout<<" "<<endl;
	s[1].disp_point();
	
	delete[] s;
}
