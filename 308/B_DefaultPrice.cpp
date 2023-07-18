#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    int N, M;
    cin >> N >> M;
    string d;
    int price = 0;

    vector<string> c(N);
    vector<string> d(M);
    vector<int> p(M + 1);

    for(int i = 0;i < N;i++){
        cin >> c[i];
    }
    for(int i = 0;i < M;i++){
        cin >> d[i];
    }
    for(int i = 0;i < M + 1;i++){
        cin >> p[i];
    }

    for(int i = 0;i < M;i++){
        if(find(c.begin(), c.end(), d[i]) == c.end()) price += p[0];
        else price += p[i+1];
    }

    cout << price << endl;

    return 0;
}