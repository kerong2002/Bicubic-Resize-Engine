# Bicubic-Resize-Engine
![Bicubic](https://github.com/kerong2002/Bicubic-Resize-Engine/blob/main/test.png)


```math

p(x) = ax^3 + bx^2 + cx = d \\

p(0) = d \\

p(1) = a + b + c + d \\

p'(x) = 3ax^2 + 2bx + c \\

p'(0) = c = \frac{p(1) - p(-1)}{2} \\

p'(1) = 3a + 2b +c = \frac{p(2) - p(0)}{2} \\

\left\{\begin{matrix}

\begin{align*}

a &= \frac{3p(0)+p(2)-3p(1)-p(-1)}{2} \\

b &= p(-1) + 2p(1) - \left(\frac{5p(0)+p(2)}{2}\right) \\

c &= \frac{1}{2}p(1)-\frac{1}{2}p(-1) \\

d &= p(0)

\end{align*}

\end{matrix}\right.


```

![Bicubic x2](https://github.com/kerong2002/Bicubic-Resize-Engine/raw/main/bicubic_x2.PNG)

![Bicubic x6](https://github.com/kerong2002/Bicubic-Resize-Engine/raw/main/bicubic_x6.PNG)

![Bicubic x10](https://github.com/kerong2002/Bicubic-Resize-Engine/raw/main/bicubic_x10.PNG)
