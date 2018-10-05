from div_three import by_three

true_divisors=[]
for i in range(1000):
    truth_in_divisibility=by_three(7432985,i+1)
    if (truth_in_divisibility):
        true_divisors.append(i+1)
print true_divisors

