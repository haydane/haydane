#include <iostream.h>
class message
{
public:
	char *msg()
	{
		return "y's value cannot < or = 0";
	}
};

float equation(float a, float b)
{
	if(b<=0)
		throw message();
	else
		return a/b;
}

void main()
{
	double x,y,result;
	while(cin >> x >> y)
	{
		try
		{
			result = equation(x,y);
			cout << "devided x/y= " << result;	
		}
		catch(message &err)
		{
			cout << "error: " << err.msg();
		}	
	}
}