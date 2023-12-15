#include<iostream>
using namespace std;

class Complex{
	int x;
	int y;
	public:
		Complex(){
			x=0;
			y=0;
		}
		friend istream &operator >>(istream &input,Complex &c){
			cout<<"Enter Real Part:";
			input>>c.x;
			cout<<"Enter Imaginary Part:";
			input>>c.y;
		}
		
		friend ostream &operator <<(ostream &output,Complex &c){
			
			output<<c.x<<"+"<<c.y<<endl;
		}
		
		Complex operator +(Complex c){
			Complex temp;
			temp.x = x + c.x;
			temp.y = y + c.y;
			return temp;
		}
		
		Complex operator*(Complex c){
			Complex temp;
			temp.x = (x*c.x)-(y*c.y);
			temp.y = (y*c.y)+(y*c.x);
			return temp;
		}
		
};
int main(){
	Complex c1,c2,c3,c4;
	
	cout<<"Default Value";
	cout<<c1;
	
	cout<<"Enter first number";
	cin>>c1;
	
	cout<<"Enter second number";
	cin>>c2;
	
	c3 = c1 + c2;
	cout<<"Addition:";
	cout<<c3;
	
	c4 = c1 * c2;
	cout<<"Multiplication:";
	cout<<c4;	
}
