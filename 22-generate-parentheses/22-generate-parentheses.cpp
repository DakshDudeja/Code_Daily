
  class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> output_arr;
        backtracking(output_arr, "", 0, 0, n);
        return output_arr;
    }
public:
    void backtracking(vector<string> &output_arr , string current_string, int open, int close, int &max){
        if(current_string.length()==max*2){
            output_arr.push_back(current_string);
            return;
        }
    
        if(open < max){
            backtracking(output_arr, current_string + "(", open + 1, close, max);
        }
        if(close < open){
            backtracking(output_arr, current_string + ")", open, close + 1, max);
        }
    }
};
