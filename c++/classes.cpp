#include <iostream>
#include <string>
#include <sstream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class Student
{
    private:
        int age;
        string first_name;
        string last_name;
        int standard;
    public:
   void set_age(int age)
    {
        this->age=age;
    }  
   void set_first_name(string first_name)
    {
        this->first_name=first_name;
    }
    void set_last_name(string last_name)
    {
        this->last_name=last_name;
    }
    void set_standard(int standard)
    {
        this->standard=standard;
    }
   int get_age()
    {
        return this->age;
    }    
    string get_first_name()
    {
    return this->first_name;
    }
   string get_last_name()
    {
    return this->last_name;
    }
    int get_standard()
    {
    return this->standard;
    }
    string to_string()
    {
        string age_str;
        string standard_str;
        stringstream ss;
        stringstream ss2;
        
        ss<< this->age;
        ss>> age_str;

        ss2<< this->standard;
        ss2>> standard_str;

        return age_str+","+this->first_name+","+this->last_name+","+standard_str;
        
    
    }

};


int classes() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
