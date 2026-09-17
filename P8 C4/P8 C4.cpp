// Mark Pass Faild
#include <iostream>

using namespace std;

//Doctor way
enum enPassOrFail { Pass = 1, Fail = 2 };


//May way
//int ReadMark()
//{
//    int Number;
//
//    cout << "Please enter the mark: \n";
//    cin >> Number;
//
//    return Number;
//}
//
//bool CheckPassOrFail(int Number)
//{
//    return (Number >= 50);
//}
//
//void PrintNumber(int Number)
//{
//    if (Number)
//    {
//        cout << "\nPass";
//    }
//    else
//    {
//        cout << "\nFail";
//    }
//}

int ReadMark()
{
    int Mark;

    cout << "Please enter your mark: \n";
    cin >> Mark;
    return Mark;
}

enPassOrFail CheckPassOrFail(int Mark)
{
    

    if (Mark >= 50)
        return enPassOrFail::Pass;
    else
        return enPassOrFail::Fail;
}

void PrintPassOrFail(int Mark)
{
    if (CheckPassOrFail(Mark) == enPassOrFail::Pass)
        cout << "\nYou Pass";
    else
    {
        cout << "\nYou Fail";
    }
}

int main()
{

    /*PrintNumber(CheckPassOrFail(ReadMark()));*/
    PrintPassOrFail(ReadMark());

    return 0;
}

