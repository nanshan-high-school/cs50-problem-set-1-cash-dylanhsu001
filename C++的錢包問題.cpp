#include <iostream>
using namespace std;
int main() {
    float money = 0;
    int count =0;
    cout << "多少錢";
    cin >> money;
    while(money > 0){
        if( money >= 1000){
            cout << "一張1000元" << "\n";
            money = money -1000;
        }else if( money >= 100 ){
            cout << "一張100元" << "\n";
            money = money - 100;
        }else if( money >= 10 ){
            cout << "一個10元" << "\n";
            money = money - 10;
        }else if( money >= 1 ){
            cout << "一個1元" << "\n";
            money = money - 1;
        }else if(money >= 0){
            cout << "不足1元，以1元表示" << "\n";
            money = 0;
        }
    count = count + 1;
    }
    cout  << "需要帶的錢數:" << count;
    

}
