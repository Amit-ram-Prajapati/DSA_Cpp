#include <iostream>
#include <cstring>
using namespace std;

int main()
{

    char str[100];
    // str = "Amit prajapati";

    // 1. copy one string into another one
    strcpy(str, "Amit prajapati");
    cout << str << "\n";

    // 2. To concatenate/join one string with another
    char first_name[50] = "Amit ";
    char last_name[50] = "Prajapati";
    strcat(first_name,  last_name);
    cout << first_name << "\n";

    // 3. Compare to strings
    // char password[100] = "abc123";
    // char confirm_pass[100] = "abc123";
    char password[100] = "zbc123";
    char confirm_pass[100] = "xbz123";
    // cout << strcmp(password, confirm_pass); // 0 if equal
    // cout << strcmp(password, confirm_pass); // -1 because x > a 
    cout << strcmp(password, confirm_pass); // 1 because z > x


    return 0;
}