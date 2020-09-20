#include <iostream>
using namespace std;

  int main() {
  int num;

  cout <<"請輸入要檢查的數字：\n";
  cin >> num;

  if (num==0){
      cout <<num <<"不是3的倍數\n";

  } else if (num % 3 ==0){
    cout << num <<"為3的倍數\n";
      
    } else {
      cout << num <<"不為3的倍數\n";}
}
