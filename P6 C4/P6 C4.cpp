
#include <iostream>

using namespace std;

//struct stFullName
//{
//    string FirstName;
//    string LastName;
//
//};
//
//stFullName ReadFullName()
//{
//    stFullName FullName;
//
//    cout << "Please enter your first name: \n";
//    cin >> FullName.FirstName;
//
//    cout << "Please enter your last name: \n";
//    cin >> FullName.LastName;
//    return FullName;
//}
//
//void PrintFullName(stFullName FullName)
//{
//    cout << "\nThe Full name is: " << FullName.FirstName << " " << FullName.LastName << endl;
//
//}

struct stFullName
{
    string FirstName;
    string LastName;

};

stFullName ReadFullName()
{
    stFullName FullName;

    cout << "Please enter your first name: \n";
    cin >> FullName.FirstName;

    cout << "Please enter your last name: \n";
    cin >> FullName.LastName;
    return FullName;
}

string GetFullName(stFullName FullName, bool Reversed)
{
    string FullNamme = "";

    if (Reversed)
        FullNamme = FullName.LastName + " " + FullName.FirstName;
    else
        FullNamme = FullName.FirstName + " " + FullName.LastName;
    return FullNamme;
}

void PrintFullName(string FullNamme)
{
    cout << "\nThe Full name is: " << FullNamme << endl;

}


int main()
{
    /*PrintFullName(ReadFullName());*/
    PrintFullName(GetFullName(ReadFullName(),true));

    return 0;
}

