#include<bits/stdc++.h>
using namespace std;

class User{
private:
    string name;
    string password;
public:
    ///void type does not return anything, just does the work
    void setName( string input ){
        name = input;
    }
    void setPass( string pass ){
        password = pass;
    }
    ///bool type function returns true if the statement is True
    bool checkPass( string pass ){
        if (pass == password) return true;
        return false;
    }
};

int main()
{
    User Zack;

/***
    editing like this won't work in here because the name and password are private. We need
    someone (some method) from the inside (of class) to update them.

    Zack.name = "Zack Efron";
    Zack.password = "irockudont33";

**/

    Zack.setName("Zack Efron");
    Zack.setPass("irock");

    cout << "Enter password : ";
    string pass;
    cin >> pass;

    if (Zack.checkPass( pass ) == true) cout << "You entered correct password!" << endl;
    else cout << "You entered invalid password!" << endl;

    return 0;
}
