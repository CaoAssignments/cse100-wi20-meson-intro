#include <iostream>

using namespace std;

typedef int id;

class Student {
  public:
    Student(string s, id i) : name(s), pid(i){};

    ~Student(){};

    string getName() { return name; }

    id getPid() { return pid; }

    void setName(string name) {
        // this->name = name;
    }

    void setPid(id pid) {
        // this->pid = pid;
    }

  private:
    string name;
    id pid;

};  // End of class