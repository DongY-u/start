public class DeleteDuplication {
    public static ListNode deleteDuplication(ListNode pHead) {
        if (pHead == null) {
            return pHead;
        }
        ListNode prev = new ListNode();
        ListNode fake = prev;
        prev.next = pHead;
        ListNode cur = pHead;
        ListNode next = pHead.next;

        while (next != null) {
            if (cur.val != next.val) {
                prev = prev.next;
                cur = cur.next;
                next = next.next;
            } else {
                while (next != null && cur.val == next.val) {
                    next = next.next;
                }
                // next 可能是 null

                // 删除 [cur, next)
                prev.next = next;

                cur = next;
                if (next != null) {
                    next = next.next;
                }
            }
        }

        return fake.next;
    }
}
