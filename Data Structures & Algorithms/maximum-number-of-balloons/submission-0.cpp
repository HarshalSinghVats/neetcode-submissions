class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int> check={{'b',0},{'a',0},{'l',0},{'o',0},{'n',0}};

        for(char ch:text){
            if(check.count(ch)){
                check[ch]++;
            }
        }

        check['l']=check['l']/2;
        check['o']=check['o']/2;

        return min({check['b'],check['a'],check['l'],check['o'],check['n']});

    }
};