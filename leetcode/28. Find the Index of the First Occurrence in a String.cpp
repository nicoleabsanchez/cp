class Solution {
public:
    int strStr(string haystack, string needle) {
        int stop = haystack.size() - needle.size();
        bool found = false;

        for (int i=0; i <= stop; i++) {
            if (haystack[i] == needle[0]) {
                int haystack_p = i, needle_p = 0;
                while (haystack[haystack_p] == needle[needle_p] && needle_p < needle.size()){
                    haystack_p++; needle_p++;
                }
                
                if (needle_p == needle.size()) {
                    return i;
                } 
            }
            else continue;
        }

        return -1;
    }
};