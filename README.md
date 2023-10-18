# LIBFT


# Sobre o projeto

O projeto Libft é o ponto de partida do Common Core na 42, com o principal objetivo de criar uma biblioteca estática que contém 43 funções essenciais.

Essas funções são projetadas para auxiliar na manipulação de strings, estruturas (structs) e alocação de memória, além de 
incluir funcionalidades relacionadas a saída (output). A biblioteca Libft é uma ferramenta fundamental que os estudantes 
da 42 utilizam como base para desenvolver futuros projetos, aprimorando suas habilidades de programação em C. 

## Subject
  [SUBJECT](https://github.com/diegosou4/libft/blob/main/en.subject.pdf)

## Lista de Funcoes
• [isalpha](https://github.com/diegosou4/libft/blob/main/ft_isalpha.c) • [isdigit](https://github.com/diegosou4/libft/blob/main/ft_isdigit.c)
• [isalnum](https://github.com/diegosou4/libft/blob/main/ft_isalnum.c) • [isascii](https://github.com/diegosou4/libft/blob/main/ft_isascii.c)
• [isprint](https://github.com/diegosou4/libft/blob/main/ft_isprint.c) • [strlen](https://github.com/diegosou4/libft/blob/main/ft_strlen.c)
• [memset](https://github.com/diegosou4/libft/blob/main/ft_memset.c) • [bzero](https://github.com/diegosou4/libft/blob/main/ft_bzero.c)
• [memcpy](https://github.com/diegosou4/libft/blob/main/ft_memcpy.c) • [memmove](https://github.com/diegosou4/libft/blob/main/ft_memmove.c)
• [strlcpy](https://github.com/diegosou4/libft/blob/main/ft_strlcpy.c) • [strlcat](https://github.com/diegosou4/libft/blob/main/ft_strlcat.c)
• [toupper](https://github.com/diegosou4/libft/blob/main/ft_toupper.c) • [tolower](https://github.com/diegosou4/libft/blob/main/ft_tolower.c)
• [strchr](https://github.com/diegosou4/libft/blob/main/ft_strchr.c) • [strrchr](https://github.com/diegosou4/libft/blob/main/ft_strrchr.c)
• [strncmp](https://github.com/diegosou4/libft/blob/main/ft_strncmp.c) • [memchr](https://github.com/diegosou4/libft/blob/main/ft_memchr.c)
• [memcmp](https://github.com/diegosou4/libft/blob/main/ft_memcmp.c) • [strnstr](https://github.com/diegosou4/libft/blob/main/ft_strnstr.c)
• [atoi](https://github.com/diegosou4/libft/blob/main/ft_atoi.c) • [calloc](https://github.com/diegosou4/libft/blob/main/ft_calloc.c)
• [strdup](https://github.com/diegosou4/libft/blob/main/ft_strdup.c) • [substr](https://github.com/diegosou4/libft/blob/main/ft_substr.c)
• [strjoin](https://github.com/diegosou4/libft/blob/main/ft_strjoin.c) • [strtrim](https://github.com/diegosou4/libft/blob/main/ft_strtrim.c)
• [split](https://github.com/diegosou4/libft/blob/main/ft_split.c) • [itoa](https://github.com/diegosou4/libft/blob/main/ft_itoa.c)
• [strmapi](https://github.com/diegosou4/libft/blob/main/ft_strmapi.c) • [striteri](https://github.com/diegosou4/libft/blob/main/ft_striteri.c)
• [putchar_fd](https://github.com/diegosou4/libft/blob/main/ft_putchar_fd.c) • [putstr_fd](https://github.com/diegosou4/libft/blob/main/ft_putstr_fd.c)
• [putendl_fd](https://github.com/diegosou4/libft/blob/main/ft_putendl_fd.c) • [putnbr_fd](https://github.com/diegosou4/libft/blob/main/ft_putnbr_fd.c)


## Bonus
• [lstnew](https://github.com/diegosou4/libft/blob/main/ft_lstnew.c) • [lstadd_front](https://github.com/diegosou4/libft/blob/main/ft_lstadd_front.c)
• [lstsize](https://github.com/diegosou4/libft/blob/main/ft_lstsize.c) • [lstlast](https://github.com/diegosou4/libft/blob/main/ft_lstlast.c)
• [lstadd_back](https://github.com/diegosou4/libft/blob/main/ft_lstadd_back.c) • [lstdelone](https://github.com/diegosou4/libft/blob/main/ft_lstdelone.c)
• [lstclear](https://github.com/diegosou4/libft/blob/main/ft_lstclear.c) • [lstiter](https://github.com/diegosou4/libft/blob/main/ft_lstiter.c)
• [lstmap](https://github.com/diegosou4/libft/blob/main/ft_lstmap.c)

## Resultado
![Resultado](https://i.imgur.com/tsOITka.png)


# Como executar o projeto


```bash
# clonar repositório
git clone https://github.com/diegosou4/libft Libft

# entrar na pasta do projeto 
cd Libft

# Execute o comando para gerar a livraria
make

# Execute o comando para adicionar o bonus caso for usar funcoes de stuct
make bonus

# Para usar a livraria coloque o include "libf.h" no cabecario da sua main
# E na hora de copilar
gcc main.c libft.a

# Comando para apagar a livraia
make fclean
```


# Autor

Diego Moreira Sardinha de Souza

- C
- C++
