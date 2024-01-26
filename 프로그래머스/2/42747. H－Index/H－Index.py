def solution(citations):
    citations.sort(reverse=True)
    n = len(citations)

    for i, citation in enumerate(citations, start=1):
        if citation <= i:
            return max(citation,i-1)
    else:
        return n