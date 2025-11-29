class LNode
{
public:
    int value;
    int key;
    LNode *next;

public:
    LNode(int key, int value)
    {
        this->key = key;
        this->value = value;
        this->next = nullptr;
    }
};

class MyHashMap
{
public:
    vector<LNode *> my_hm;

public:
    MyHashMap()
    {
        my_hm.resize(1000);

        for (int i = 0; i < 1000; i++)
        {
            my_hm[i] = new LNode(0, 0);
        }
    }

    void put(int key, int value)
    {
        int index = key % my_hm.size();
        LNode *curr = my_hm[index];

        while (curr->next != nullptr)
        {
            if (curr->next->key == key)
            {
                curr->next->value = value;
                return;
            }
            curr = curr->next;
        }

        curr->next = new LNode(key, value);
    }

    int get(int key)
    {
        int index = key % my_hm.size();
        LNode *curr = my_hm[index];

        while (curr->next != nullptr)
        {
            if (curr->next->key == key)
            {
                return curr->next->value;
            }
            curr = curr->next;
        }

        return -1;
    }

    void remove(int key)
    {
        int index = key % my_hm.size();
        LNode *curr = my_hm[index];

        while (curr->next != nullptr)
        {
            if (curr->next->key == key)
            {
                curr->next = curr->next->next;
                return;
            }
            curr = curr->next;
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */