class MyLinkedList {
    ListNode* head;
public:
    MyLinkedList() {
        head=nullptr;
        
    }
    
    int get(int index) {
        ListNode* temp = head;
        
        for (int i = 0; i < index; i++) {
            if (temp == nullptr) {
                return -1;
            }
            temp = temp->next;
        }
        if (temp == nullptr) {
            return -1;
        }
        return temp->val;
        
    }
    
    void addAtHead(int val) {
        ListNode* newNode = new ListNode(val);
        newNode->next = head;
        head = newNode;
    }
    
    void addAtTail(int val) {
        ListNode* newNode = new ListNode(val);
        if (head == nullptr) {
            head = newNode;
            return;
        }
        ListNode* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
        
    }
    
    void addAtIndex(int index, int val) {
        if (index == 0) {
            addAtHead(val);
            return;
        }
        ListNode* temp = head;
        for (int i = 0; i < index - 1; i++) {
            if (temp == nullptr) {
                return;
            }
            temp = temp->next;
        }
        if (temp == nullptr) {
            return;
        }
        ListNode* newNode = new ListNode(val);
        newNode->next = temp->next;
        temp->next = newNode;
    }
    
    void deleteAtIndex(int index) {
        if (head == nullptr) {
            return;
        }
        if (index == 0) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        ListNode* temp = head;

        for (int i = 0; i < index - 1; i++) {
            if (temp == nullptr) {
                return;
            }
            temp = temp->next;
        }
        if (temp == nullptr || temp->next == nullptr) {
            return;
        }
        ListNode* nodeToDelete = temp->next;
        temp->next = nodeToDelete->next;
        delete nodeToDelete;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */