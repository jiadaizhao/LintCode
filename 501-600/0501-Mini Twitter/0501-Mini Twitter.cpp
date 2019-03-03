/**
 * Definition of Tweet:
 * class Tweet {
 * public:
 *     int id;
 *     int user_id;
 *     String text;
 *     static Tweet create(int user_id, string tweet_text) {
 *         // This will create a new tweet object,
 *         // and auto fill id
 *     }
 * }
 */
 
class MiniTwitter {
public:
    MiniTwitter() {
        // initialize your data structure here.

    }

    // @param user_id an integer
    // @param tweet a string
    // return a tweet
    Tweet postTweet(int user_id, string tweet_text) {
        //  Write your code here
        if (userMap.find(user_id) == userMap.end()) {
            userMap[user_id] = User(user_id);
        }
        
        Tweet tw = Tweet::create(user_id, tweet_text);
        userMap[user_id].post(tw);
        return tw;
    }

    // @param user_id an integer
    // return a list of 10 new feeds recently
    // and sort by timeline
    vector<Tweet> getNewsFeed(int user_id) {
        // Write your code here
        vector<Tweet> result;
        if (userMap.find(user_id) == userMap.end()) {
            return result;
        }
        
        unordered_set<int> users = userMap[user_id].followed;
        priority_queue<TweetNode*, vector<TweetNode*>, cmp> pq;
        for (int user : users) {
            TweetNode* head = userMap[user].head;
            if (head) {
                pq.push(head);
            }            
        }

        int count = 0;
        while (!pq.empty() && count < 10) {
            TweetNode* t = pq.top();
            pq.pop();
            result.push_back(t->tweet);
            ++count;
            if (t->next) {
                pq.push(t->next);
            }
        }
        
        return result;
    }
        
    // @param user_id an integer
    // return a list of 10 new posts recently
    // and sort by timeline
    vector<Tweet>  getTimeline(int user_id) {
        // Write your code here
        vector<Tweet> result;
        if (userMap.find(user_id) == userMap.end()) {
            return result;
        }
        
        TweetNode* head = userMap[user_id].head;
        int count = 0;
        while (head && count < 10) {
            result.push_back(head->tweet);
            head = head->next;
            ++count;
        }
        return result;
    }

    // @param from_user_id an integer
    // @param to_user_id an integer
    // from user_id follows to_user_id
    void follow(int from_user_id, int to_user_id) {
        // Write your code here
        if (userMap.find(from_user_id) == userMap.end()) {
            userMap[from_user_id] = User(from_user_id);
        }

        if (userMap.find(to_user_id) == userMap.end()) {
            userMap[to_user_id] = User(to_user_id);
        }

        userMap[from_user_id].follow(to_user_id);
    }

    // @param from_user_id an integer
    // @param to_user_id an integer
    // from user_id unfollows to_user_id
    void unfollow(int from_user_id, int to_user_id) {
        // Write your code here
        if (from_user_id == to_user_id ||
            userMap.find(from_user_id) == userMap.end() ||
            userMap.find(to_user_id) == userMap.end()) {
            return;
        }
        userMap[from_user_id].unfollow(to_user_id);
    }
    
private:
    static int timeStamp;
    class TweetNode {
    public:
        Tweet tweet;
        int time;
        TweetNode* next;
        TweetNode(Tweet tw) {
            tweet = tw;
            time = timeStamp++;
            next = nullptr;
        }
    };
     
    class User {
    public:
        int id;
        unordered_set<int> followed;
        TweetNode* head;
        User() {}
        User(int i) {
            id = i;
            follow(id);
            head = nullptr;
        }
    
        void follow(int id) {
            followed.insert(id);
        }
    
        void unfollow(int id) {
            followed.erase(id);
        }
    
        void post(Tweet tw) {
            TweetNode* t = new TweetNode(tw);
            t->next = head;
            head = t;
        }
        
        ~User() {
            while (head) {
                TweetNode* node = head;
                head = head->next;
                delete node;
            }
        }
    };

    unordered_map<int, User> userMap;
    struct cmp {
        bool operator() (TweetNode* t1, TweetNode* t2) {
            return t1->time < t2->time;
        }
    };
};

int MiniTwitter::timeStamp = 0;
