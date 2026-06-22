<h2><a href="https://codeforces.com/contest/72/problem/G" target="_blank" rel="noopener noreferrer">72G — Fibonacci army</a></h2>

| | |
|---|---|
| **Difficulty** | 1000 |
| **Language** | Io |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 72G](https://codeforces.com/contest/72/problem/G) |

## Topics
`*special` `dp`

---

## Problem Statement

<div class="header"><div class="title">G. Fibonacci army</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" style="font-weight: bold"><div class="property-title">input</div>stdin</div><div class="output-file output-standard" style="font-weight: bold"><div class="property-title">output</div>stdout</div></div><div><p>King Cambyses loves Fibonacci numbers. He has several armies. Today he wants to make a new army for himself and he wants the number of men in this army to be the <span class="tex-span"><i>n</i></span>-th Fibonacci number.</p><p>Given <span class="tex-span"><i>n</i></span> you should find <span class="tex-span"><i>n</i></span>-th Fibonacci number. The set of Fibonacci numbers start with <span class="tex-span"><i>f</i><sub class="lower-index">0</sub> = <i>f</i><sub class="lower-index">1</sub> = 1</span> and for each <span class="tex-span"><i>i</i> ≥ 2</span>, <span class="tex-span"><i>f</i><sub class="lower-index"><i>i</i></sub> = <i>f</i><sub class="lower-index"><i>i</i> - 1</sub> + <i>f</i><sub class="lower-index"><i>i</i> - 2</sub></span>.</p></div><div class="input-specification"><div class="section-title">Input</div><p>Input contains a single integer <span class="tex-span"><i>n</i></span> (<span class="tex-span">1 ≤ <i>n</i> ≤ 20</span>).</p></div><div class="output-specification"><div class="section-title">Output</div><p>Write a single integer. The <span class="tex-span"><i>n</i></span>-th Fibonacci number.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0004538380516057705" id="id003411466107522335" class="input-output-copier">Copy</div></div><pre id="id0004538380516057705">2<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008566522226141241" id="id0042914331606272826" class="input-output-copier">Copy</div></div><pre id="id008566522226141241">2<br></pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id008603906456080181" id="id006920867882554868" class="input-output-copier">Copy</div></div><pre id="id008603906456080181">1<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id002487454941803573" id="id006099641256279724" class="input-output-copier">Copy</div></div><pre id="id002487454941803573">1<br></pre></div></div></div>