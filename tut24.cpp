#include <iostream>
using namespace std;

// static variables vo variables hote h jinko sab hi objects share karte h !! usko ek baar class ke bahar bhi define karna padhta h jaise idhar kiya h !!
// Static functions tab use karte h jab ham function banana chahte h jo ki sirf static members(dusre static functions or variables) ko hi access kar sakte ho !!
class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the id" << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
    }

    static void getCount(void){
        // cout<<id; // throws an error
        cout<<"The value of count is "<<count<<endl;
    }
};

// Count is the static data member of class Employee
int Employee::count; // Default value of a static variable is 0

// int Employee::count = 1000; --> If we want it to start from 1000 

int main()
{
    Employee harry, rohan, lovish;
    // harry.id = 1;
    // harry.count=1; // cannot do this as id and count are private

    harry.setData();
    harry.getData();
    Employee::getCount();

    rohan.setData();
    rohan.getData();
    Employee::getCount();

    lovish.setData();
    lovish.getData();
    Employee::getCount();

    return 0;
}
