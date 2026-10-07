/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    public ListNode getIntersectionNode(ListNode headA, ListNode headB) {
        // Set<ListNode> visited = new HashSet<>();
        // ListNode curr = headA;

        // while(curr != null){
        //     visited.add(curr);
        //     curr= curr.next;
        // }

        // curr = headB;
        // while(curr != null){
        //     if(visited.contains(curr)){
        //         return curr;
        //     }else{
        //         curr = curr.next;
        //     }
        // }

        // return null;

        ListNode pA = headA;
        ListNode pB = headB;

        while(pA != pB){

            pA = (pA != null) ? pA.next : headB;
            pB = (pB != null )? pB.next : headA;
        }

        return pA;
        
    }
}