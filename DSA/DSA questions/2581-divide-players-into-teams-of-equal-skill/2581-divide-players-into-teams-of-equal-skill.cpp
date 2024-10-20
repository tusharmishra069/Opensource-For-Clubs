
class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
     // Sorting
    sort(skill.begin(), skill.end());

    int n = skill.size();
    long long sumChemistry = 0;
    
    //sum of largest and smallest 
    int targetSum = skill[0] + skill[n - 1];
    
    //check pairings
    for (int left = 0, right = n - 1; left < right; left++, right--) {
        // If the current pair doesn't sum to the targetSum, return -1
        if (skill[left] + skill[right] != targetSum) {
            return -1;
        }
        
        // product of skills
        sumChemistry += 1LL * skill[left] * skill[right];
    }
    
    return sumChemistry;
    }
};
