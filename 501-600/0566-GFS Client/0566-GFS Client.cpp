/* Definition of BaseGFSClient
 * class BaseGFSClient {
 * private: map<string, string> chunk_list;
 * public:
 *     string readChunk(string& filename, int chunkIndex) {
 *         // Read a chunk from GFS
 *     }
 *     void writeChunk(string& filename, int chunkIndex,
 *                     string& content) {
 *         // Write a chunk to GFS     
 *     }
 *  };
 */
class GFSClient : public BaseGFSClient {
public:
    GFSClient(int chunkSize) {
        // initialize your data structure here
        cs = chunkSize;
    }

    // @param filename a file name
    // @return conetent of the file given from GFS
    string read(string& filename) {
        // Write your code here
        if (chunkList.find(filename) == chunkList.end()) {
            return "";
        }
        
        int chunkSize = chunkList[filename];
        string result;
        for (int i = 0; i < chunkSize; ++i) {
            result += readChunk(filename, i);
        }
        
        return result;
    }

    // @param filename a file name
    // @param content a string
    // @return void
    void write(string& filename, string& content) {
        // Write your code here
        int i = 0;
        while (i < content.size()) {
            string s = content.substr(i, cs);
            writeChunk(filename, i / cs, s);
            i += cs;
        }
        chunkList[filename] = i / cs;
    }

private:
    int cs;
    unordered_map<string, int> chunkList;
};
