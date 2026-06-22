<h2><a href="https://codeforces.com/contest/1174/problem/A" target="_blank" rel="noopener noreferrer">1174A — Ehab Fails to Be Thanos</a></h2>

| | |
|---|---|
| **Difficulty** | 1000 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1174A](https://codeforces.com/contest/1174/problem/A) |

## Topics
`constructive algorithms` `greedy` `sortings`

---

## Problem Statement

<div class="header"><div class="title">A. Ehab Fails to Be Thanos</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You're given an array $$$a$$$ of length $$$2n$$$. Is it possible to reorder it in such way so that the sum of the first $$$n$$$ elements <span class="tex-font-style-bf">isn't</span> equal to the sum of the last $$$n$$$ elements?</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains an integer $$$n$$$ ($$$1 \le n \le 1000$$$), where $$$2n$$$ is the number of elements in the array $$$a$$$.</p><p>The second line contains $$$2n$$$ space-separated integers $$$a_1$$$, $$$a_2$$$, $$$\ldots$$$, $$$a_{2n}$$$ ($$$1 \le a_i \le 10^6$$$) — the elements of the array $$$a$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>If there's no solution, print "<span class="tex-font-style-tt">-1</span>" (without quotes). Otherwise, print a single line containing $$$2n$$$ space-separated integers. They must form a reordering of $$$a$$$. You are allowed to not change the order.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id009309292468344926" id="id006593008201382445" class="input-output-copier">Copy</div></div><pre id="id009309292468344926">3
1 2 2 1 3 1
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006393077333868847" id="id0016008808564625499" class="input-output-copier">Copy</div></div><pre id="id006393077333868847">2 1 3 1 1 2</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0007449290726822189" id="id008415732310994903" class="input-output-copier">Copy</div></div><pre id="id0007449290726822189">1
1 1
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008451518546814127" id="id007095699591079575" class="input-output-copier">Copy</div></div><pre id="id008451518546814127">-1</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example, the first $$$n$$$ elements have sum $$$2+1+3=6$$$ while the last $$$n$$$ elements have sum $$$1+1+2=4$$$. The sums aren't equal.</p><p>In the second example, there's no solution.</p></div>