#include<bits/stdc++.h>

using namespace std;

class Box
{
    public:

    Box()
    {
        this->l=0;
        this->b=0;
        this->h=0;
    }
    Box(int lenght ,int breadth, int height  )
    {
        this->l=lenght;
        this->b= breadth;
        this->h= height;
    }
    Box(const Box &copy)
    { 
        this->l=copy.l;
        this->b=copy.b;
        this->h=copy.h;
    }

    int getLenght()
    {
        return this->l;
    }
    int getBreadth()
    {
        return this->b;
    }
    int getHeight()
    {
        return this->h;
    }
    long CalculateVolume()
    {
        return (long)this->l*this->b*this->h;
    }
    bool operator<(const Box& b) {
        
        if(this->l<b.l)
        {
            return true;
        }
        if(this->b<b.b && this->l == b.l)
        {
            return true;
        }
        if(this->h<b.h && this->b == b.b)
        {
            return true;
        }
        return false;
      }
    friend ostream& operator<<(ostream& os, const Box& dt);

    private:
    int l;
    int b;
    int h;
};
ostream& operator<<(ostream& os, const Box& dt)
{
    os << dt.l <<" "<< dt.b <<" "<< dt.h;
    return os;
}




//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)


void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int box()
{
	check2();
}