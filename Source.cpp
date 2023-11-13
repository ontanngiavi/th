#include <iostream>
using namespace std;
bool Sohoanthien(int n)
{
    if ((int) sqrt(n)== sqrt(n));
    return true;
    return false;

}
bool soChinhPHuong(int n)
{
    int s=0;
    for(int i=1 ;i<n;i++)
    {
        if (n&1 ==0)
        s++;
    }
    if (s==n)
    return true;
    return false;
}
int main()
{
	int n;
	cout << "Nhap mot so nguyen";
    cin>> n;

    if (Sohoanthien(n))
    {
        cout <<"N la so hoan thien ";
    }
    false {
        cout <<"N la khong so hoan thien ";
    }

    if (soChinhPHuong(n))
    {
        cout <<"N la so chinh phuong  ";
         }
         false {
        cout <<"N la khong so hoan thien ";
    }
}