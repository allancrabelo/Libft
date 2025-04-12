![Design sem nome (3)](https://github.com/user-attachments/assets/ae8abc52-38ee-40c8-9233-e07b7ac33f45)

# 📚 42 School - Libft

Libft is a library developed in pure C that reimplements fundamental functions of the libc from scratch. This project goes beyond a mere technical exercise — it represents a deep understanding of pointer concepts, dynamic memory allocation, memory manipulation, and data structures.

Built under strict coding constraints, Libft serves as the backbone for robust C applications, acting as a solid foundation for environments without native standard library support.

More than just a collection of functions, Libft is a low-level laboratory where every line of code is written with precision, predictability, and efficiency — exactly as real-world systems require.

# 🏅 125% Performance in the Project

During the Libft project evaluation, I achieved the maximum score of 125%, a result of delivering all mandatory and bonus functionalities in full, while excellently meeting all required technical criteria, including:

    ✅ Correct and optimized implementation of all functions

    ✅ Full compliance with Norminette standards

    ✅ Zero memory leaks (Valgrind clean)

    ✅ Inclusion of bonus functionalities, such as linked list manipulation

  This score reflects not only technical mastery but also commitment to code quality, readability, and performance — fundamental pillars for low-level projects.

<p align="center">
  <img src="https://github.com/user-attachments/assets/1dae4946-6c1a-4e37-9d2e-eaf0fda7858e" alt="Imagem" />
</p>

## 📚 Key Features

### 🔹 Level 1 – LibC Core Re-implementations

- **Memory Operations**: `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memcmp`, `ft_memchr`
- **String Operations**: `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strdup`
- **Character Checks**: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`
- **Type Conversions**: `ft_toupper`, `ft_tolower`, `ft_atoi`
- **Memory Allocation**: `ft_calloc`

### 🔹 Level 2 – Utility Functions

- Substring and trimming utilities: `ft_substr`, `ft_strjoin`, `ft_strtrim`
- Tokenizer: `ft_split`
- Integer-to-ASCII: `ft_itoa`
- Higher-order functions: `ft_strmapi`, `ft_striteri`
- File descriptor output: `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

### 🔹 Bonus – Linked List API

- Creation and manipulation: `ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`
- Inspection: `ft_lstsize`, `ft_lstlast`
- Deletion & iteration: `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`
## ⚙️ Build & Usage

```bash
make        # Builds the static library libft.a
make clean  # Removes object files
make fclean # Cleans everything, including the binary
make re     # Rebuilds from scratch
```
# 📁 Project Structure
    📦 libft  
    ┣ 📜 libft.h  
    ┣ 📜 Makefile  
    ┣ 📂 src  
    ┃ ┣ 📜 ft_memset.c  
    ┃ ┣ 📜 ft_bzero.c  
    ┃ ┣ 📜 ft_strncmp.c  
    ┃ ┗ 📜 ...
    ┣ 📂 bonus  
    ┃ ┣ 📜 ft_lstnew.c  
    ┃ ┣ 📜 ft_lstadd_front.c  
    ┃ ┗ 📜 ...  
    ┃ ┣ 📜 *.o  
    ┃ ┗ 📜 ...  
    ┗ 📦 libft.a  

# 🚧 Tutorials (Coming Soon)

I'm currently working on a detailed tutorial to help others navigate the 42 Piscine Reloaded project more efficiently. This section will include:

    📹 Video Guide – A step-by-step walkthrough explaining key concepts and solutions.
    📄 PDF Guide – A structured document with explanations, tips, and best practices.

Stay tuned! The tutorial will be available soon. 🚀

# 🤝 Contributing

If you are also doing the Piscine, feel free to suggest improvements or share new approaches!

    📬 Contact: If you want to discuss solutions or exchange ideas, find me on Discord or GitHub!
