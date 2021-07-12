/*
                     Question

Sum of Two Numbers - Online Version

Implement a data structure with the following methods:

add(int val) adds the value val to the data structure
find(int val) returns whether there are two elements whose sum equals to val


*/

//                  Answer
class TwoSum {
    public:
    vector<int> v;
    unordered_map<int,int> mp;
    int count=0;
    TwoSum() {

    }

    void add(int val) {
        mp[val]++;
        v.push_back(val);
        count++;
    }

    bool find(int val) {
        int i,j;
        for(i=0;i<=count-1;i++)
        {
            // for(j=i+1;j<=count-1;j++)
            // {
            //     if((v[i]+v[j])==val) return true;
            // }
            if(mp[(val-v[i])] )
            {
                if((val-v[i]) == v[i])
                {
                    if(mp[v[i]] > 1) return true;
                    // else return false;
                }
                else
                {
                    return true;
                }
            }
        }
        return false;
    
    }
};
