# Leetcode-02-JiuZhang-Algorithm-Advanced-Course
九章算法强化班

## Chapter 1

### Two sum 及其 follow up question

- [Two sum](https://leetcode.com/problems/two-sum/)
  - Solutions
    - 1. Hash + 查询
    - 2. 排序 + 两个指针扫描
    - 3. 暴力遍历


- [Two sum ii](http://www.lintcode.com/zh-cn/problem/two-sum-ii/)
  - Given an array of integers, count the number of pairs that this pair's two numbers sum is **larger than** target number.
  - Tips
    - 难以用Hash，因为Hash只能查找‘==’
    - 寻找‘>’的数据结构
      - 线段树
      - 平衡二叉树（ACL/红黑树）
    - 双指针O(n^2)遍历其实在遍历上三角，但排序后就不用遍历整个上三角
    
  - Solutions
    - 1. Hash + 查询 -> 线段树（平衡二叉树) + 查询
    - 2. 排序 + 两个指针扫描 -> 排序 + 两个指针
      - 时间复杂度O(nlogn + n)，空间复杂度O(1)，因为不需要用另一个数组保存下标。
 

- [Valid Triangle Number](https://leetcode-cn.com/problems/valid-triangle-number/)
  - 参考Two sum ii

- 同类题目
  - 3 Sum Closest 
  - 4 Sum 
  - 3 Sum
  - Two sum II
  - Triangle Count
  - Trapping Rain Water
  - Container With Most Water
  
- 解题思路
  - 通过对撞型指针优化算法，根本上是要跳过不用扫描多余状态。

### 并查集

- 并查集
  - 合并
  - 查找
  - 应用题目
    - 集合合并（连通分量的合并）
    - 判断是否在同一个集合中
  
- 有向图/无向图
  - 强连通
  - 弱连通
    - 应用**广度有限搜索**查找**有向图**中连通分量的个数
    - 应用**并查集**查找**无向图**中弱连通分量的个数
