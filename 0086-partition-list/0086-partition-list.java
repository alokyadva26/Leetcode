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
    public ListNode partition(ListNode head, int x) {
        ListNode dummyLess = new ListNode (0);
        ListNode dummyGreator = new ListNode(0);
        ListNode less = dummyLess;
        ListNode greator = dummyGreator;

        ListNode curr = head;
        while(curr != null){
            if(curr.val < x){
                less.next = curr;
                less = less.next ;
            }else{
                greator.next= curr;
                greator = greator.next;
            }
            curr = curr.next;
        }

        less.next = dummyGreator.next;
        greator.next = null;

        return dummyLess.next;

        
        
    }
}

// List<Integer> less = new ArrayList<>();
//         List<Integer> greator = new ArrayList<>();

//         ListNode curr = head;
//         while(curr != null){
//             if(curr.val < x){
//                 less.add(curr.val);
//             }else{
//                 greator.add(curr.val);
//             }

//             curr= curr.next;
//         }

//         ListNode temp = new ListNode(0);
//         ListNode tail = temp;

//         for(int a : less){
//             tail.next = new ListNode(a);
//             tail=tail.next;
//         }

//         for( int b : greator){
//             tail.next = new ListNode(b);
//             tail = tail.next;
//         }
//         return temp.next;