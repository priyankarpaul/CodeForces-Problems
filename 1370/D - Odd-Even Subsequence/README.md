<h2><a href="https://codeforces.com/contest/1370/problem/D" target="_blank" rel="noopener noreferrer">1370D — Odd-Even Subsequence</a></h2>

| | |
|---|---|
| **Difficulty** | 2000 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1370D](https://codeforces.com/contest/1370/problem/D) |

## Topics
`binary search` `dp` `dsu` `greedy` `implementation`

---

## Problem Statement

<div class="header"><div class="title">D. Odd-Even Subsequence</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Ashish has an array $$$a$$$ of size $$$n$$$.</p><p>A subsequence of $$$a$$$ is defined as a sequence that can be obtained from $$$a$$$ by deleting some elements (possibly none), without changing the order of the remaining elements.</p><p>Consider a subsequence $$$s$$$ of $$$a$$$. He defines the cost of $$$s$$$ as the minimum between: </p><ul> <li> The maximum among all elements at odd indices of $$$s$$$. </li><li> The maximum among all elements at even indices of $$$s$$$. </li></ul><p>Note that the index of an element is its index in $$$s$$$, rather than its index in $$$a$$$. The positions are numbered from $$$1$$$. So, the cost of $$$s$$$ is equal to $$$min(max(s_1, s_3, s_5, \ldots), max(s_2, s_4, s_6, \ldots))$$$.</p><p>For example, the cost of $$$\{7, 5, 6\}$$$ is $$$min( max(7, 6), max(5) ) = min(7, 5) = 5$$$.</p><p>Help him find the minimum cost of a subsequence of size $$$k$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains two integers $$$n$$$ and $$$k$$$ ($$$2 \leq k \leq n \leq 2 \cdot 10^5$$$)  — the size of the array $$$a$$$ and the size of the subsequence.</p><p>The next line contains $$$n$$$ integers $$$a_1, a_2, \ldots, a_n$$$ ($$$1 \leq a_i \leq 10^9$$$)  — the elements of the array $$$a$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Output a single integer  — the minimum cost of a subsequence of size $$$k$$$.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id006259625261196228" id="id003983027509407514" class="input-output-copier">Copy</div></div><pre id="id006259625261196228">4 2
1 2 3 4
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id004171372181923497" id="id009071371427947935" class="input-output-copier">Copy</div></div><pre id="id004171372181923497">1</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id005005120032852394" id="id009594877518346089" class="input-output-copier">Copy</div></div><pre id="id005005120032852394">4 3
1 2 3 4
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0010587935820184091" id="id003530635633059199" class="input-output-copier">Copy</div></div><pre id="id0010587935820184091">2</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id006834845019357434" id="id0015205154647477614" class="input-output-copier">Copy</div></div><pre id="id006834845019357434">5 3
5 3 4 2 6
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00041753255418716884" id="id0024304337452275093" class="input-output-copier">Copy</div></div><pre id="id00041753255418716884">2</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0002353652637006387" id="id0031347197640520974" class="input-output-copier">Copy</div></div><pre id="id0002353652637006387">6 4
5 3 50 2 4 5
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id007302594998633402" id="id007840582570102067" class="input-output-copier">Copy</div></div><pre id="id007302594998633402">3</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test, consider the subsequence $$$s$$$ = $$$\{1, 3\}$$$. Here the cost is equal to $$$min(max(1), max(3)) = 1$$$.</p><p>In the second test, consider the subsequence $$$s$$$ = $$$\{1, 2, 4\}$$$. Here the cost is equal to $$$min(max(1, 4), max(2)) = 2$$$.</p><p>In the fourth test, consider the subsequence $$$s$$$ = $$$\{3, 50, 2, 4\}$$$. Here the cost is equal to $$$min(max(3, 2), max(50, 4)) = 3$$$.</p></div>