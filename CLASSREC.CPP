#include <iostream.h>
#include <conio.h>
class Rectangle
{
 private:
	float length,width;
	int a[100],i,n,max;
 public:
	void input()
		{
		 cout<<"Input Length:";
		 cin>>length;
		 cout<<"Input Width:";
		 cin>>width;
		}
	void output()
		{
		 cout<<"Length\tWidth\tArea"<<endl;
		 cout<<length<<'\t'<<width<<'\t'<<area()<<endl;
		}
	float area()
		{
		 return length*width;
		}

};
class max : public Rectangle
{
	public : 
}
int main()
{
 clrscr();  
 Rectangle obj[10];
 int n,i;
 cout<<"Input n:";
 cin>>n;
 cout<<"Input data of Rectangle"<<endl;
 for(i=0;i<n;i++)
	obj[i].input();
 cout<<"The Result"<<endl;
 for(i=0;i<n;i++)
	obj[i].output(); 
for(i=0;i<n;i++)
obj[i].maxarea(obj[i].area(),obj[i+1].area()); return 0;
}
