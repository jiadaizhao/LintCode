/**
 * Definition for a Record
 * class Record {
 * public:
 *   int id, score;
 *   Record(int id, int score) {
 *     this->id = id;
 *     this->score = score;
 *   }
 * };
 */
class Solution {
public:
    /**
     * @param results a list of <student_id, score>
     * @return find the average of 5 highest scores for each person
     * map<int, double> (student_id, average_score)
     */
    map<int, double> highFive(vector<Record>& results) {
        // Write your code here
        unordered_map<int, priority_queue<int, vector<int>, greater<int>>> table;
        for (Record r : results) {
            auto& pq = table[r.id];
            if (pq.size() < 5) {
                pq.push(r.score);
            }
            else if (pq.top() < r.score) {
                pq.pop();
                pq.push(r.score);
            }
        }
        
        map<int, double> result;
        for (auto t : table) {
            double sum = 0;
            int count = 0;
            auto& pq = t.second;
            while (!pq.empty()) {
                ++count;
                sum += pq.top();
                pq.pop();
            }
            
            result[t.first] = sum / count;
        }
        
        return result;
    }
};
