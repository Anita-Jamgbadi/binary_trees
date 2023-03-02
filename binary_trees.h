#ifndef BINARY_TREES_H
#define BINARY_TREES_H

#include <stdlib.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <math.h>
#include <limits.h>

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
typedef struct binary_tree_s bst_t;
typedef struct binary_tree_s avl_t;
typedef struct binary_tree_s heap_t;

/* Print */
void binary_tree_print(const binary_tree_t *tree);
/* 0 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
/* 1 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
/* 2 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
/* 3 */
void binary_tree_delete(binary_tree_t *tree);
/* 4 */
int binary_tree_is_leaf(const binary_tree_t *node);
/* 5 */
int binary_tree_is_root(const binary_tree_t *node);
/* 6 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));
/* 7 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));
/* 8 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));
/* 9 */
size_t binary_tree_height(const binary_tree_t *tree);
/* 10 */
size_t binary_tree_depth(const binary_tree_t *tree);
/* 11 */
size_t binary_tree_size(const binary_tree_t *tree);
/* 12 */
size_t binary_tree_leaves(const binary_tree_t *tree);
/* 13 */
/* 14 */
/* 15 */
/* 16 */
/* 17 */
/* 18 */
/* 19 */
/* 20 */
/* 21 */
/* 22 */
/* 23 */
/* 24 */
#endif
