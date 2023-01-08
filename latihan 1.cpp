#include <iostream>
using namespace std;

struct name {
  char name[20];
};

struct roll {
  char name[20];
  struct name info;
} data;

int main() {
  cout << "Enter student name:";
  cin >> data.info.name;
  cout << "Enter student Roll:";
  cin >> data.name;

  cout << "\n\n---Data Store Completed---\n\n";
  cout << "Name : " << data.info.name << "\nRoll : " << data.name;
}