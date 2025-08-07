length = int(input())
key = input()

characters = list(key)
result = [characters[0]]

for i in range(1, len(characters)):
    if characters[i] != characters[i - 1]:
        result.append(characters[i])

print(''.join(result))
