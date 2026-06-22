<h2><a href="https://codeforces.com/contest/1520/problem/B" target="_blank" rel="noopener noreferrer">1520B — Ordinary Numbers</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1520B](https://codeforces.com/contest/1520/problem/B) |

## Topics
`brute force` `math` `number theory`

---

## Problem Statement

<div class="header"><div class="title">B. Ordinary Numbers</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Let's call a positive integer $$$n$$$ ordinary if in the decimal notation all its digits are the same. For example, $$$1$$$, $$$2$$$ and $$$99$$$ are ordinary numbers, but $$$719$$$ and $$$2021$$$ are not ordinary numbers.</p><p>For a given number $$$n$$$, find the number of ordinary numbers among the numbers from $$$1$$$ to $$$n$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains one integer $$$t$$$ ($$$1 \le t \le 10^4$$$). Then $$$t$$$ test cases follow.</p><p>Each test case is characterized by one integer $$$n$$$ ($$$1 \le n \le 10^9$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case output the number of ordinary numbers among numbers from $$$1$$$ to $$$n$$$.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id009941826204547446" id="id004384134429422759" class="input-output-copier">Copy</div></div><pre id="id009941826204547446">6
1
2
3
4
5
100
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009416874051772705" id="id005954704323479486" class="input-output-copier">Copy</div></div><pre id="id009416874051772705">1
2
3
4
5
18
</pre></div></div></div>