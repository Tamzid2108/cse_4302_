#include<iostream>
using namespace std;

class bankaccount
{

private:
    string name;
    int account_number;
    string account_type;
    int balance1;
public:
    void customerDetails(string s,int a)
    {
        name=s;
        account_number=a;

    }
    void accounttype(string s1)
    {
        account_type=s1;

    }
    void balance(int b)
    {
        balance1=b;


    }
    void deposit(int c)
    {
        balance1=balance1+c;
    }
    void withdraw(int d)
    {

        balance1=balance1-d;
    }

    void display()
    {
        cout<<name<<endl;
        cout<<account_number<<endl;
        cout<<account_type;
        cout<<balance1;


    }
};

int main()
{

    bankaccount c1;





        string s;
        int a;
        cout<<"ACCOUNT HOLDER:";
        cin>>s;
        cout<<"ACCOUNT NUMBER:";
        cin>>a;
        c1.customerDetails( s, a);
        cout<<"TYPE OF ACCOUNT:";
        string s1;
        c1.accounttype(s1);
        int b;
        cin>>b;
        c1.balance(b);
        cout<<"do you want to deposit money??";
        int i;
        cin>>i;
        if(i==1)
        {



        int c;
        cin>>c;
        c1.deposit(c);
        }
        else
        {
        int d;
        cin>>d;
        c1.withdraw(d);
        }






}
