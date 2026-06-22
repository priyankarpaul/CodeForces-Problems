<h2><a href="https://codeforces.com/contest/1627/problem/D" target="_blank" rel="noopener noreferrer">1627D — Not Adding</a></h2>

| | |
|---|---|
| **Difficulty** | 1900 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1627D](https://codeforces.com/contest/1627/problem/D) |

## Topics
`brute force` `dp` `math` `number theory`

---

## Problem Statement

<div class="header"><div class="title">D. Not Adding</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You have an array $$$a_1, a_2, \dots, a_n$$$ consisting of $$$n$$$ <span class="tex-font-style-bf">distinct</span> integers. You are allowed to perform the following operation on it:</p><ul> <li> Choose two elements from the array $$$a_i$$$ and $$$a_j$$$ ($$$i \ne j$$$) such that $$$\gcd(a_i, a_j)$$$ is not present in the array, and add $$$\gcd(a_i, a_j)$$$ to the end of the array. Here $$$\gcd(x, y)$$$ denotes <a href="https://en.wikipedia.org/wiki/Greatest_common_divisor">greatest common divisor (GCD)</a> of integers $$$x$$$ and $$$y$$$. </li></ul><p>Note that the array changes after each operation, and the subsequent operations are performed on the new array.</p><p>What is the <span class="tex-font-style-bf">maximum</span> number of times you can perform the operation on the array?</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line consists of a single integer $$$n$$$ ($$$2 \le n \le 10^6$$$).</p><p>The second line consists of $$$n$$$ integers $$$a_1, a_2, \dots, a_n$$$ ($$$1 \leq a_i \leq 10^6$$$). All $$$a_i$$$ are <span class="tex-font-style-bf">distinct</span>.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Output a single line containing one integer — the maximum number of times the operation can be performed on the given array.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00316916757477002" id="id0015976709811158119" class="input-output-copier">Copy</div></div><pre id="id00316916757477002">5
4 20 1 25 30
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0011559990508795814" id="id006771144599664695" class="input-output-copier">Copy</div></div><pre id="id0011559990508795814">3</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id005985320887809062" id="id001773601478860134" class="input-output-copier">Copy</div></div><pre id="id005985320887809062">3
6 10 15
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009216033107365701" id="id002923333138779607" class="input-output-copier">Copy</div></div><pre id="id009216033107365701">4</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example, one of the ways to perform maximum number of operations on the array is: </p><ul> <li> Pick $$$i = 1, j= 5$$$ and add $$$\gcd(a_1, a_5) = \gcd(4, 30) = 2$$$ to the array. </li><li> Pick $$$i = 2, j= 4$$$ and add $$$\gcd(a_2, a_4) = \gcd(20, 25) = 5$$$ to the array. </li><li> Pick $$$i = 2, j= 5$$$ and add $$$\gcd(a_2, a_5) = \gcd(20, 30) = 10$$$ to the array. </li></ul><p>It can be proved that there is no way to perform more than $$$3$$$ operations on the original array.</p><p>In the second example one can add $$$3$$$, then $$$1$$$, then $$$5$$$, and $$$2$$$.</p></div>