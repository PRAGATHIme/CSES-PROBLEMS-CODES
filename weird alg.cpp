// Online C++ compiler to run C++ program online
#include <iostream>
#include <queue>
using namespace std;
queue<int> alg(int num){
    queue<int> out;
    out.push(num);
    while(num != 1){
        if(num % 2 == 0){
            num = num / 2;
            out.push(num);
        }
        else{
            num = (num * 3) + 1;
            out.push(num);
        }
    }
    return out;
    
}
int main() {
    int num;
    cout << "Enter the number: ";
    cin >> num;
    queue<int> res = alg(num);
    while(!res.empty()){ 
        cout << res.front() << " ";
        res.pop();
    }
    cout << endl;
    return 0;
    
}








