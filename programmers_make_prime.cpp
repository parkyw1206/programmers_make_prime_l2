/************************************************************
 *  name : Youngwoo Park
 *  date : 09-30-2020
 *  level: l2
 *  problem source: programmers
 *  lang: C++
 *  skill: prime number
 * *********************************************************/
#include <vector>
#include <iostream>
using namespace std;
bool isprime(int num){
    for(int i = 2 ; i < num ; i++){
        if(num % i == 0){
            return false;            
        }
    }
    return true;
}
int solution(vector<int> nums) {
    int answer = 0;

    for(int i = 0 ; i < nums.size() -2 ;i++){
        for(int j = i+1 ; j < nums.size() -1 ; j++){
            for(int k = j + 1; k < nums.size() ; k++){
                if(isprime(nums[i] + nums[j] + nums[k])) {
                    answer++;
                }
            }
        }
    }
    return answer;
}