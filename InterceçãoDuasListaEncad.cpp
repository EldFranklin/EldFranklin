#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

class ListNode {
    public:

    int val;
    ListNode *next;
    
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {} 
};

 

ListNode* readList(){
    int n;
    cin >> n;
    ListNode * head;
    for(int i = 0; i < n; i++){
        ListNode * ptr;
        int x;
        cin >> x;
        if( i == 0){
            head = new ListNode(x);
            ptr = head;
        }else{
            ptr->next = new ListNode(x, nullptr);
            ptr = ptr->next;
        }
    }

    return head;

}


ListNode * intersectionList(ListNode * head1, ListNode * head2){
    
    vector<int> v , aux;
    
    
    ListNode * sherek;
 
    
    while ( head1 -> next != nullptr ){
        
        aux.push_back(head1->val);
        
        head1 = head1 -> next;
    }
    
    
    while(head2 != nullptr ){
        for(int i = 0; i < aux.size(); i++ ){
            if(aux[i] == head2-> val ){
                v.push_back(head2->val);
                
                break;
            }
        }
        
        head2 = head2 -> next;
    }
    
    for (int i = 0; i < v.size(); i++ ){
        
        ListNode * ptr;
         
         if( i == 0)
         {
            sherek = new ListNode(v[i]);
            
            ptr = sherek;
        } else{
            ptr->next = new ListNode(v[i], nullptr);
            ptr = ptr->next;
        }
    }
    
    return sherek;


}


void printList(ListNode * head){
    for(ListNode * ptr = head; ptr != nullptr; ptr = ptr->next)
        cout << ptr->val << endl;
}



int main(){
    
    ListNode * head1 = readList();
    ListNode * head2 = readList();
     
    ListNode * res = intersectionList(head1, head2);


    printList(res);

    return 0;    
