#include<bits/stdc++.h>
using namespace std;

struct Item {
    int no, profit, weight;

    Item(int n,int p, int w) {
        no = n;
        profit = p;
        weight = w;
    }
};

bool cmp(Item a, Item b) {
    double r1 = (double)a.profit / (double)b.profit;
    double r2 = (double)b.profit / (double)b.weight;
	return r1 > r2;
}







int main()
{
    int w;w
}