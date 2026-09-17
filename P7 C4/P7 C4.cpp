
#include <iostream>
#include<string>

using namespace std;

////May way
//struct stInfo
//{
//    float Number;
//};
//stInfo ReadNumber()
//{
//    stInfo Info;
//
//    cout << "Please enter the number: \n";
//    cin >> Info.Number;
//
//    return Info;
//}
//
//float HalfOfNumber(stInfo Info)
//{
//    float HalfNumber = Info.Number / 2;
//    return HalfNumber;
//}
//
//void PrintNumber(float HalfNumber)
//{
//    cout << endl << HalfNumber;
//}


int ReadNumber()
{
    int Number;

    cout << "Please enter the number: \n";
    cin >>Number;

    return Number;
}

float CalculateHalfOfNumber(int Number)
{
    return (float) Number / 2;
}

void PrintNumber(int Number)
{
    string Result = "The half number of " + to_string(Number) + " is " + to_string(CalculateHalfOfNumber(Number));
    cout << endl << Result;
}

int main()
{
    
    /*PrintNumber(HalfOfNumber(ReadNumber()));*/
    PrintNumber(ReadNumber());

    return 0;
}

