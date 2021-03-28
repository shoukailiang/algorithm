class Solution {
    public:
        string addBinary(string m, string n) {
            string m1;
            reverse(m.begin(),m.end());
            reverse(n.begin(),n.end());
            int count = 0;// 进位
            int m_len = m.size();
            int n_len = n.size();
            int max_size = max(m_len,n_len);
            int now;
            int i;
            for ( i = 0; i < max_size; ++i) {
                if(i<(m_len)&&(i<n_len)){
                    now = m[i]-'0'+n[i]-'0'+count;
                } else if(i<m_len){
                    now = m[i]-'0'+count;
                    cout<<now<<endl;
                } else if(i<n_len){
                    now = n[i]-'0'+count;
                    cout<<now<<endl;
                }
                m1.push_back((now)%2+'0');
                count = (now)/2;
            }
            if(count==1){
                m1.push_back('1');
            }
            reverse(m1.begin(),m1.end());
            return m1;
        }
    };