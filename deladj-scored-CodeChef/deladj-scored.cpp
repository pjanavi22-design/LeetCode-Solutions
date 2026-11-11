import heapq

t = int(input())

for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))

    total = sum(a)
    heap = []

    for i in range(n):
        heapq.heappush(heap, -a[i])

        if len(heap) > (i + 1) // 2:
            heapq.heappop(heap)

    ans = total + 2 * sum(heap)

    print(ans)



// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna