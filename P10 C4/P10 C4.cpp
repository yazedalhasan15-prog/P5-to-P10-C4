// Avrage of 3 numbers
#include <iostream>

using namespace std;

// May way
//void ReadNumbers(float& Number1, float& Number2, float& Number3)
//{
//    cout << "Please enter number 1 : \n";
//    cin >> Number1;
//
//    cout << "Please enter number2 : \n";
//    cin >> Number2;
//
//    cout << "Please enter number3 : \n";
//    cin >> Number3;
//}
//
//float calclateAvrageOf3Numbers(float Number1, float Number2, float Number3)
//{
//    return (Number1 + Number2 + Number3) / 3;
//}
//
//void PrintAvrageNumber(float Avrage)
//{
//    cout << "\nThe avrage of 3 Numbers is : " << Avrage << endl;
//}



void ReadNumbers(int& Number1, int& Number2, int& Number3)
{
    cout << "Please enter number 1 : \n";
    cin >> Number1;

    cout << "Please enter number2 : \n";
    cin >> Number2;

    cout << "Please enter number3 : \n";
    cin >> Number3;
}

int sumOf3Numbers(int Number1, int Number2, int Number3)
{
    int sum = Number1 + Number2 + Number3;
    return sum;
}

float calclateAvrage(int Number1, int Number2, int Number3)
{
    return (float)sumOf3Numbers(Number1, Number2, Number3) / 3;
}

void PrintAvrageNumber(float Avrage)
{
    cout << "\nThe avrage of 3 Numbers is : " << Avrage << endl;
}


int main()
{
    /*int Number1, Number2, Number3;

    ReadNumbers(Number1, Number2, Number3);
    PrintAvrageNumber(calclateAvrage(Number1, Number2, Number3));*/

    int Number1, Number2, Number3;
    ReadNumbers(Number1, Number2, Number3);
    PrintAvrageNumber(calclateAvrage(Number1, Number2, Number3));



    return 0;
}

