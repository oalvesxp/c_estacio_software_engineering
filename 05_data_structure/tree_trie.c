#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define ALPHABET_SIZE 26

struct TrieNode {
  struct TrieNode* children[ALPHABET_SIZE];
  bool isEndOfWord;
};

/**
 * Creates a new Trie node 
 */
struct 
TrieNode* createNode() {
  struct TrieNode* node = (struct TrieNode*) malloc(sizeof(struct TrieNode));
  node->isEndOfWord = false;

  for (int i = 0; i < ALPHABET_SIZE; i++){
    node->children[i] = NULL;
  }

  return node;
}

/**
 * Inserts a word into the Trie
 */
void
insert(struct TrieNode* root, const char* word) {
  struct TrieNode* currentNode = root;

  for (int i = 0; word[i]; i++) {
    int index = word[i] - 'a';

    if (currentNode->children[index] == NULL) {
      currentNode->children[index] = createNode();
    }

    currentNode = currentNode->children[index];
  }

  currentNode->isEndOfWord = true;
}

/**
 * Searches for a word in the Trie
 */
bool
search(struct TrieNode* root, const char* word) {
  for(int i = 0; word[i]; i++) {
    int index = word[i] - 'a';

    if (root->children[index] == NULL) {
      return false;
    }

    root = root->children[index];  
  }

  return currentNode != NULL && currentNode->isEndOfWord;
}

/** 
 * Lists all words in the trie in order
 */
void
listWords(struct TrieNode* root, char* buffer, int depth) {
  if (root->isEndOfWord) {
    buffer[depth] = '\0';
    printf("%s\n", buffer);
  }

  for (int i = 0; i < ALPHABET_SIZE; i++) {
    if (root->children[i]) {
      buffer[depth] = 'a' + i;
      listWords(root->children[i], buffer, depth + 1);
    }
  }
}

int main() {
  struct TrieNode* root = createNode();
  insert(root, "hello");
  insert(root, "hi");
  insert(root, "hey");
  insert(root, "world");

  char buffer[100];
  listWords(root, buffer, 0);

  return 0;
}
