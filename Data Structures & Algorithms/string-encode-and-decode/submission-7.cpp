class Solution { 
public: 
 
    string encode(vector<string>& strs) { 
        string s = ""; 
 
        for(string st : strs) { 
            s += to_string(st.size()) + "#" + st; 
        } 
 
        return s; 
    } 
 
    vector<string> decode(string s) { 
        vector<string> v; 
        
        if(s == "") {
            return v;
        }

        bool gofor = false; 
        int slen = 0; 
        string temp = ""; 
 
        for(char c : s) { 
            
            if(!gofor && c != '#') { 
                temp += c; 
            } 
            
            else if(!gofor && c == '#') { 
                gofor = true; 
                slen = stoi(temp); 
                temp = ""; 

                if(slen == 0) {
                    v.push_back("");
                    gofor = false;
                }
            } 
            
            
            else if(gofor) { 
                temp += c; 
                slen--; 

                if(slen == 0) { 
                    v.push_back(temp); 
                    temp = ""; 
                    gofor = false; 
                }
            }
        } 
        
        return v; 
    } 
};