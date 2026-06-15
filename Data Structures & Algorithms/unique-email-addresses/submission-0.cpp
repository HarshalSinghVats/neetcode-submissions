class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> counter;

        for (int i = 0; i < emails.size(); i++) {
            string normalized;
            bool ignore = false;

            for (int j = 0; j < emails[i].size(); j++) {
                char c = emails[i][j];

                if (c == '@') {
                    normalized += emails[i].substr(j);
                    break;
                }

                if (ignore) continue;

                if (c == '+') {
                    ignore = true;
                    continue;
                }

                if (c == '.') continue;

                normalized += c;
            }

            counter.insert(normalized);
        }

        return counter.size();
    }
};
