/*
 * @lc app=leetcode id=836 lang=cpp
 *
 * [836] Rectangle Overlap
 */

// @lc code=start
class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {

        int xmax=min(rec1[2],rec2[2]);
        int xmin=max(rec1[0],rec2[0]);
        int ymax=min(rec1[3],rec2[3]);
        int ymin=max(rec1[1],rec2[1]);
        int x=xmax-xmin;
        long y=ymax-ymin;
        long area=x*y;

        if(area>0 && x>0 && y>0)
            return true;

        return false;

        
    }
};
// @lc code=end

