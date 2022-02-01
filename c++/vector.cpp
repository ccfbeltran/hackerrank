#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int vector_test() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int myints[] = {16,2,77,29};

    vector<int>v;

    for (int i =0; i<(sizeof(myints) / sizeof(int));i++)
    {
        v.push_back(myints[i]);


    }

    for (auto o:v)
        cout<<o<<endl;

    return 0;
}
