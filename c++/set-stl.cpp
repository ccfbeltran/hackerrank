#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

void operation_handler(set<int>*set_var,int operation_type,int arguemnt_to_use)
{
    switch(operation_type)
    {
        case 1:
            set_var->insert(arguemnt_to_use);
            break;
        case 2:
            set_var->erase(arguemnt_to_use);
            break;
        case 3:
            {  
                set<int>::iterator itr= set_var->find(arguemnt_to_use);
                if(itr==set_var->end())
                { 
                    cout<<"No"<<endl;
                }
                else
                {
                    cout<<"Yes"<<endl;
                }
            } break;
        default:
            cout<<"no correct input";
        break;

    }

}

int set_stl() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int size_of_requests;
    int request_number;
    int request_argument;
    set<int>* set_to_use=new set<int>;

    cin>> size_of_requests;

    for(int number_of_request=0; number_of_request<size_of_requests;number_of_request++)
    {
        cin>> request_number;
        cin>> request_argument;
        operation_handler(set_to_use,request_number,request_argument);
    }
    free(set_to_use);
    return 0;
}



