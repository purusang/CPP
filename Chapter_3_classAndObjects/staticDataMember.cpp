#include<iostream>
using namespace std;
class items
{
    private:
        static int count;
        int number;
    public:
        void setData(int a)
        {
        number=a;
        count++;
        }
        void getcount()
        {
        std::cout<<"count is"<<count <<"\n";
        }
};
int items:: count;
int main()
{
    items x,y,z; // count is initialized to zero
    x.setData(100); // getting data into object x
    y.setData(200); // getting data into object y
    z.setData(300); // getting data into object z
    cout << "After reading data" << "\n";
    x.getcount(); // display count
    y.getcount();
    z.getcount();
    return 0;
}
