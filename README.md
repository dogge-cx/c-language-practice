# c-language-practice

狗哥（2610班 · 广外计科）的 C 语言练习仓库 🐙

大学四年代码作品集的起点。把每一道 C 语言题、每一次课设都存进来，养成「写一段就 commit」的习惯——开学你就是有 GitHub 积累的人。

- 仓库地址：https://github.com/dogge-cx/c-language-practice
- 作者：`dogge-cx`

## 目录结构

| 目录 | 用途 |
|------|------|
| `pta/` | PTA 基础编程题目集刷题，文件名带题号，如 `pta_1001.c` |
| `luogu/` | 洛谷题单刷题（按入门1→6 顺序），文件名用题号，如 `B2001.c` |
| `homework/` | 课程作业 / 课设 |
| `notes/` | C 语言学习笔记、易错点整理 |
| `examples/` | 经典例题（如 π 近似计算 `pi_approx.c`） |

## 日常使用（写完代码就推）

```bash
git add .
git commit -m "PTA 1001 题解"
git push
```

> ⚠️ 新开 PowerShell 窗口时，git 不在系统 PATH 里，先跑这行：
> ```powershell
> $env:PATH = "C:\Users\qq158\.workbuddy\vendor\PortableGit\mingw64\bin;" + $env:PATH
> ```

## Git 网络配置备忘（国内环境）

已配好，一般不用再动：

```bash
http.sslBackend = openssl     # 用 OpenSSL 校验，避开 Windows schannel 的证书坑
http.sslVerify = false        # 跳过证书验证（Watt Toolkit hosts 加速导致证书不匹配）
```

**使用前提**：开着 **Watt Toolkit** 并启用 GitHub 加速，否则连不上。

## 后续想解锁的技能

- [ ] 改崩了回退：`git log` 找版本号 → `git reset --hard 版本号`
- [ ] 开新分支试写法：`git checkout -b 分支名`
- [ ] 解决多人改同一文件的冲突
- [ ] 配 SSH key（不用开加速器也能推代码）
