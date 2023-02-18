import sys
n = int(sys.stdin.readline().strip())

# Initialize an adjacency list with n+1 empty lists
adj_list = [[] for i in range(n+1)]

# For each integer in the range [1, n-1], read in an integer a and append j to adj[a]
for j in range(1, n):
    a = int(sys.stdin.readline().strip())
    adj_list[a].append(j)

ans = 0

# Define a function calc that takes a current node and returns the number of nodes in its subtree
def calc(current_node):
    # If the current node has no children, return 1
    if len(adj_list[current_node]) == 0:
        return 1
    else:
        # Otherwise, initialize count to 1 and multiply it by the result of calc(node)+1 for each child node
        count = 1
        for node in adj_list[current_node]:
            count *= (calc(node)+1)
        # Return the final count
        return count

print(calc(n))
