//Enter the password(with the do loop)
#include <iostream>
using namespace std;
int main()
{
    int password,defaultpassword;
    cout<<"Enter Default password:";
    cin>>defaultpassword;
    int passworde=0;
    do{
        cout <<"Enter password:";
        cin>>passworde;
    }while(password!=defaultpassword);
    cout<<"login successful";
    return 0;
}
