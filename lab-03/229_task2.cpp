#include<iostream>
using namespace std;

class division
{
private:
    float numerator,denominator;
public:
    void assign(float a,float b)
    {
        numerator=a;
        denominator=b;
        print();
    }
    double  convert()
    {
        float i;
        i=float(numerator/denominator);
        cout<<i;
    }
    void inverse()
    {

        cout<<denominator<<"/"<<numerator;
    }
    void print()
    {
        cout<<numerator<<"/"<<denominator;
    }
};



int main()
{
    division c1;
    int i;
    while(1)
    {

        cin>>i;
        if(i==1)
        {
            int a,b;
            cin>>a>>b;
            if(a!=0)
            {
                c1.assign(a,b);
            }
            else
            {
                cout<<"Numerator is zero!!!";
            }



        }
        if(i==2)
        {
            c1.convert();
        }
        if(i==3)
        {

            c1.inverse();
        }
    }
}
