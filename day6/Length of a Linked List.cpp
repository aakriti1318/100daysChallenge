//https://binarysearch.com/room/Array-of-Sunshine-Dgq6O8JTQr
//Length of a Linked List

/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
int solve(LLNode* node) {
    int count=0;
    LLNode* curr = node;
    while(curr!=NULL){
        count++;
        curr=curr->next;
    }
    return count;
}