#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>    
#include <iterator>     
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int size;
    string numbers;
    
    cin>>size;
    //on ingnore pour la prochaine ligne d'une taille de 10*1e9 jusqu'au trouver la prochaine ligne
    cin.ignore(10*1e9,'\n');
    getline(cin, numbers);

    stringstream numbers_stream(numbers);
    
    auto start=istream_iterator<int>{numbers_stream};
    auto end=istream_iterator<int>{};

    vector<int> numbers_vect(start,end);
        
    sort(numbers_vect.begin(),numbers_vect.end()); 

    for(auto itr:numbers_vect)
        cout<<itr<<" ";
        

}
