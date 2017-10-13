class Solution {
public:
    char *m_pData;
    Solution() {
        this->m_pData = NULL;
    }
    Solution(char *pData) {
        if (pData)
        {
            m_pData = new char[strlen(pData) + 1];
            strcpy(m_pData, pData);
        }
        else
        {
            m_pData = NULL;
        }
    }

    // Implement an assignment operator
    Solution operator=(const Solution &object) {
        // write your code here
        if (this == &object)
        {
            return *this;
        }
        
        if (m_pData)
        {
            delete[] m_pData;
        }
        
        if (object.m_pData)
        {
            m_pData = new char[strlen(object.m_pData) + 1];
            strcpy(m_pData, object.m_pData);
        }
        else
        {
            m_pData = NULL;
        }
        return *this;
    }
};
