

#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <algorithm>
#include <string>
#include <ctime>
#include <vector>
#include <string>
#include <set>
#include <map>
using namespace std;

int main()
{
    
    set <int> s1;

    s1.insert(1);
    s1.insert(2);
    s1.insert(3);
    s1.insert(4);
    s1.insert(5);
    
    set <int> ::iterator it = s1.begin();
    for (int i = 1; it != s1.end(); i++, it++) 
    {
        cout << *it << " ";
    }
    cout << "\n";
    s1.erase(3);
    s1.erase(5);
    s1.erase(9);   // удаление несущ елемента
  
   set <int> ::iterator it1 = s1.begin();
   for (int i = 1; it1 != s1.end(); i++, it1++)
   {
        cout << *it1 << " ";
   }
  cout << endl;
   map <int,int> m1;

   m1.insert({ 1,10 });
   m1.insert({ 2,20 });
   m1.insert({ 3,30 });
   m1.insert({ 4,40 });
   m1.insert({ 5,50 });
   
   
   for (const auto& p : m1) 
   {
       cout << "(" << p.first << ", " << p.second << ") ";
   }

   cout << endl;
   m1.erase(3);
   m1.erase(2);
   m1.erase(9);  // удаление несущ елемента
   for (const auto& p : m1)
   {
       cout << "(" << p.first << ", " << p.second << ") ";
   }

}

