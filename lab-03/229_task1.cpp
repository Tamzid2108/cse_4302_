#include<iostream>
using namespace std;


class Counter
{
private:
    int count;

public:

    void setIncrementStep(int step_val)
    {
        count=step_val;
        getcount();
    }

    void increment_count()
    {
        count=count+count;
        getcount();
    }
      void getcount()
    {
        cout<<count;
    }
    void reset_count()
    {
        count=0;
        getcount();
    }


};
int main()
{

    Counter c1;
    int i;
    int step_val;
    while(1)
    {
        cin>>i;
        if(i==1)
        {
            cin>>step_val;
            c1.setIncrementStep(step_val);
        }
        else if(i==2)
        {
            c1.increment_count();
        }
        if(i==3)
        {
            c1.reset_count();
        }
    }


}
