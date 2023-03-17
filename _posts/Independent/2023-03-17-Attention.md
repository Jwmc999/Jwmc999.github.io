---
layout: post
title: "Attention Mechanism"
permalink: /Attention/
---
A self-attention module works by **comparing every word in the sentence to every other word in the sentence, including itself**, and **reweighing the word embeddings of each word to include contextual relevance**. It takes in *n* word embeddings without context and returns *n* word embeddings with contextual information.

The Self-attention block is comprised of three steps/parts:

1. Dot product similarity to find alignment scores 
2. Normalization of the scores to get the weights
3. Reweighing of the original embeddings using the weights

### Why compare to itself?

**words usually have more than one meaning**, and in order for the model to recognize which meaning of the word it should pay attention to, we must compare words to themselves by including them in the dot product similarity.

if the **semantic meaning of both words differs, then the alignment score won’t be high**, the words will have a low correspondence, **and each word will pay low attention to each other** so the original word embeddings of each word won’t change too much.

the weights at three locations: the **input word embeddings**, the **dot product similarity comparison**, and the **final step of reweighing the word embeddings.**

[back]({% link _posts/Independent/2023-03-17-BERT.md %})