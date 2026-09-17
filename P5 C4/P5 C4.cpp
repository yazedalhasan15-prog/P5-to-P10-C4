#include <iostream>

using namespace std;

// MayWay
struct stInfo
{
    int Age;
    bool HasDriveLicense;
    bool HasRecomendtion;
};

stInfo RaedInfo()
{
    stInfo Info;
    cout << "Please enter your age: " << endl;
    cin >> Info.Age;
    cout << "Do you have a drive license: " << endl;
    cin >> Info.HasDriveLicense;
    cout << "Do you have Have Recomendtion: " << endl;
    cin >> Info.HasRecomendtion;
    return Info;
}

bool IsAccept(stInfo Info)
{
    return (Info.HasRecomendtion || Info.Age > 21 && Info.HasDriveLicense);
}

void PrintInfo(stInfo Info)
{
    if (IsAccept(Info))
    {
        cout << "\nHierd";
    }
    else
    {
        cout << "\nRejected";
    }
}

//struct stInfo
//{
//    int Age;
//    bool DriveLicense;
//    bool HasRecomendtion;
//};

//stInfo ReadInfo()
//{
//    stInfo Info;

//    cout << "Please enter Your Age: \n";
//    cin >> Info.Age;

//    cout << "Do you have Drive license? \n";
//    cin >> Info.DriveLicense;

//    cout << "Do you have Have Recomendtion: " << endl;
//    cin >> Info.HasRecomendtion;

//    return Info;    
//}

//bool CheckInfo(stInfo Info)
//{
//    if (Info.HasRecomendtion)
//    {
//        return true;
//    }
//    else
//    {
//        return ((Info.Age >= 18 && Info.Age <= 45) && Info.DriveLicense);
//    }
//}

//void PrintInfo(stInfo Info)
//{
//    if (CheckInfo(Info))
//    {
//        cout << "\nHierd " << endl;
//    }
//    else
//    {
//        cout << "Rejected" << endl;
//    }
//}

int main()
{
    PrintInfo(RaedInfo());
    //PrintInfo(ReadInfo());

    return 0;
}