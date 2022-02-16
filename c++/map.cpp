#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
#include <sstream>
using namespace std;
void HandleRequest(map<string,int>* map_data,int request_type,string student_name,int student_mark=0)
{
    switch(request_type)
    {
        case 1:
        { 
            map<string,int>::iterator iter=map_data->find(student_name);
            if(iter!=map_data->end())
            { 
                // add the new mark plus the old mark
                (*map_data)[student_name]+=student_mark;
                break;
            }
            else
            {
                // add the name and mark
                map_data->insert(pair<string,int>(student_name,student_mark));
                break;
            }
        }    
        case 2:
            map_data->erase(student_name);
            break;
        case 3:
        {
            map<string,int>::iterator iter=map_data->find(student_name);
            if(iter!=map_data->end())
            { 
                cout<<(*map_data)[student_name]<<endl;
                break;
            }
            else
            {
                cout<<"0"<<endl;
            }
        }
    }
}
void HandleRequestCaller(vector<string>* arguments,map<string,int>* map_data)
{
    int request_type=stoi((*arguments)[0]);
    if(request_type==1)
    {
        HandleRequest(map_data,request_type,(*arguments)[1],stoi((*arguments)[2]));
    }
    else if (request_type==2 || request_type==3)
    {
        HandleRequest(map_data,request_type,(*arguments)[1]);
    }
}
void SeparateRequests(vector<string>* separated_requests,string command_request)
{
    string command;
    stringstream ss(command_request);
    while(ss>>command)
        separated_requests->push_back(command);


}

int main_map() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    string command_request;
    int number_of_requests;
    vector<string>* separated_requests=new vector<string>;
    map<string,int>* map_data= new map<string,int>;
    getline(cin,command_request);
    number_of_requests=stoi(command_request);
    

    for(int request=0;request<number_of_requests;request++ )
    {
        getline(cin,command_request);
        SeparateRequests(separated_requests,command_request);
        HandleRequestCaller(separated_requests,map_data);
        separated_requests->clear();
    }
    free(separated_requests);
    free(map_data);
    return 0;
}



