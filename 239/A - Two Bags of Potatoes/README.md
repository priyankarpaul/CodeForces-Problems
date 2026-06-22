<h2><a href="https://codeforces.com/contest/239/problem/A" target="_blank" rel="noopener noreferrer">239A — Two Bags of Potatoes</a></h2>

| | |
|---|---|
| **Difficulty** | 1200 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 239A](https://codeforces.com/contest/239/problem/A) |

## Topics
`greedy` `implementation` `math`

---

## Problem Statement

<div class="header"><div class="title">A. Two Bags of Potatoes</div><div class="time-limit"><div class="property-title">time limit per test</div>0.5 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" style="font-weight: bold"><div class="property-title">input</div>stdin</div><div class="output-file output-standard" style="font-weight: bold"><div class="property-title">output</div>stdout</div></div><div><p>Valera had two bags of potatoes, the first of these bags contains $$$x$$$ $$$(x \ge 1)$$$ potatoes, and the second — $$$y$$$ $$$(y \ge 1)$$$ potatoes. Valera — a very scattered boy, so the first bag of potatoes (it contains $$$x$$$ potatoes) Valera lost. Valera remembers that the total amount of potatoes $$$(x + y)$$$ in the two bags, firstly, was not greater than $$$n$$$, and, secondly, was divisible by $$$k$$$.</p><p>Help Valera to determine how many potatoes could be in the first bag. Print all such possible numbers in ascending order.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of input contains three integers $$$y$$$, $$$k$$$, $$$n$$$ ($$$1 \le y, k, n \le 10^9;$$$ $$$\frac{n}{k}$$$ $$$\le 10^5$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print the list of whitespace-separated integers — all possible values of $$$x$$$ in ascending order. You should print each possible value of $$$x$$$ exactly once.</p><p>If there are no such values of $$$x$$$, print a single integer $$$-1$$$.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00220855799849067" id="id003859135338728463" class="input-output-copier">Copy</div></div><pre id="id00220855799849067">10 1 10<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0046416415854348314" id="id008977824196063855" class="input-output-copier">Copy</div></div><pre id="id0046416415854348314">-1<br></pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007017598425092949" id="id0029509681542200505" class="input-output-copier">Copy</div></div><pre id="id007017598425092949">10 6 40<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0011979181522938132" id="id006526833883963458" class="input-output-copier">Copy</div></div><pre id="id0011979181522938132">2 8 14 20 26 <br></pre></div></div></div>