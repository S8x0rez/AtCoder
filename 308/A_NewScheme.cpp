#include <iostream>

using namespace std;

int main(){
    int pre, cur;
    bool judge = true;
    cin >> pre;

    if(pre % 25 != 0 || pre < 100 || pre > 675) {
        judge = false;
        cout << "No" << endl;
        return 0;
    }

    for(int i = 1;i < 8;i++){
        cin >> cur;

        if (cur < pre){
            judge = false;
            break;
        }
        if(cur % 25 != 0 || cur < 100 || cur > 675) {
            judge = false;
            break;
        }
    }

    if(judge) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}