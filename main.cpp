#include <iostream>

using namespace std;
class Student{
    public:
    string name;
    int rno;
    float marks;
    int standard;
};
int main()
{   Student s[4];
    for(int i=0;i<4;i++)
    {   cout<<"Enter name: ";
        cin>>s[i].name;
        cout<<"Enter rno: ";
        cin>>s[i].rno;
        cout<<"Enter marks: ";
        cin>>s[i].marks;
        cout<<"Enter standard: ";
        cin>>s[i].standard;
    }
    for(int i=0;i<4;i++){
        cout<<endl<<s[i].name<<" having roll number "<<s[i].rno<<" studying in class "<<s[i].standard<<" has got "<<s[i].marks<<" marks in the final examination. "<<endl;
    }
    return 0;
}
