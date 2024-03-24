class Solution{
public:
void fun(stack<int>&st,int x){
    if(st.empty())
    {
        st.push(x);
        
            return;
        
        
    }
    int a=st.top();
    st.pop();
    fun(st,x);
    st.push(a);
}
    stack<int> insertAtBottom(stack<int> st,int x){
        fun(st,x);
        return st;
    }