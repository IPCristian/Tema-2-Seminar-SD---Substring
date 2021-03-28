class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {

    int lungime_cuv = words[0].size(), nr_cuv = words.size(), lungime_s = s.size();

    vector<int> solutie;
    vector<string> verificare;

    sort(words.begin(),words.end());


    for (int i = 0; i < lungime_s - lungime_cuv*nr_cuv + 1; i++)
    {

        verificare.clear();

        for (int j = 0; j < nr_cuv; j++)
        {
            verificare.push_back(s.substr(i+j*lungime_cuv,lungime_cuv));
        }

        sort(verificare.begin(),verificare.end());

        if (verificare == words)
            solutie.push_back(i);
    }

    return solutie;

    }
};
