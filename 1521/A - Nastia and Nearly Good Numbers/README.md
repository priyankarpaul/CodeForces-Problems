<h2><a href="https://codeforces.com/contest/1521/problem/A" target="_blank" rel="noopener noreferrer">1521A — Nastia and Nearly Good Numbers</a></h2>

| | |
|---|---|
| **Difficulty** | 1000 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1521A](https://codeforces.com/contest/1521/problem/A) |

## Topics
`constructive algorithms` `math` `number theory`

---

## Problem Statement

<div class="header"><div class="title">A. Nastia and Nearly Good Numbers</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Nastia has $$$2$$$ positive integers $$$A$$$ and $$$B$$$. She defines that:</p><ul> <li> The integer is good if it is divisible by $$$A \cdot B$$$; </li><li> Otherwise, the integer is nearly good, if it is divisible by $$$A$$$. </li></ul><p>For example, if $$$A = 6$$$ and $$$B = 4$$$, the integers $$$24$$$ and $$$72$$$ are good, the integers $$$6$$$, $$$660$$$ and $$$12$$$ are nearly good, the integers $$$16$$$, $$$7$$$ are neither good nor nearly good.</p><p>Find $$$3$$$ <span class="tex-font-style-bf">different</span> positive integers $$$x$$$, $$$y$$$, and $$$z$$$ such that <span class="tex-font-style-bf">exactly one</span> of them is good and the <span class="tex-font-style-bf">other</span> $$$2$$$ are nearly good, and $$$x + y = z$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \le t \le 10\,000$$$) — the number of test cases.</p><p>The first line of each test case contains two integers $$$A$$$ and $$$B$$$ ($$$1 \le A \le 10^6$$$, $$$1 \le B \le 10^6$$$) — numbers that Nastia has.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case print: </p><ul> <li> "<span class="tex-font-style-tt">YES</span>" and $$$3$$$ <span class="tex-font-style-bf">different</span> positive integers $$$x$$$, $$$y$$$, and $$$z$$$ ($$$1 \le x, y, z \le 10^{18}$$$) such that <span class="tex-font-style-bf">exactly one</span> of them is good and the <span class="tex-font-style-bf">other</span> $$$2$$$ are nearly good, and $$$x + y = z$$$. </li><li> "<span class="tex-font-style-tt">NO</span>" if no answer exists. </li></ul> You can print each character of "<span class="tex-font-style-tt">YES</span>" or "<span class="tex-font-style-tt">NO</span>" in any case.<p>If there are multiple answers, print any.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0038406482376794504" id="id005209616180479555" class="input-output-copier">Copy</div></div><pre id="id0038406482376794504">3
5 3
13 2
7 11
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0013912570577321848" id="id003783892712632213" class="input-output-copier">Copy</div></div><pre id="id0013912570577321848">YES
10 50 60
YES
169 39 208
YES
28 154 182</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case: $$$60$$$ — good number; $$$10$$$ and $$$50$$$ — nearly good numbers.</p><p>In the second test case: $$$208$$$ — good number; $$$169$$$ and $$$39$$$ — nearly good numbers.</p><p>In the third test case: $$$154$$$ — good number; $$$28$$$ and $$$182$$$ — nearly good numbers.</p></div>