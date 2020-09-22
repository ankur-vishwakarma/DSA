#include<iostream> 
#include<map> // for map operations 
using namespace std; 
  
int main() 
{ 
    // declaring map 
    // of char and int 
    map< string, int > mp; 
      
    // declaring iterators 
    map<string, int>::iterator it ; 
    map<char, int>::iterator it1 ; 
    map<char, int>::iterator it2 ; 
      
      string s="a";
    // inserting values  
    mp[s]=5; 
    /*mp['b']=10; 
    mp['c']=15; 
    mp['h']=20; 
    mp['k']=30; */
      
    // using lower_bound() to search for 'b'  
    // key found 
    // "it" has address of key value pair. 
string key="a";
    it = mp.lower_bound(key); 
      
    if(it == mp.end()) 
        cout << "Key-value pair not present in map" ; 
    else
        cout << "Key-value pair returned : " 
            << it->first << "->" << it->second ; 
      
    cout << endl ; 
      
    // using lower_bound() to search for 'd'  
    // key not found 
    // "it1" has address of next greater key. 
    // key - 'h' 
/*    it1 = mp.lower_bound('d'); 
      
    if(it1 == mp.end()) 
        cout << "Key-value pair not present in map" ; 
    else
        cout << "Key-value pair returned : " 
            << it1->first << "->" << it1->second ; 
      
    cout << endl; 
      
    // using lower_bound() to search for 'p'  
    // key not found 
    // "it2" has address of next greater key. 
    // all keys are smaller, hence returns mp.end() 
    it2 = mp.lower_bound('p'); 
      
    if(it2 == mp.end()) 
        cout << "Key-value pair not present in map" ; 
    else
        cout << "Key-value pair returned : "
            << it2->first << "->" << it2->second ; */
      
} 
