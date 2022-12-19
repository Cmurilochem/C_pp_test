import time

start_time = time.time()

n=100000
add=1
sum=0

for i in range(1,n+1):
    for j in range(1,n+1):
        sum=sum+add
        
end_time = time.time()

final_time = (end_time - start_time)

print(sum)
print("CPU TIME (IN SECONDS): ", final_time)
          
