/*
Problem Name: 3093. Longest Common Suffix Queries  
Difficulty: Hard
Date: 28/May/2026
*/
class Solution {
public:

    struct Node {
        int child[26];
        int idx;

        Node() {
            memset(child, -1, sizeof(child));
            idx = -1;
        }
    };

    vector<Node> trie;

    Solution() {
        trie.push_back(Node()); // root
    }

    bool better(int i, int j, vector<string>& words) {
        if (j == -1) return true;

        if (words[i].size() < words[j].size())
            return true;

        if (words[i].size() == words[j].size())
            return i < j;

        return false;
    }

    void insert(string &word, int index,
                vector<string>& words) {

        int node = 0;

        if (better(index, trie[node].idx, words))
            trie[node].idx = index;

        for (int i = word.size() - 1; i >= 0; i--) {

            int c = word[i] - 'a';

            if (trie[node].child[c] == -1) {
                trie[node].child[c] = trie.size();
                trie.push_back(Node());
            }

            node = trie[node].child[c];

            if (better(index, trie[node].idx, words))
                trie[node].idx = index;
        }
    }

    int query(string &word) {

        int node = 0;

        for (int i = word.size() - 1; i >= 0; i--) {

            int c = word[i] - 'a';

            if (trie[node].child[c] == -1)
                break;

            node = trie[node].child[c];
        }

        return trie[node].idx;
    }

    vector<int> stringIndices(vector<string>& wordsContainer,
                              vector<string>& wordsQuery) {

        for (int i = 0; i < wordsContainer.size(); i++) {
            insert(wordsContainer[i], i, wordsContainer);
        }

        vector<int> ans;

        for (auto &q : wordsQuery) {
            ans.push_back(query(q));
        }

        return ans;
    }
};
