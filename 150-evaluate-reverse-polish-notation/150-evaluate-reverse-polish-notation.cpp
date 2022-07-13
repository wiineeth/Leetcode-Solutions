class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stk;
       for(auto i:tokens){
           if(i.size()>1||isdigit(i[0])){
               stk.push(stoi(i));
           }
           else{
               auto a= stk.top(); stk.pop();
               auto b= stk.top(); stk.pop();
               if(i=="+"){stk.push(b+a);}
               if(i=="-"){stk.push(b-a);}
               if(i=="*"){stk.push(b*a);}
               if(i=="/"){stk.push(b/a);}
           }
       }
        return stk.top();
    }
};