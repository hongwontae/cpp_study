#include <iostream>

int main()
{
    using namespace std;

    int a[] = {1,2,3,4};

    int x = 0;

    cout << a[0] << "\n";

    cout << a << std::endl;
    cout << &a[1] << std::endl;
    cout << &a[2] << std::endl;

    cout << "나이를 입력해주세요" << endl;
    cin >> x;
    cout << "나이는" << x << "입니다.\n";


    
}

