class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stk;
       for(auto i:tokens){
           if(i.size()>1||isdigit(i[0])){
               stk.push(stoi(i));
           }
           else{
               auto b= stk.top(); stk.pop();
               auto a= stk.top(); stk.pop();
               if(i=="+"){stk.push(a+b);}
               if(i=="-"){stk.push(a-b);}
               if(i=="*"){stk.push(a*b);}
               if(i=="/"){stk.push(a/b);}
           }
       }
        return stk.top();
    }
};