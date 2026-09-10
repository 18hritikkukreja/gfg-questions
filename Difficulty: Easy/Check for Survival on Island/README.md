<h2><a href="https://www.geeksforgeeks.org/problems/check-if-it-is-possible-to-survive-on-island4922/1">Check for Survival on Island</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO" style="--text-color: var(--problem-text-color);"><p><span style="font-size: 18px;">Geekina got stuck on an island. There is only one shop on this island and it is open on all days of the week except for Sunday. Consider following constraints:</span></p>
<ul>
<li><span style="font-size: 18px;"><strong>N</strong> – The maximum unit of food you can buy each day.</span></li>
<li><span style="font-size: 18px;"><strong>S</strong> – Number of days you are required to survive.</span></li>
<li><span style="font-size: 18px;"><strong>M</strong> – Unit of food required each day to survive.</span></li>
</ul>
<p><span style="font-size: 18px;">Currently, it’s Monday, and she needs to survive for the next S days, initially she has no food.<br>Find the<strong> minimum </strong>number of days on which you need to buy food from the shop so that she can survive the next <strong>S </strong>days. If it is not possible to survive for S days then return -1.</span></p>
<p><strong><span style="font-size: 18px;">Examples:</span></strong></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong> S = 10, N = 16, M = 2
<strong>Output:</strong> 2
<strong>Explaination:</strong> One possible solution is to buy a box on the first day (Monday), it’s sufficient to eat from this box up to 8th day (Monday) inclusive. Now, on the 9th 
day (Tuesday), you buy another box and use the chocolates in it to survive the 9th and 10th day.</span></pre>
<pre><span style="font-size: 18px;"><strong>Input:</strong> S = 10, N = 9, M = 8
<strong>Output:</strong> -1
<strong>Explaination:</strong> </span><span style="font-size: 18px;">Let's start by detailing the days of the week and the net number of food units available after purchasing and consuming them:
Monday - Net 1 food unit available.
Tuesday - Net 2 food units available.
Wednesday - Net 3 food units available.
Thursday - Net 4 food units available.
Friday - Net 5 food units available.
Saturday - Net 6 food units available.
Sunday - 6 food units available and that is not sufficient amount of food units to survive and you can't buy more on Sunday.</span></pre>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ N, S ≤ 50<br>1 ≤ M ≤ 30</span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Greedy</code>&nbsp;<code>Puzzles</code>&nbsp;