#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class Student{
private:
    int age, standard;
    string first_name, last_name;
public:
    void set_age(int x){
        age = x;
    }
    void set_standard(int x){
        standard = x;
    }
    void set_first_name(string x){
        first_name = x;
    }
    void set_last_name(string x){
        last_name = x;
    }
    int get_age(){
        return age;
    }
    string get_last_name(){
        return last_name;
    }
    string get_first_name(){
        return first_name;
    }
    int get_standard(){
        return standard;
    }
    string to_string(){
        stringstream ss;
        stringstream ss2;

        ss << age;
        string ageStr = ss.str();
        
        ss2 << standard;
        string standardStr = ss2.str();

        string result = ageStr + "," + first_name + "," + last_name + "," + standardStr;
        return result;
    }
};

int main() {
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