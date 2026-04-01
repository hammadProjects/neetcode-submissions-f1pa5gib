class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1 == s2) return true;
        int n = s1.size();
        int n2 = s2.size();
        unordered_map<char, int> str1;
        unordered_map<char, int> str2;

        for(int i = 0; i < n; i++) {
            str1[s1[i]]++;
            str2[s2[i]]++;
        }

        int left = 0;
        for(int right = n; right < n2; right++) {
            if(str1 == str2) return true;
            str2[s2[left]]--;
            if(str2[s2[left]] == 0) str2.erase(s2[left]);
            str2[s2[right]]++;

            left++;
        }

        return str1 == str2;
    }
};