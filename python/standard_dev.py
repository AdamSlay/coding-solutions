players = [180, 172, 178, 185, 190, 195, 192, 200, 210, 190]

# Standard Deviation Formula
diff = []
mean = sum(players) / len(players)
for i in players:
    diff.append(abs(mean - i) ** 2)
sd = (sum(diff) / len(diff)) ** 0.5

# determine number values within 1 standard deviate of the mean
n = []
for i in players:
    if abs(mean - i) <= sd:
        n.append(i)
print(sd)
