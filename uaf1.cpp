// CPP code to illustrate 
// std::string::data() 
   
#include <iostream> 
#include <string> 
#include <cstring> 
#include<vector>
using namespace std; 
   
// Function to demonstrate data()  
const char* dataDemo() 
{ 
    // Converts str1 to str2 without appending 
    // '/0' at the end 
    // char* ptr= malloc(0x100)
    string str1("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"); 
    return str1.data();
      
} 
          
// Driver code 


const char* dataDemo2() 
{ 
    // Converts str1 to str2 without appending 
    // char ppp[100]=;
    // vector<char> buffer(100);
    vector<char> buffer(5);

    // memcpy(buffer.data(),"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx",100);
    memcpy(buffer.data(),"xxxxx",5);

    return buffer.data();
      
} 

int main() 
{ 
     
    cout<<dataDemo2(); 

    return 0; 
}