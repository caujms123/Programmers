#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> answers) {
    int a = 0,b = 0,c = 0;
    vector<int> aa = {1, 2, 3, 4, 5};
     vector<int> ab = {2, 1, 2, 3, 2, 4, 2, 5};
     vector<int> ac = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
    for(int i=0;i<answers.size();i++){ //일치하면 점수 증가
        if(answers[i] == aa[i%aa.size()]) a++;
        if(answers[i] == ab[i%ab.size()]) b++;
        if(answers[i] == ac[i%ac.size()]) c++;
    }
    vector<int> answer;
    if(a >= b && a >= c)
        answer.push_back(1);
    if(b >= a && b >= c)
        answer.push_back(2);
    if(c >= a && c >= b)
        answer.push_back(3);
        
    return answer;
}
