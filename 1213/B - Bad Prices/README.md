<h2><a href="https://codeforces.com/contest/1213/problem/B" target="_blank" rel="noopener noreferrer">1213B — Bad Prices</a></h2>

| | |
|---|---|
| **Difficulty** | 1100 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1213B](https://codeforces.com/contest/1213/problem/B) |

## Topics
`data structures` `implementation`

---

## Problem Statement

<div class="header"><div class="title">B. Bad Prices</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Polycarp analyzes the prices of the new berPhone. At his disposal are the prices for $$$n$$$ last days: $$$a_1, a_2, \dots, a_n$$$, where $$$a_i$$$ is the price of berPhone on the day $$$i$$$.</p><p>Polycarp considers the price on the day $$$i$$$ to be bad if later (that is, a day with a greater number) berPhone was sold at a lower price. For example, if $$$n=6$$$ and $$$a=[3, 9, 4, 6, 7, 5]$$$, then the number of days with a bad price is $$$3$$$ — these are days $$$2$$$ ($$$a_2=9$$$), $$$4$$$ ($$$a_4=6$$$) and $$$5$$$ ($$$a_5=7$$$).</p><p>Print the number of days with a bad price.</p><p>You have to answer $$$t$$$ independent data sets.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains an integer $$$t$$$ ($$$1 \le t \le 10000$$$) — the number of sets of input data in the test. Input data sets must be processed independently, one after another.</p><p>Each input data set consists of two lines. The first line contains an integer $$$n$$$ ($$$1 \le n \le 150000$$$) — the number of days. The second line contains $$$n$$$ integers $$$a_1, a_2, \dots, a_n$$$ ($$$1 \le a_i \le 10^6$$$), where $$$a_i$$$ is the price on the $$$i$$$-th day.</p><p>It is guaranteed that the sum of $$$n$$$ over all data sets in the test does not exceed $$$150000$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print $$$t$$$ integers, the $$$j$$$-th of which should be equal to the number of days with a bad price in the $$$j$$$-th input data set.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00535101853880422" id="id004252568083273638" class="input-output-copier">Copy</div></div><pre id="id00535101853880422">5
6
3 9 4 6 7 5
1
1000000
2
2 1
10
31 41 59 26 53 58 97 93 23 84
7
3 2 1 2 3 4 5
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00877542852077554" id="id0016919380913432402" class="input-output-copier">Copy</div></div><pre id="id00877542852077554">3
0
1
8
2
</pre></div></div></div>