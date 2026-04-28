---
# 💜 Week 01: The Mario Pyramid Challenge 💜
---

<p align="center">
  <img src="https://readme-typing-svg.demolab.com?font=Fira%20Code&pause=1000&color=bd93f9&width=439&lines=Building+Pyramids+with+C...+%F0%9F%9B%A0%EF%B8%8F" />
</p>

<p align="center">
  <img src="https://img.shields.io/badge/Language-C-6f42c1?style=for-the-badge&logo=c&logoColor=white" />
  <img src="https://img.shields.io/badge/Difficulty-Intermediate-6f42c1?style=for-the-badge&logo=appveyor&logoColor=white" />
</p>

<p align="center">
  <em>"Where constraints meet precision, and code builds structures."</em>
</p>

---

## 🏗️ **The Challenge: Architecting with Code**

This assignment pushed the boundaries of **loop logic** and **input validation** in C. The objective was to recreate the iconic Mario pyramid structure, scaling in complexity from a single-sided pyramid to the advanced double-pyramid structure.

---

### 📋 **Core Requirements**

1.  **Input Validation:**
    *   Prompt the user for a height between **1 and 8**.
    *   Strictly reject any non-integer or out-of-bounds input using a `do-while` loop.

2.  **Structural Symmetry:**
    *   Construct pyramids using the `#` character.
    *   Ensure perfect alignment of spaces and hashes for both the left and right slopes.

3.  **Advanced Logic (Mario More):**
    *   Incorporate a **two-space gap** between the left and right pyramids.
    *   Ensure the structure scales dynamically based on the input variable `height`.

---

### 🎨 **Visual Output Expectations**

The program generates the structure dynamically. For an input height of **4**, the output is as follows:
```text
   #  #
  ##  ##
 ###  ###
####  ####
```

<details>
<summary style="color: #bd93f9; font-weight: bold; cursor: pointer;">
  👉 Show Implementation Details & Strategy 👈
</summary>

<div style="background-color: #1e1e2e; padding: 15px; border-radius: 8px; border: 1px solid #6f42c1; color: #ffffff; margin-top: 10px;">
  
  <h3>🛠️ My Implementation Strategy</h3>
  <p>To achieve this, I utilized a <strong>nested loop architecture</strong>:</p>
  <ul>
    <li><strong>Outer Loop:</strong> Controls the total rows (height).</li>
    <li><strong>Inner Loop 1:</strong> Manages the leading spaces (to align the pyramid to the right).</li>
    <li><strong>Inner Loop 2:</strong> Handles the <code>#</code> characters for the first pyramid.</li>
    <li><strong>Fixed Gap:</strong> Inserts the required two-space <code>  </code> bridge.</li>
    <li><strong>Inner Loop 3:</strong> Mirrors the hash structure for the right pyramid.</li>
  </ul>

  <hr style="border-color: #6f42c1;">

  <p><strong>Logic Approach:</strong> Modularized loops to ensure O(n²) complexity control.</p>
  
  <p><strong>Snapshot of Output Structure:</strong></p>
  <p align="center">
    <img src="https://via.placeholder.com/600x200/282a36/bd93f9?text=Insert+Your+Actual+Screenshot+Here" alt="Mario Pyramid Output" style="border-radius: 5px; max-width: 100%;">
  </p>
  
  <p align="center">
    <em>The structure scales dynamically based on user input.</em>
  </p>

</div>

</details>

---

<div style="background-color: #282a36; padding: 15px; border-radius: 8px; border: 1px solid #6f42c1; color: #ffffff;">
  <h3>🚀 Ready for Submission</h3>
  <p>The logic is optimized, the input is secured, and the structure is pixel-perfect.</p>
  <p align="center">
    <b><i>"Code your way to the top."</i></b>
  </p>
</div>
