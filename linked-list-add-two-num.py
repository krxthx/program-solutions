def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        carry=0
        dummy = ListNode()
        cur = dummy
        while l1 or l2 or carry:
            v1 = l1.val if l1 else 0
            v2 = l2.val if l2 else 0
            s = v1+v2+carry
            carry = s//10
            s%=10
            cur.next = ListNode(s)
            cur = cur.next
            
            l1 = l1.next if l1 else None
            l2 = l2.next if l2 else None
        return dummy.next
