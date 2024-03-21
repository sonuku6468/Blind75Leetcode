class Solution{
    public:
    //Function to store the zig zag order traversal of tree in a list.
    vector <int> zigZagTraversal(Node* root)
    {
    	// Code here
    	  vector<vector<int>>ans;
        queue<Node*> q;
        int flag=0;
        int i;
        q.push(root);
        while(!q.empty()) 
        {
            vector<int> abc;
            int size=q.size();
            for(i=0;i<size;i++)
            {
                Node* temp = q.front();
                
                abc.push_back(temp->data);
                q.pop();
                
                if(temp->left)
                q.push(temp->left);
                if(temp->right)
                q.push(temp->right);
            }
            if(flag==0)
                {
                    ans.push_back(abc);
                }
                else
                {
                reverse(abc.begin(), abc.end());
                ans.push_back(abc);
                }
                flag=!flag;
        }
        int s=ans.size();
        vector<int>fans;
        for(i=0;i<s;i++)
        {
           fans.insert(fans.end(), ans[i].begin(), ans[i].end());
        }
        
        return fans;
    }
};