class FriendshipService {
public:
    FriendshipService() {
        // initialize your data structure here.
    }
        
    // @param user_id an integer
    // return all followers and sort by user_id
    vector<int>  getFollowers(int user_id) {
        // Write your code here
        vector<int> result(followers[user_id].begin(), followers[user_id].end());
        return result;
    }

    // @param user_id an integer
    // return all followings and sort by user_id
    vector<int>  getFollowings(int user_id) {
        // Write your code here
        vector<int> result(followings[user_id].begin(), followings[user_id].end());
        return result;
    }

    // @param from_user_id an integer
    // @param to_user_id an integer
    // from user_id follows to_user_id
    void follow(int from_user_id, int to_user_id) {
        // Write your code here
        followers[from_user_id].insert(to_user_id);
        followings[to_user_id].insert(from_user_id);
    }

    // @param from_user_id an integer
    // @param to_user_id an integer
    // from user_id unfollows to_user_id
    void unfollow(int from_user_id, int to_user_id) {
        // Write your code here
        followers[from_user_id].erase(to_user_id);
        followings[to_user_id].erase(from_user_id);
    }
    
private:
    unordered_map<int, set<int>> followers;
    unordered_map<int, set<int>> followings;
};
