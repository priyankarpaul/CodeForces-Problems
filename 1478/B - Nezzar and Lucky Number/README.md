<h2><a href="https://codeforces.com/contest/1478/problem/B" target="_blank" rel="noopener noreferrer">1478B — Nezzar and Lucky Number</a></h2>

| | |
|---|---|
| **Difficulty** | 1100 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1478B](https://codeforces.com/contest/1478/problem/B) |

## Topics
`brute force` `dp` `greedy` `math`

---

## Problem Statement

<div class="header"><div class="title">B. Nezzar and Lucky Number</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>512 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Nezzar's favorite digit among $$$1,\ldots,9$$$ is $$$d$$$. He calls a <span class="tex-font-style-bf">positive</span> integer lucky if $$$d$$$ occurs at least once in its decimal representation. </p><p>Given $$$q$$$ integers $$$a_1,a_2,\ldots,a_q$$$, for each $$$1 \le i \le q$$$ Nezzar would like to know if $$$a_i$$$ can be equal to a sum of several (one or more) lucky numbers.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \le t \le 9$$$) — the number of test cases.</p><p>The first line of each test case contains two integers $$$q$$$ and $$$d$$$ ($$$1 \le q \le 10^4$$$, $$$1 \le d \le 9$$$).</p><p>The second line of each test case contains $$$q$$$ integers $$$a_1,a_2,\ldots,a_q$$$ ($$$1 \le a_i \le 10^9$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each integer in each test case, print "<span class="tex-font-style-tt">YES</span>" in a single line if $$$a_i$$$ can be equal to a sum of lucky numbers. Otherwise, print "<span class="tex-font-style-tt">NO</span>".</p><p>You can print letters in any case (upper or lower).</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id002681538238346033" id="id007379240848906986" class="input-output-copier">Copy</div></div><pre id="id002681538238346033">2
3 7
24 25 27
10 7
51 52 53 54 55 56 57 58 59 60
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005437359725178476" id="id00031679713315741154" class="input-output-copier">Copy</div></div><pre id="id005437359725178476">YES
NO
YES
YES
YES
NO
YES
YES
YES
YES
YES
YES
NO
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, $$$24 = 17 + 7$$$, $$$27$$$ itself is a lucky number, $$$25$$$ cannot be equal to a sum of lucky numbers.</p></div>