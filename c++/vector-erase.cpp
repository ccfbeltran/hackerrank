#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int vector_erase() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int size_vector=0;
    int value_to_enter;


    int first_operation;
    int second_operator_beggin;
    int second_operator_last;

    vector<int>*vec_operation=new vector<int>;
    cin>> size_vector;

    for(int iter=0;iter<size_vector;iter++)
    {  
        cin>>value_to_enter;
        vec_operation->push_back(value_to_enter);
    }
    cin>> first_operation;
    cin>> second_operator_beggin;
    cin>> second_operator_last;

    vec_operation->erase(vec_operation->begin()+(first_operation-1));
    vec_operation->erase(vec_operation->begin()+(second_operator_beggin-1),vec_operation->begin()+(second_operator_last-1));

    cout<<vec_operation->size()<<endl;
    
    for(auto o:*vec_operation)
        cout<<o<<" ";
        

    free(vec_operation);

    return 0;
}
