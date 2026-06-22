<h2><a href="https://codeforces.com/contest/25/problem/B" target="_blank" rel="noopener noreferrer">25B — Phone numbers</a></h2>

| | |
|---|---|
| **Difficulty** | 1100 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 25B](https://codeforces.com/contest/25/problem/B) |

## Topics
`implementation`

---

## Problem Statement

<div class="header"><div class="title">B. Phone numbers</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" style="font-weight: bold"><div class="property-title">input</div>stdin</div><div class="output-file output-standard" style="font-weight: bold"><div class="property-title">output</div>stdout</div></div><div><p>Phone number in Berland is a sequence of <span class="tex-span"><i>n</i></span> digits. Often, to make it easier to memorize the number, it is divided into groups of two or three digits. For example, the phone number <span class="tex-font-style-tt">1198733</span> is easier to remember as <span class="tex-font-style-tt">11-987-33</span>. Your task is to find for a given phone number any of its divisions into groups of two or three digits.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains integer <span class="tex-span"><i>n</i></span> (<span class="tex-span">2 ≤ <i>n</i> ≤ 100</span>) — amount of digits in the phone number. The second line contains <span class="tex-span"><i>n</i></span> digits — the phone number to divide into groups.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Output any of divisions of the given phone number into groups of two or three digits. Separate groups by single character <span class="tex-font-style-tt">-</span>. If the answer is not unique, output any.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id004098408295200341" id="id0039545675712119577" class="input-output-copier">Copy</div></div><pre id="id004098408295200341">6<br>549871<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0042995517503042946" id="id008820674582435469" class="input-output-copier">Copy</div></div><pre id="id0042995517503042946">54-98-71</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007620300572152049" id="id007570819405572421" class="input-output-copier">Copy</div></div><pre id="id007620300572152049">7<br>1198733<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0021391275902124496" id="id005853616451355855" class="input-output-copier">Copy</div></div><pre id="id0021391275902124496">11-987-33<br></pre></div></div></div>