#include <iostream>
using namespace std;
using std::cout;
using std::endl;
 
std::string encode(const std::string &c);
 
int main(int argc, char *argv[])
{
    std::string address = "123 #5 M&M Street";
    cout << "address=" << address << endl;
    cout << "address=" << encode(address) <<endl;
}
 
std::string encode(const std::string &s)
{
    static const char lkup[]= "0123456789abcdef";
    std::stringstream e;
    for(int i=0, ix=s.length(); i<ix; i++)
    {
        const char& c = s[i];
        if ( (48 <= c && c <= 57) ||
             (65 <= c && c <= 90) ||
             (97 <= c && c <= 122) || 
             (c=='-' || c=='_' || c=='.' || c=='~') 
        )
        {
            e << c;
        }
        else
        {
            e << '%';
            e << lkup[ (c&0xF0)>>4 ];
            e << lkup[ (c&0x0F) ];
        }
    }
    return e.str();
}
