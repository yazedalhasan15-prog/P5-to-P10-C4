
#include <iostream>

using namespace std;

// May way
//struct stInfo
//{
//    int Number1,Number2,Number3;
//
//};
//
//stInfo ReadNumbers()
//{
//    stInfo Info;
//
//    cout << "Please enter number 1: \n";
//    cin >> Info.Number1;
//
//    cout << "Pleasee enter number 2: \n";
//    cin >> Info.Number2;
//
//    cout << "Please enter number 3: \n";
//    cin >> Info.Number3;
//
//    return Info;
//}
//
//int sumNumbers(stInfo Info)
//{
//    
//    int sum = Info.Number1 + Info.Number2 + Info.Number3;
//    return sum;
//}
//
//void PrintNumber(stInfo Info)
//{
//    cout << sumNumbers(Info);
//}

void ReadNumbers(int &Number1,int &Number2,int &Number3)
{
    cout << "Please enter number 1: \n";
    cin >> Number1;

    cout << "Please enter number 2: \n";
    cin >> Number2;

    cout << "Please enter number 3: \n";
    cin >> Number3;

}

int sumOf3Numbers(int Number1, int Number2, int Number3)
{
    return Number1 + Number2 + Number3;
}

void PrintSumNumber(int Total)
{
    cout << "The total of 3 numbers is:" << Total << endl;
}

int main()
{
    /*PrintNumber(ReadNumbers());*/

    int Number1, Number2, Number3;

    ReadNumbers(Number1, Number2, Number3);
    PrintSumNumber(sumOf3Numbers(Number1, Number2, Number3));

    return 0;
}

