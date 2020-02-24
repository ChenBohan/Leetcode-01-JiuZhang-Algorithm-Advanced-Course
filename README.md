# Leetcode-01-JiuZhang-Algorithm-Advanced-Course
九章算法强化班

## Chapter 1

### Two sum and Two sum ii

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
  - Solutions
    - 1. Hash + 查询 -> 线段树（平衡二叉树) + 查询
    - 2. 排序 + 两个指针扫描 -> 排序 + 两个指针

    


