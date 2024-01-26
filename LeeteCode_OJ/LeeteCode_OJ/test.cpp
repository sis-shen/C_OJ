#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <unordered_map>

using namespace std;


class Solution1 {
public:
    bool check(int* hash1, int* hash2)
    {
        for (int i = 0; i < 26; i++)
        {
            if (hash1[i] != hash2[i])
            {
                return false;
            }
        }

        return true;
    }

    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        int hash1[26] = { 0 };//创建参考哈希表
        for (auto e : p)
        {
            hash1[e - 'a']++;
        }

        int hash2[26] = { 0 };
        int left = 0, right = 0;
        while (right < s.size() and right < p.size())//初始化
        {
            hash2[s[right++] - 'a']++;
        }



        while (right < s.size())
        {
            if (check(hash1, hash2))
            {
                ans.push_back(left);
            }

            hash2[s[right++] - 'a']++;
            hash2[s[left++] - 'a']--;
        }
        return ans;
    }
};

class Solution2 {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        int hash1[26] = { 0 };//创建参考哈希表
        for (auto e : p)
        {
            hash1[e - 'a']++;
        }

        int hash2[26] = { 0 };
        int left = 0, right = 0;
        int cnt = 0;
        while (right < s.size() and right < p.size())
        {
            int ch = s[right++] - 'a';
            if (hash2[ch] < hash1[ch])
            {
                cnt++;
            }
            hash2[ch]++;
        }
        right--;

        while (right < s.size())
        {
            if (cnt == p.size())
            {
                ans.push_back(left);
            }
            right++;
            if (right >= s.size())
            {
                break;
            }
            int ch = s[right] - 'a';
            if (hash2[ch] < hash1[ch])
            {
                cnt++;
            }
            hash2[ch]++;
            if (hash2[s[left] - 'a'] <= hash1[s[left] - 'a'])
            {
                cnt--;
            }
            hash2[s[left] - 'a']--;
            left++;
            
        }
        return ans;
    }
};

class Solution4 {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ret;
        int hash1[128] = { 0 };
        for (auto e : p) hash1[e]++;

        int hash2[128] = { 0 };
        int sz = p.size();

        for (int left = 0, right = 0, count = 0; right < s.size(); right++)
        {
            char in = s[right];
            if (++hash2[in] <= hash1[in])count++;


            if (right - left + 1 > sz)
            {
                char out = s[left];
                if (hash2[out]-- <= hash1[out])count--;
                left++;
            }

            if (count == sz)
            {
                ret.push_back(left);
            }
        }

        return ret;
    }
};

class Solution5 {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int> ret;
        unordered_map<string, int> hash1;//保存words里所有单词的频次
        for (auto s : words)hash1[s]++;

        int len = words[0].size(), num_words = words.size();
        for (int i = 0; i < len; ++i)
        {
            unordered_map<string, int> hash2;
            int cnt = 0;
            for (int left = i, right = i; right+len <= s.size(); right += len)
            {
                string in = s.substr(right, len);
                hash2[in]++;
                if (hash1.count(in) and hash2[in] <= hash1[in]) cnt++;  

                if (right - left + 1 > len * num_words)
                {
                    string out = s.substr(left, len);
                    if (hash1.count(out) and hash2[out] <= hash1[out])cnt--;
                    hash2[out]--;
                    left += len;
                }
                //更新结果
                if (cnt == num_words)
                {
                    ret.push_back(left);
                }
            }
        }
        return ret;
    }
};

class Solution {
public:
    string minWindow(string s, string t) {
        string ret(s);
        ret.push_back('$');
        int hash1[128] = { 0 };
        int hash2[128] = { 0 };
        for (auto e : t) hash1[e]++;
        int begin, minlen = INT_MAX;
        for (int left = 0, right = 0, cnt = 0;right<s.size();right++)
        {
            char in = s[right];
            hash2[in]++;
            if (hash2[in] <= hash1[in]) cnt++;
            
            while (cnt == t.size())
            {
                if (right - left+1 < minlen)
                {
                    begin = left;
                    minlen = right - left + 1;
                }

                char out = s[left];
                if (hash2[out] <= hash1[out]) cnt--;
                hash2[out]--;
                left++;
            }
        }

        if (minlen == INT_MAX)
        {
            ret = "";
        }
        else
        {
            ret = s.substr(begin, minlen);
        }

        return ret;
    }
};

int main()
{
    Solution sl;
    
    string ans = sl.minWindow("abc", "b");

    cout << ans;

    return 0;
}