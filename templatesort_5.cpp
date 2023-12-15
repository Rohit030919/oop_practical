#include<iostream>
using namespace std;

template<class T>
class sort{
	public:
		T arr[30];
		int n;
		void get(){
			cout<<"Enter the number of entries in an array:";
			cin>>n;
			cout<<"Enter elements:";
			for(int i=0;i<n;i++){
				cin>>arr[i];
			}
		}
		
		void selection_sort(){
			T temp;
			for(int i=0;i<n-1;i++){
				int min = i;
				for(int j=i+1;j<n;j++){
					if(arr[min]>arr[j]){
						min = j;
				 	}
					}
					temp = arr[min];
					arr[min] = arr[i];
					arr[i] = temp;

			}
		}
		
		void display(){
			cout<<"Sorted Array:";
			for(int i=0;i<n;i++){
				cout<<arr[i]<<" ";
			}
		}
};
int main(){
	cout<<"Integer Array"<<endl;
	sort<int> s1;
	s1.get();
	s1.selection_sort();
	s1.display();
	
	cout<<" "<<endl;
	
	cout<<"Float Array"<<endl;
	sort<float> s2;
	s2.get();
	s2.selection_sort();
	s2.display();
	
	return 0;
}
