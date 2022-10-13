#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);


/*
 * Complete the 'minimizeBias' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY ratings as parameter.
 */

int minimizeBias(vector<int> ratings) {
    
    int total_bias = 0;
    sort(ratings.begin(), ratings.end());
    
    for (int i = 0; i<ratings.size(); i++) {
        
        if(i%2==0){
            total_bias += abs(ratings[i+1] - ratings[i]);
        }
    }
    return total_bias;
}
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string ratings_count_temp;
    getline(cin, ratings_count_temp);

    int ratings_count = stoi(ltrim(rtrim(ratings_count_temp)));

    vector<int> ratings(ratings_count);

    for (int i = 0; i < ratings_count; i++) {
        string ratings_item_temp;
        getline(cin, ratings_item_temp);

        int ratings_item = stoi(ltrim(rtrim(ratings_item_temp)));

        ratings[i] = ratings_item;
    }

    int result = minimizeBias(ratings);

    fout << result << "\n";

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

