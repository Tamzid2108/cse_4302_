#include<iostream>
using namespace std;

class Counter
{

private:
    int count;
    int x;
public:
    Counter():count(0),x(1)
    {

    }
    Counter(int a,int b):count(a),x(b)
    {

    }

    void setIncrementStep(int step_val)
    {
        x=step_val;
    }
    int getStepval()
    {
        return x;
    }
    int getcount()
    {
        return count;

    }
    void increment()
    {
        count=count+x;
    }
    void resetCount()
    {
        x=0;
    }
    Counter operator +(Counter c) const
    {
        int m=count+c.count;
        int n=min(x,c.x);
        return Counter(m,n);
    }
    Counter operator +=(Counter c)
    {
        count+=count+c.count;
        x=c.x;
    }
    Counter operator ++()
    {
        count++;
        return Counter(count,x);
    }
    Counter operator ++(int)
    {
        ++count;
        return Counter(count,x);
    }
    friend Counter  operator + (int y,Counter c) ;


};
Counter operator + (int  y,Counter c)
{

    return Counter(c.count+y,c.x);
}
int main()
{
    Counter c1(4,1),c2(9,1),c3;
    cout<<"please enter the value of increment: ";
    int step_val;
    cin>>step_val;
    c1.setIncrementStep(step_val);
    c1.increment();
    cout << "c=" <<c1.getcount()<<"\n";
    cout << "c=" <<c1.getStepval()<<"\n";
    cout << "c=" <<c2.getcount()<<"\n";
    cout << "c=" <<c2.getStepval()<<"\n";
    cout << "c=" <<c3.getcount()<<"\n";
    cout << "c=" <<c3.getStepval()<<"\n";

    c3=c1+c2;
    cout << "c=" <<c3.getcount()<<"\n";
    cout << "c=" <<c3.getStepval()<<"\n";

    c2++;
    cout << "c=" <<c2.getcount()<<"\n";
    cout << "c=" <<c2.getStepval()<<"\n";
    ++c2;
    cout << "c=" <<c2.getcount()<<"\n";
    cout << "c=" <<c2.getStepval()<<"\n";
    cout<<"please enter the variable:";
    int val;
    cin>>val;

    c3=val+c2;
    cout << "c=" <<c3.getcount()<<"\n";
    cout << "c=" <<c3.getStepval()<<"\n";

    c1+=c2;
    cout << "c1=" <<c1.getcount()<<endl;
    cout << "c1=" <<c1.getStepval()<<endl;




}
