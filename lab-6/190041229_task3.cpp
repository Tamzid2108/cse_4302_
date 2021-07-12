#include<bits/stdc++.h>
using namespace std;

class Cordinate
{
private:
    float ordinate, abcissa;
public:
    Cordinate():ordinate(0),abcissa(0)
    {


    };
    Cordinate(float a,float b):ordinate(a),abcissa(b)
    {

    };
    float getDistance(Cordinate c)
    {
        return sqrt(pow(abcissa - c.abcissa, 2) + pow(ordinate - c.ordinate, 2) );
    }
    float getDistance()
    {
        return sqrt(pow(abcissa,2) + pow(ordinate, 2) );
    }

    Cordinate move_x(float val)
    {
        ordinate+=val;
    }
    Cordinate move_y(float val)
    {
        abcissa+=val;
    }
    display()
    {
        cout<<ordinate<<" "<<abcissa<<endl;

    }
    move(int x,int y)
    {
        move_x(x);
        move_y(y);
    }
    bool operator >(Cordinate c)
    {
        return (getDistance()>c.getDistance())? true:false;
    }
    Cordinate operator ++(int)
    {
        ordinate++;
        abcissa++;
    }
    Cordinate operator ++()
    {
        ordinate++;
        abcissa++;
    }
    Cordinate operator --(int)
    {
        ordinate--;
        abcissa--;
    }
    Cordinate operator --()
    {
        --ordinate;
        --abcissa;
    }
    bool operator >=(Cordinate c)
    {
        return (getDistance()>=c.getDistance())? true:false;
    }
    bool operator !=(Cordinate c)
    {
        return (getDistance()!=c.getDistance())? true:false;
    }
    ~Cordinate();
} ;
int main()
{
    Cordinate c1(10,5),c2(2,4),c3(13,23);
    cout<<"distance between c1 & c2:"<<endl;
    cout<<c1.getDistance(c2)<<endl;
    cout<<"distance between c1 & origin:"<<endl;
    cout<<c1.getDistance()<<endl;
    c1.move_x(9);
    c1.move_y(13);
    c1.display();
    c1.move(12,31);
    c1.display();
    if(c1>c2)
    {
        cout<<"c1 greater than c2"<<endl;
    }
    else
    {
        cout<<"c2 greater than c1"<<endl;
    }
    c1++;
    c1.display();
    ++c1;
    c1.display();
    c2--;
    c2.display();
    --c2;
    c2.display();
    if( c2 >= c3 )
        cout << "Distance of c2 is greater or equal than Distance of c3"<<endl;
    else
        cout << "Distance of c2 is not greater or equal than Distance of c3"<<endl;
    if( c2 != c3 )
        cout << "Distance of c2 is is not equal to Distance of c3"<<endl;
    else
        cout << "Distance of c2 is  equal to Distance of c3"<<endl;

}
