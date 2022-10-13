#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



/*
 * Complete the 'funWithAnagrams' function below.
 *
 * The function is expected to return a STRING_ARRAY.
 * The function accepts STRING_ARRAY text as parameter.
 */

vector<string> funWithAnagrams(vector<string> text) {
    vector<string> text2;
    vector<string> output;
    
    for (int i =0; i<text.size(); i++) {
        
        string original = text[i];
        
        sort(text[i].begin(),text[i].end());
        
        
        if(find(text2.begin(), text2.end(), text[i]) != text2.end()) {
        
        }
        else {
            text2.push_back(text[i]);
            output.push_back(original);
        }
    }
    sort(output.begin(),output.end());
    return output;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string text_count_temp;
    getline(cin, text_count_temp);

    int text_count = stoi(ltrim(rtrim(text_count_temp)));

    vector<string> text(text_count);

    for (int i = 0; i < text_count; i++) {
        string text_item;
        getline(cin, text_item);

        text[i] = text_item;
    }

    vector<string> result = funWithAnagrams(text);

    for (size_t i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

