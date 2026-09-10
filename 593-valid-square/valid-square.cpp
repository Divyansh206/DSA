class Solution {
public:
    int dit(vector<int> &a,vector<int>& b){
        int x =a[0]-b[0];
        int y=a[1]-b[1];
        return x*x +y*y;
    }
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        vector<int> d;
        d.push_back(dit(p1,p2));
        d.push_back(dit(p1,p3));
        d.push_back(dit(p1,p4));
        d.push_back(dit(p2,p3));
        d.push_back(dit(p2,p4));
        d.push_back(dit(p3,p4));
        sort(d.begin(), d.end());

        return d[0]>0 && d[0]==d[1] && d[1]==d[2] && d[2]==d[3] && d[4]==d[5] && d[4]==2*d[0];

    }
};