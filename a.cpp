#include <iostream>
using namespace std;
bool KTsochinhchuong(int num){
    int sqrtNum=sqrt(num);
     return sqrtNum * sqrtNum == num;
}
bool KTsohoanthien(int number) {
    int sum = 0;
    for (int i = 1; i < number; i++) {
        if (number % i == 0) {
            sum += i; 
        }
    }
    return sum == number; 
}

int main(){
    int a;
    cout << "nhap so 1 so nguyen";
    cin >> a;
    return 0;
    int number;
    cout << "nhap 1 so: ";
    cin >> number;
    if (KTsochinhchuong(number)) {
        cout << number << " la so chinh phuong";
    } else {
        cout << number << "khong phai so chinh phuong";
    }

    int number;
    cout << "nhap 1 so: ";
    cin >> number;

    if (KTsohoanthien(number)) {
        cout << number << " la 1 so hoan thien" << endl;
    } else {
        cout << number << " khong phai so hoan thien" << endl;
    }

    return 0;
}