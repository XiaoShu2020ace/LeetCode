You are given a string s and an array of strings words.
All the strings of words are of the same length.

A concatenated string is a string that exactly contains all the strings of any permutation of words concatenated.

For example, if words = ["ab","cd","ef"], then "abcdef", "abefcd", "cdabef", "cdefab", "efabcd", 
and "efcdab" are all concatenated strings. "acdbef" is not a concatenated string 
because it is not the concatenation of any permutation of words.
Return an array of the starting indices of all the concatenated substrings in s. 
You can return the answer in any order.

给定一个字符串 s 和一个字符串数组 words。 words 中所有字符串 长度相同。
 s 中的 串联子串 是指一个包含  words 中所有字符串以任意顺序排列连接起来的子串。
例如，如果 words = ["ab","cd","ef"]， 那么 "abcdef"， "abefcd"，"cdabef"， "cdefab"，"efabcd"， 
和 "efcdab" 都是串联子串。 "acdbef" 不是串联子串，因为他不是任何 words 排列的连接。
返回所有串联子串在 s 中的开始索引。你可以以 任意顺序 返回答案。


Example 1:
    Input: s = "barfoothefoobarman", words = ["foo","bar"]
    Output: [0,9]

Explanation:
    The substring starting at 0 is "barfoo". It is the concatenation of ["bar","foo"] which is a permutation of words.
    The substring starting at 9 is "foobar". It is the concatenation of ["foo","bar"] which is a permutation of words.

Example 2:
    Input: s = "wordgoodgoodgoodbestword", words = [",word""good","best","word"]
    Output: []

Explanation:
    There is no concatenated substring.

Example 3:
    Input: s = "barfoofoobarthefoobarman", words = ["bar","foo","the"]
    Output: [6,9,12]

Explanation:
    The substring starting at 6 is "foobarthe". It is the concatenation of ["foo","bar","the"].
    The substring starting at 9 is "barthefoo". It is the concatenation of ["bar","the","foo"].
    The substring starting at 12 is "thefoobar". It is the concatenation of ["the","foo","bar"].


Constraints:
    1 <= s.length <= 104
    1 <= words.length <= 5000
    1 <= words[i].length <= 30
    s and words[i] consist of lowercase English letters.