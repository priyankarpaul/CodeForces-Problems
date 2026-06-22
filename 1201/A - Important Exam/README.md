<h2><a href="https://codeforces.com/contest/1201/problem/A" target="_blank" rel="noopener noreferrer">1201A — Important Exam</a></h2>

| | |
|---|---|
| **Difficulty** | 900 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1201A](https://codeforces.com/contest/1201/problem/A) |

## Topics
`implementation` `strings`

---

## Problem Statement

<div class="header"><div class="title">A. Important Exam</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>A class of students wrote a multiple-choice test.</p><p>There are $$$n$$$ students in the class. The test had $$$m$$$ questions, each of them had $$$5$$$ possible answers (A, B, C, D or E). There is exactly one correct answer for each question. The correct answer for question $$$i$$$ worth $$$a_i$$$ points. Incorrect answers are graded with zero points.</p><p>The students remember what answers they gave on the exam, but they don't know what are the correct answers. They are very optimistic, so they want to know what is the maximum possible total score of all students in the class. </p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains integers $$$n$$$ and $$$m$$$ ($$$1 \le n, m \le 1000$$$) — the number of students in the class and the number of questions in the test.</p><p>Each of the next $$$n$$$ lines contains string $$$s_i$$$ ($$$|s_i| = m$$$), describing an answer of the $$$i$$$-th student. The $$$j$$$-th character represents the student answer (A, B, C, D or E) on the $$$j$$$-th question.</p><p>The last line contains $$$m$$$ integers $$$a_1, a_2, \ldots, a_m$$$ ($$$1 \le a_i \le 1000$$$) — the number of points for the correct answer for every question.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print a single integer — the maximum possible total score of the class.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0008731851571560456" id="id006018395858601823" class="input-output-copier">Copy</div></div><pre id="id0008731851571560456">2 4
ABCD
ABCE
1 2 3 4
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005553880975021508" id="id005739528375290142" class="input-output-copier">Copy</div></div><pre id="id005553880975021508">16</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0009026587866715519" id="id009782659512761552" class="input-output-copier">Copy</div></div><pre id="id0009026587866715519">3 3
ABC
BCD
CDE
5 4 12
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0048837630145556254" id="id009316541608895736" class="input-output-copier">Copy</div></div><pre id="id0048837630145556254">21</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example, one of the most optimal test answers is "<span class="tex-font-style-tt">ABCD</span>", this way the total number of points will be $$$16$$$.</p><p>In the second example, one of the most optimal test answers is "<span class="tex-font-style-tt">CCC</span>", this way each question will be answered by exactly one student and the total number of points is $$$5 + 4 + 12 = 21$$$.</p></div>