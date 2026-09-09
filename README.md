# c-language-practice

狗哥（2610班 · 广外计科）的 C 语言练习仓库 🐙

大学四年代码作品集的起点。把每一道 C 语言题、每一次课设都存进来，养成「写一段就 commit」的习惯——开学你就是有 GitHub 积累的人。

## 目录结构

| 目录 | 用途 |
|------|------|
| `pta/` | PTA 基础编程题目集刷题，文件名带题号，如 `pta_1001.c` |
| `homework/` | 课程作业 / 课设 |
| `notes/` | C 语言学习笔记、易错点整理 |
| `examples/` | 经典例题（如 π 近似计算 `pi_approx.c`） |

## 日常使用（写完代码就推）

```bash
git add .
git commit -m "PTA 1001 题解"
git push
```

## 下一步：推到 GitHub

1. 在 [github.com](https://github.com) 新建同名仓库 `c-language-practice`（Public，勾 Add README）。
2. 在本仓库目录关联远程并推送：

```bash
git remote add origin https://github.com/你的用户名/c-language-practice.git
git branch -M main
git push -u origin main
```

3. 首次 push 用 **Personal Access Token** 当密码（GitHub 设置 → Developer settings 里生成，别用登录密码）。

> ⚠️ **重要**：本仓库的 git 用户名/邮箱目前是占位值，请改成你 GitHub 注册的信息，否则贡献不计入你的账号：
> ```bash
> git config user.name "你的名字"
> git config user.email "你的GitHub注册邮箱"
> ```
> （想全局生效就加 `--global`）
