class Solution {
    public boolean isPalindrome(String s) {
        return palindrome(s, 0, s.length() - 1);
    }

    private boolean palindrome(String s, int l, int r) {
        if (l >= r) return true;
        if (s.charAt(l) != s.charAt(r)) return false;
        return palindrome(s, l + 1, r - 1);
    }
}