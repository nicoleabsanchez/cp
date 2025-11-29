class MyHashSet
{
public:
    vector<ListNode *> my_set;

public:
    MyHashSet()
    {
        my_set.resize(10000);

        for (int i = 0; i < 10000; i++)
        {
            my_set[i] = new ListNode(0);
        }
    }

    void add(int key)
    {
        int index = key % my_set.size();
        ListNode *curr = my_set[index]; // me da un ListNode*, direccion a un ListNode

        while (curr->next != nullptr)
        { // En la primera iteracion me voy al next del dummy
            if (curr->next->val == key)
            {
                // curr es la direccion a el dummy List node, con ->next obtengo el atributo next del dummy, con ->key, voy  a la direccion que contiene el atributo next del dummy y tomo su atributo key
                // si ya existe
                return;
            }
            curr = curr->next;
        }
        // itere sobre toda la lista y no encontre ningun nodo que tenga el key que quiero insertar
        curr->next = new ListNode(key);
    }

    void remove(int key)
    {
        int index = key % my_set.size();
        ListNode *curr = my_set[index];

        while (curr->next != nullptr)
        { // En la primera iteracion me voy al next del dummy
            if (curr->next->val == key)
            {
                curr->next = curr->next->next;
                return;
            }
            curr = curr->next;
        }
    }

    bool contains(int key)
    {
        int index = key % my_set.size();
        ListNode *curr = my_set[index];

        while (curr->next != nullptr)
        {
            if (curr->next->val == key)
            {
                return true;
            }
            curr = curr->next;
        }

        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */