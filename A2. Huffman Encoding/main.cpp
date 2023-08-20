#include <bits/stdc++.h>
using namespace std;
struct node
{
    int freq;
    string symbol;
    node *left = NULL;
    node *right = NULL;
    node(string s, int f)
    {
        symbol = s;
        freq = f;
    }
    void displayHuffmanCode(string huff)
    {
        if (left != NULL)
            left->displayHuffmanCode(huff + '0');
        if (right != NULL)
            right->displayHuffmanCode(huff + '1');
        if (left == NULL && right == NULL)
            cout << symbol << " ==> " << huff << endl;
        return;
    }
};
bool cmp(node *a, node *b) { return (a->freq) < (b->freq); }
void display(vector<node *> v)
{
    for (auto i : v)
    {
        cout << i->symbol << "-" << i->freq << "\t";
    }
    cout << endl;
}
int main()
{
    vector<pair<string, int>> ch_freq = {{"a", 5}, {"b", 9}, {"c", 12}, {"d", 13}, {"e", 16}, {"f", 45}};
    vector<node *> nodes;
    for (auto i : ch_freq)
        nodes.push_back(new node(i.first, i.second));
    while (nodes.size() > 1)
    {
        sort(nodes.begin(), nodes.end(), cmp);
        // display(nodes);
        node *left = nodes[0];
        node *right = nodes[1];
        node *newNode = new node((left->symbol + right->symbol), (left->freq + right->freq));
        newNode->left = left;
        newNode->right = right;
        nodes.erase(nodes.begin(), nodes.begin() + 2);
        nodes.push_back(newNode);
    }
    nodes[0]->displayHuffmanCode("");
}

/*
    f ==> 0
    c ==> 100
    d ==> 101
    a ==> 1100
    b ==> 1101
    e ==> 111
*/