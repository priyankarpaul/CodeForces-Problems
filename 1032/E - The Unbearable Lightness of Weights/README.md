<h2><a href="https://codeforces.com/contest/1032/problem/E" target="_blank" rel="noopener noreferrer">1032E — The Unbearable Lightness of Weights</a></h2>

| | |
|---|---|
| **Difficulty** | 2100 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1032E](https://codeforces.com/contest/1032/problem/E) |

## Topics
`dp` `math`

---

## Problem Statement

<div class="header"><div class="title">E. The Unbearable Lightness of Weights</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You have a set of $$$n$$$ weights. You know that their masses are $$$a_1$$$, $$$a_2$$$, ..., $$$a_n$$$ grams, but you don't know which of them has which mass. You can't distinguish the weights.</p><p>However, your friend does know the mass of each weight. You can ask your friend to give you exactly $$$k$$$ weights with the total mass $$$m$$$ (both parameters $$$k$$$ and $$$m$$$ are chosen by you), and your friend will point to any valid subset of weights, if it is possible.</p><p>You are allowed to make this query only once. Find the maximum possible number of weights you can reveal after this query.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$n$$$ ($$$1 \le n \le 100$$$) — the number of weights.</p><p>The second line contains $$$n$$$ integers $$$a_1, a_2, \ldots, a_n$$$ ($$$1 \le a_i \le 100$$$) — the masses of the weights.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print the maximum number of weights you can learn the masses for after making a single query.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00013153616782969335" id="id0017809496407737202" class="input-output-copier">Copy</div></div><pre id="id00013153616782969335">4
1 4 2 2
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0036660754104466164" id="id0006656478329387938" class="input-output-copier">Copy</div></div><pre id="id0036660754104466164">2
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id002814512723469913" id="id003401952832130618" class="input-output-copier">Copy</div></div><pre id="id002814512723469913">6
1 2 4 4 4 9
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id003186859197057357" id="id0048947125635387656" class="input-output-copier">Copy</div></div><pre id="id003186859197057357">2
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example we can ask for a subset of two weights with total mass being equal to $$$4$$$, and the only option is to get $$$\{2, 2\}$$$.</p><p>Another way to obtain the same result is to ask for a subset of two weights with the total mass of $$$5$$$ and get $$$\{1, 4\}$$$. It is easy to see that the two remaining weights have mass of $$$2$$$ grams each.</p><p>In the second example we can ask for a subset of two weights with total mass being $$$8$$$, and the only answer is $$$\{4, 4\}$$$. We can prove it is not possible to learn masses for three weights in one query, but we won't put the proof here.</p></div>