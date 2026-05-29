class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded_string = "";
        for(auto& item : strs){
            encoded_string += std::to_string(item.size()) + "#" + item;
        }
        return encoded_string;
    }

    vector<string> decode(string s) {
        vector<string> decoded_strs;
        int i = 0;
        while(i < s.size()){
            int pos = s.find('#', i);
            int length = stoi(s.substr(i, pos - i));
            decoded_strs.push_back(s.substr(pos + 1, length));
            i = (pos + 1) + length;
        }
        return decoded_strs;
    }
};
