/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_libft_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iriadyns <iriadyns@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 13:09:45 by iriadyns          #+#    #+#             */
/*   Updated: 2024/10/11 13:00:32 by iriadyns         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void	test_ft_lstnew()
{
	char *content1 = "Test Node 1";
	int   num = 42;

	t_list *node1 = ft_lstnew(content1);
	if (node1 != NULL && node1->content == content1 && node1->next == NULL)
		printf("Test 1 Passed: Content = %s, Next = %p\n", (char *)node1->content, (void *)node1->next);
	else
		printf("Test 1 Failed!\n");
	t_list *node2 = ft_lstnew(&num);
	if (node2 != NULL && *(int *)(node2->content) == 42 && node2->next == NULL)
		printf("Test 2 Passed: Content = %d, Next = %p\n", *(int *)(node2->content), (void *)node2->next);
	else
		printf("Test 2 Failed!\n");
	free(node1);
	free(node2);
}

void	test_ft_lstadd_front()
{
	printf("\n");
	t_list *node1 = ft_lstnew("Node 1");
	t_list *node2 = ft_lstnew("Node 2");
	t_list *node3 = ft_lstnew("Node 3");
	t_list *list = NULL;

	ft_lstadd_front(&list, node1);
	ft_lstadd_front(&list, node2);
	ft_lstadd_front(&list, node3);
	if (list == node3 && list->next == node2 && list->next->next == node1 && list->next->next->next == NULL)
		printf("Test Passed: List order is correct.\n");
	else
		printf("Test Failed!\n");
	free(node1);
	free(node2);
	free(node3);
	printf("\n");
}

void test_ft_lstsize()
{
	t_list *node1 = ft_lstnew("Node 1");
	t_list *node2 = ft_lstnew("Node 2");
	t_list *node3 = ft_lstnew("Node 3");
	t_list *list = NULL;
	int size_empty = ft_lstsize(list);

	printf("Test Empty List: Expected = 0, Actual = %d\n", size_empty);
	ft_lstadd_front(&list, node1);
	ft_lstadd_front(&list, node2);
	ft_lstadd_front(&list, node3);

	int size_non_empty = ft_lstsize(list);

	printf("Test Non-Empty List: Expected = 3, Actual = %d\n", size_non_empty);
	free(node1);
	free(node2);
	free(node3);
	printf("\n");
}

void	test_ft_lstlast()
{
	t_list *node1 = ft_lstnew("Node 1");
	t_list *node2 = ft_lstnew("Node 2");
	t_list *node3 = ft_lstnew("Node 3");
	t_list *list = NULL;
	t_list *last_empty = ft_lstlast(list);

	if (last_empty == NULL)
		printf("Test Empty List: Passed (last node is NULL)\n");
	else
		printf("Test Empty List: Failed!\n");
	ft_lstadd_front(&list, node1);
	ft_lstadd_front(&list, node2);
	ft_lstadd_front(&list, node3);

	t_list *last_node = ft_lstlast(list);

	if (last_node == node1 && last_node->content == node1->content)
		printf("Test Non-Empty List: Passed (last node content = %s)\n", (char *)last_node->content);
	else
		printf("Test Non-Empty List: Failed!\n");
	free(node1);
	free(node2);
	free(node3);
	printf("\n");
}

void	test_ft_lstadd_back()
{
	t_list *node1 = ft_lstnew("Node 1");
	t_list *node2 = ft_lstnew("Node 2");
	t_list *node3 = ft_lstnew("Node 3");
	t_list *list = NULL;

	ft_lstadd_back(&list, node1);
	if (list == node1 && list->next == NULL)
		printf("Test Add to Empty List: Passed\n");
	else
		printf("Test Add to Empty List: Failed!\n");
	ft_lstadd_back(&list, node2);
	ft_lstadd_back(&list, node3);
	if (list == node1 && list->next == node2 && list->next->next == node3 && list->next->next->next == NULL)
		printf("Test Add to Non-Empty List: Passed\n");
	else
		printf("Test Add to Non-Empty List: Failed!\n");
	free(node1);
	free(node2);
	free(node3);
	printf("\n");
}

void	del(void *content)
{
	free(content);
}

void	test_ft_lstdelone()
{
	char *content = malloc(10 * sizeof(char));

	if (!content)
		return;
	snprintf(content, 10, "Test");

	t_list *node = ft_lstnew(content);

	if (node)
	{
		printf("Node created with content: %s\n", (char *)node->content);
	}
	ft_lstdelone(node, del);
	printf("Node deleted successfully.\n");
	printf("\n");
}

void	test_ft_lstclear()
{
	char *content1 = malloc(10 * sizeof(char));
	char *content2 = malloc(10 * sizeof(char));
	char *content3 = malloc(10 * sizeof(char));
	if (!content1 || !content2 || !content3)
		return;
	snprintf(content1, 10, "Node 1");
	snprintf(content2, 10, "Node 2");
	snprintf(content3, 10, "Node 3");

	t_list *node1 = ft_lstnew(content1);
	t_list *node2 = ft_lstnew(content2);
	t_list *node3 = ft_lstnew(content3);

	node1->next = node2;
	node2->next = node3;
	if (node1 && node2 && node3)
	{
		printf("List created: %s -> %s -> %s\n", (char *)node1->content, (char *)node2->content, (char *)node3->content);
	}
	ft_lstclear(&node1, del);
	if (!node1)
	{
		printf("List cleared successfully.\n");
	}
	else
	{
		printf("List clearing failed.\n");
	}
	printf("\n");
}

void	print_content(void *content)
{
	printf("%s\n", (char *)content);
}

void	test_ft_lstiter()
{
	char *content1 = malloc(10 * sizeof(char));
	char *content2 = malloc(10 * sizeof(char));
	char *content3 = malloc(10 * sizeof(char));

	if (!content1 || !content2 || !content3)
		return;
	snprintf(content1, 10, "Node 1");
	snprintf(content2, 10, "Node 2");
	snprintf(content3, 10, "Node 3");

	t_list *node1 = ft_lstnew(content1);
	t_list *node2 = ft_lstnew(content2);
	t_list *node3 = ft_lstnew(content3);

	node1->next = node2;
	node2->next = node3;
	if (node1 && node2 && node3)
	{
		printf("Applying function to list:\n");
		ft_lstiter(node1, print_content);
	}
	ft_lstclear(&node1, free);
	printf("\n");
}

void	*duplicate_content(void *content)
{
	char *new_content = ft_strdup((char *)content);
	return (new_content);
}

void	test_ft_lstmap()
{
	char *content1 = ft_strdup("Node 1");
	char *content2 = ft_strdup("Node 2");
	char *content3 = ft_strdup("Node 3");

	t_list *node1 = ft_lstnew(content1);
	t_list *node2 = ft_lstnew(content2);
	t_list *node3 = ft_lstnew(content3);

	node1->next = node2;
	node2->next = node3;
	if (node1 && node2 && node3)
	{
		printf("Original list:\n");
		ft_lstiter(node1, (void (*)(void *))puts);

		t_list *new_list = ft_lstmap(node1, duplicate_content, del);

		if (new_list)
		{
			printf("\nMapped list:\n");
			ft_lstiter(new_list, (void (*)(void *))puts);
		}
		ft_lstclear(&node1, del);
		ft_lstclear(&new_list, del);
	}
}

int	main(void)
{
	test_ft_lstnew();
	test_ft_lstadd_front();
	test_ft_lstsize();
	test_ft_lstlast();
	test_ft_lstadd_back();
	test_ft_lstdelone();
	test_ft_lstclear();
	test_ft_lstiter();
	test_ft_lstmap();
	return (0);
}
