#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>

#include <sstream>    
#include <iterator>  
using namespace std;

class Student
{
public:

void input()
{

    for (int i = 0; i < 5; i++) 
    {
        cin >> this->scores[i];
    }
 
}

int calculateTotalScore()
{
    int sum_tot=0;
    for(int i=0;i<5;i++)
    {
        sum_tot+=this->scores[i];
    }
    return sum_tot;

}

private:

int *scores= new int[5];


};


// Write your Student class here

int classes_and_objects() {
    int n; // number of students
    cin >> n;
    cin.ignore(256, '\n');
    Student *s = new Student[n]; // an array of n students
    
    for(int i = 0; i < n; i++){
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0; 
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }

    // print result
    cout << count;
    
    return 0;

}