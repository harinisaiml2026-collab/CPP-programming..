
#include<iostream>
using namespace std;
class student{
private:
    int roll no;
    string name;
public:
    student (int r,string n)


}
   roll no=r;
   name=n;
   cout<<"student object created"<<endl;
void display()
{
    cout<<"roll no"<<roll no<<endl;
    cout<<"name"<<endl;
}
    cout<<"student destroyed"<<endl;
student()
{
    cout<<"s"<<endl;

}
int main()
{
    student s1(101,"arun");
    s1.display();
    return 0;
}




