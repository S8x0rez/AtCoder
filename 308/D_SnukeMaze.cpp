#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct node_t{
    char c;
    pair<int, int> point;
    vector<int> nextNode;
};

int main(){
    int H, W;
    cin >> H >> W;
    vector<string> s(H);
    vector<node_t> tree;
    string inst = "snuke";

    for(int i = 0;i < H;i++){
        cin >> s[i];
    }

    node_t root;
    root.c = 's';
    root.word.first = 0;
    root.word.second = 0;
    tree.push_back(root);

    int itr = 0;
    while(itr < tree.size()){
        if(tree[itr].word.first == H - 1 && tree[itr].word.second == W - 1){
            cout << "Yes" << endl;
            return 0;
        }

        if(tree[itr].point.first != 0){
            if(s[tree[itr].point.first - 1][tree[itr].point.second] == inst[(tree[itr].c + 1) % 5]){
                node_t node;
                node.c = (tree[itr].c + 1) % 5;
                node.point.first = tree[itr].point.first - 1;
                node.point.second = tree[itr].point.second;
                tree.push_back(node);
            }
        }
        if(tree[itr].point.first != H -1){
            if(s[tree[itr].point.first + 1][tree[itr].point.second] == inst[(tree[itr].c + 1) % 5]){
                node_t node;
                node.c = (tree[itr].c + 1) % 5;
                node.point.first = tree[itr].point.first + 1;
                node.point.second = tree[itr].point.second;
                tree.push_back(node);
            }
        }
        if(tree[itr].point.second != 0){
            if(s[tree[itr].point.first][tree[itr].point.second] - 1 == inst[(tree[itr].c + 1) % 5]){
                node_t node;
                node.c = (tree[itr].c + 1) % 5;
                node.point.first = tree[itr].point.first;
                node.point.second = tree[itr].point.second - 1;
                tree.push_back(node);
            }
        }
        if(tree[itr].point.first != W -1){
            if(s[tree[itr].point.first][tree[itr].point.second + 1] == inst[(tree[itr].c + 1) % 5]){
                node_t node;
                node.c = (tree[itr].c + 1) % 5;
                node.point.first = tree[itr].point.first;
                node.point.second = tree[itr].point.second + 1;
                tree.push_back(node);
            }
        }

        itr++;
    }

    cout << "No" << endl;

    return 0;
}
