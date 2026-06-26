<h2><a href="https://codeforces.com/contest/1672/problem/C" target="_blank" rel="noopener noreferrer">1672C — Unequal Array</a></h2>

| | |
|---|---|
| **Difficulty** | 1100 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1672C](https://codeforces.com/contest/1672/problem/C) |

## Topics
`constructive algorithms` `greedy` `implementation`

---

## Problem Statement

<div class="header"><div class="title">C. Unequal Array</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given an array $$$a$$$ of length $$$n$$$. We define the <span class="tex-font-style-bf">equality</span> of the array as the number of indices $$$1 \le i \le n - 1$$$ such that $$$a_i = a_{i + 1}$$$. We are allowed to do the following operation:</p><ul> <li> Select two integers $$$i$$$ and $$$x$$$ such that $$$1 \le i \le n - 1$$$ and $$$1 \le x \le 10^9$$$. Then, set $$$a_i$$$ and $$$a_{i + 1}$$$ to be equal to $$$x$$$. </li></ul><p>Find the minimum number of operations needed such that the equality of the array is less than or equal to $$$1$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains multiple test cases. The first line contains a single integer $$$t$$$ ($$$1 \leq t \leq 10^4$$$) — the number of test cases. The description of the test cases follows.</p><p>The first line of each test case contains an integer $$$n$$$ ($$$2 \le n \le 2 \cdot 10 ^ 5$$$) — the length of array $$$a$$$.</p><p>The second line of each test case contains $$$n$$$ integers $$$a_1, a_2, \ldots, a_n$$$ ($$$1 \le a_i \le 10^9$$$) — elements of the array.</p><p>It is guaranteed that the sum of $$$n$$$ over all test cases does not exceed $$$2 \cdot 10 ^ 5$$$</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print the minimum number of operations needed.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0043973391997418687" id="id006829748052351271" class="input-output-copier">Copy</div></div><pre id="id0043973391997418687"><div class="test-example-line test-example-line-even test-example-line-0">4</div><div class="test-example-line test-example-line-odd test-example-line-1">5</div><div class="test-example-line test-example-line-odd test-example-line-1">1 1 1 1 1</div><div class="test-example-line test-example-line-even test-example-line-2">5</div><div class="test-example-line test-example-line-even test-example-line-2">2 1 1 1 2</div><div class="test-example-line test-example-line-odd test-example-line-3">6</div><div class="test-example-line test-example-line-odd test-example-line-3">1 1 2 3 3 4</div><div class="test-example-line test-example-line-even test-example-line-4">6</div><div class="test-example-line test-example-line-even test-example-line-4">1 2 1 4 5 4</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0033139190383474404" id="id000740272351303316" class="input-output-copier">Copy</div></div><pre id="id0033139190383474404">2
1
2
0
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, we can select $$$i=2$$$ and $$$x=2$$$ to form $$$[1, 2, 2, 1, 1]$$$. Then, we can select $$$i=3$$$ and $$$x=3$$$ to form $$$[1, 2, 3, 3, 1]$$$.</p><p>In the second test case, we can select $$$i=3$$$ and $$$x=100$$$ to form $$$[2, 1, 100, 100, 2]$$$.</p></div>