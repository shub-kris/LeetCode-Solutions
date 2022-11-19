# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def detectCycle(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if head is None or head.next is None:
            return None
        slow, fast = head, head
        cycle_detected = False
        while slow is not None and fast is not None:
            slow = slow.next
            fast = fast.next.next if fast.next is not None else None
            if slow == fast:
                cycle_detected = True
                break
        if not cycle_detected:
            return None
        slow = head
        while slow != fast:
            slow = slow.next
            fast = fast.next
        return slow
