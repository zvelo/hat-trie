SET(SOURCES
	ahtable.c
	hat-trie.c
	misc.c
	murmurhash3.c)
ADD_LIBRARY(hat-trie ${SOURCES})
INSTALL(
	TARGETS hat-trie
	LIBRARY DESTINATION lib
	ARCHIVE DESTINATION lib
	PUBLIC_HEADER DESTINATION include/hat-trie
)
