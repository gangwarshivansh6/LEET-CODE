class Solution {
public:
    string select_string(string emails){
        string ans;
        int i=0;
        int n=emails.length();
        for(;i<n;i++){
            if(emails[i]=='@'||emails[i]=='+') break;
            else if(emails[i]=='.') continue;
            else ans+=emails[i];
        }
        for(;i<n;i++){
            if(emails[i]=='@') break;
        }
        for(;i<n;i++){
            ans+=emails[i];
        }
        return ans;

    }
    int numUniqueEmails(vector<string>& emails) {
        int n = emails.size();
        set<string>ans;
        for(int i=0;i<n;i++){
            ans.insert(select_string(emails[i]));
        }
        return ans.size();

    }
};