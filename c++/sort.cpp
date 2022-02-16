#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>    
#include <iterator>     
using namespace std;


int sort() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int size;
    int number_entered;
    vector<int>* vect_oper=new vector<int>;
    
    cin>>size;
    for(int iter=0; iter<size;iter++)
    {   
        cin>>number_entered;
        vect_oper->push_back(number_entered);
    }

    sort(vect_oper->begin(),vect_oper->end());

    for(auto o:*vect_oper)
    cout<<o<<" ";
 
    free(vect_oper);    

}
