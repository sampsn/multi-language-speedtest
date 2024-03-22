from time import now

fn iterative(x: Int):
  for j in range(0,x+1):
    var stuff = DynamicVector[Int]()
    for i in range(0, j):
      stuff.push_back(i)
        
fn main():
  var start = now()
  iterative(500_000)
  var end = now()
  print("duration: ", (end - start) / 1000 / 1000 / 1000, "seconds")

