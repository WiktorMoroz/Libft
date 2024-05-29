/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmoroz <wmoroz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 14:00:25 by wmoroz            #+#    #+#             */
/*   Updated: 2024/03/06 14:32:50 by wmoroz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_word_count(const char *str, char c);
static char	*ft_fill_word(const char *str, int start, int end);
static void	*ft_free(char **strs, int count);
static void	ft_setting_vars(size_t *i, int *j, int *s_word);

char	**ft_split(const char *s, char c)
{
	char	**res;
	size_t	i;
	int		j;
	int		s_word;

	ft_setting_vars(&i, &j, &s_word);
	res = ft_calloc((ft_word_count(s, c) + 1), sizeof(char *));
	if (!res)
		return (NULL);
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && s_word < 0)
			s_word = i;
		else if ((s[i] == c || i == ft_strlen(s)) && s_word >= 0)
		{
			res[j] = ft_fill_word(s, s_word, i);
			if (!(res[j]))
				return (ft_free(res, j));
			s_word = -1;
			j++;
		}
		i++;
	}
	return (res);
}

static void	ft_setting_vars(size_t *i, int *j, int *s_word)
{
	*i = 0;
	*j = 0;
	*s_word = -1;
}

static void	*ft_free(char **strs, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(strs[i]);
		i++;
	}
	free(strs);
	return (NULL);
}

static char	*ft_fill_word(const char *str, int start, int end)
{
	char	*word;
	int		i;

	i = 0;
	word = (char *)malloc((end - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (start < end)
	{
		word[i] = str[start];
		i++;
		start++;
	}
	word[i] = 0;
	return (word);
}

static int	ft_word_count(const char *str, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (*str)
	{
		if (*str != c && i == 0)
		{
			i = 1;
			count++;
		}
		else if (*str == c)
			i = 0;
		str++;
	}
	return (count);
}

// Sprawdzenie, czy aktualny znak nie jest separatorem i jednocześnie
// nie zaczęło się nowe słowo
// Przypisanie do tablicy rezultatów słowa pomiędzy
// aktualnym indeksem początku słowa (s_word) a aktualnym indeksem (i).
// Wartość tej tablicy to napis reprezentujący jedno słowo.
// Resetowanie indeksu początku słowa, aby przygotować się na kolejne słowo.
// Zwiększenie indeksu tablicy rezultatów, aby wypełnić kolejne słowo.
/*#include "libft.h"
#include <stdio.h>

// Dodaj deklarację funkcji strlen
size_t		ft_strlen(const char *s);

int	main(void)
{
	const char *input_string = "Hello,World,This,Is,My,Test";
	char **result = ft_split(input_string, ',');

	if (result)
	{
		for (int i = 0; result[i] != NULL; i++)
		{
			printf("Word %d: %s\n", i + 1, result[i]);
			free(result[i]);
		}
		free(result);
	}
	else
	{
		printf("Allocation error.\n");
	}

	return (0);
}*/
