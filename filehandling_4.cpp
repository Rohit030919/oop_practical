 #include<iostream>
 #include<string.h>
 #include<fstream>
 using namespace std;
 
 class File{
 	private:
 		string name;
 		int roll_no,age;
 	public:
 		char data;
 		void get_data(){
 			ofstream fout;
 			fout.open("testfile1.txt",ios::app);
 			if(fout.fail())
 				cout<<"Error in opening file";
			else{
				cout<<"Enter Name:";
				cin>>name;
				cout<<"Enter Rol_num";
				cin>>roll_no;
				cout<<"Enter Age";
				cin>>age;
				
				fout<<name;
				fout<<roll_no;
				fout<<age;
				
				fout.close();
			}
		 }
		 
		 void display(){
		 	ifstream fin;
		 	fin.open("testfile1.txt");
		 	if(fin.fail())
 				cout<<"Error in opening file";
			else{
				while(true){
					fin.get(data);
					if(fin.eof())
						break;
						cout<<data;
				}
				
			}
		 }	
 };
 int main(){
 	File f;
 	f.get_data();
 	f.display();
 }
