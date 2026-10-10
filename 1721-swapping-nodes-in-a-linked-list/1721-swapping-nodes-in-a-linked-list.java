/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode swapNodes(ListNode head, int k) {
        if(head == null || head.next == null) return head;

        ListNode temp = head;
        int size = 0 ;
        while(temp!= null){
            size++;
            temp = temp.next;
        }
        
        ListNode first = head;
        ListNode second = head;

        for(int i = 1 ; i < k ; i++){
            first = first.next;
        }
    
        for(int i = 1 ; i < size - k +1  ; i++){
            second = second.next;
        }

        int data = first.val;
        first.val = second.val;
        second.val = data;

        return head;

        
    }
}