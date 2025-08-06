# DSA 2.0


# BigData Codes:
## p2: Word Count
```python
from collections import defaultdict    

data = [
    "jai baba ki",
    "jai mata ki",
    "mata ji"
    "Map Reduce program written in SRM",
    "Hello BCA students again",  
]

def mapper(line):
    for word in line.strip().lower().split():
        yield (word,  1)


def reducer(pairs):
    counts = defaultdict(int)
    for word, count in pairs:
        counts[word] += count
    return counts

def run_mapreduce(data):
    mapped = []
    for line in data:
        mapped.extend(mapper(line))
    
    shuffled = defaultdict(list)
    for word, count in mapped:
        shuffled[word].append(count)
    reduced = {}
    for word, counts in shuffled.items():
        reduced[word] = sum(counts)

    return reduced

if __name__ == "__main__":
    result = run_mapreduce(data)
    for word in sorted(result):
        print(f"{word}\t{result[word]}")

```
## p3: Max Temp
```python
data = [
    "2018,18",
    "2019,35",
    "2019,18",
    "2020,35",
    "2020,48",
    "2021,40",
    "2021,42",
    "2021,45",
    "2022,41",
    "2022,37",
    "2023,36",
    "2023,45",
    "2024,42",
    "2025,39",
    "2025, 44",
]

from collections import defaultdict

def mapper(record):
    year, temp = record.split(",")
    return year, int(temp)

def reducer(mapped_data):
    
    max_temps = defaultdict(lambda: float('-inf'))

    for year, temp in mapped_data:
        if temp > max_temps[year]:
            max_temps[year] = temp
    return max_temps


mapped = [mapper(record) for record in data]

result = reducer(mapped) 

for year in sorted(result):
    print(f"{year}: {result[year]}°C")

```
## p4: Grade Distbn
```python
from pyspark import SparkContext
sc = SparkContext()

data = [("Raju", 71), ("Hemu", 85), ("Vivek", 91), ("Ujjwal", 95), ("Raj", 48)]

rdd = sc.parallelize(data)

def assign_grade(student_data):
  student_id, marks = student_data
  if marks >= 90:
    grade = "A";
  elif marks >= 80:
    grade = "B"
  elif marks >= 70:
    grade = "C"
  elif marks >= 60:
    grade = "D"
  else:
    grade = "F"
  return (student_id, grade)

graded_rdd = rdd.map(assign_grade)

results = graded_rdd.collect()
for student, grade in results:
  print(f"{student}: {grade}")

sc.stop()
```
## p5: Matrix Multiplication
```python
from pyspark import SparkContext
def main():
    sc = SparkContext("local", "Matrix Multiplication")
    A = [
        (0, [1, 2, 3]),  # Row 0
        (1, [4, 5, 6]),  # Row 1
    ]  # 2x3 matrix

    B = [
        (0, [7, 8]),     # Row 0
        (1, [9, 10]),    # Row 1
        (2, [11, 12]),   # Row 2
    ]  # 3x2 matrix


    rddA = sc.parallelize(A)
    rddB = sc.parallelize(B)


    rddA_mapped = rddA.flatMap(lambda x: [(x[0], (k, v)) for k, v in enumerate(x[1])])

    rddB_mapped = rddB.flatMap(lambda x: [(k, (x[0], v)) for k, v in enumerate(x[1])])


    rdd_joined = rddA_mapped.join(rddB_mapped)
    rdd_result = rdd_joined.map(lambda x: ((x[1][0][0], x[1][1][0]), x[1][0][1] * x[1][1][1])) .reduceByKey(lambda x, y: x + y)

    result = rdd_result.collect()
    print("Resulting Matrix C:")
    for ((i, j), value) in result:
        print(f"C[{i}][{j}] = {value}")

    sc.stop()

if __name__ == "__main__":
    main()
```
