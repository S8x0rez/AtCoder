#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<pair<int,float>> person(n);

    for(int i = 0;i < n;i++){
        int a, b;
        cin >> a >> b;
        vector[i].first = a/(a+b);
        vector[i].second = i;
    }

    sort(person.rbegin(), person.rend());

    for(int i = 0;i < n;i++){
        cout << person[i].second << " ";
    }
    cout << endl;

    return 0;
}