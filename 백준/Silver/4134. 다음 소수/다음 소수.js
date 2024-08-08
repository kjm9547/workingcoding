let input = require("fs")
  .readFileSync(process.platform === "linux" ? "/dev/stdin" : "input.txt")
  .toString()
  .trim(" ")
  .split("\n");

const arr = [];
function nextPrime(n) {
  if (n < 2) return false;
  for (let i = 2; i <= Math.floor(Math.sqrt(n)); i++) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}
for (let i = 0; i < Number(input[0]); i++) {
  arr.push(Number(input[i + 1]));
}

for (let i = 0; i < Number(input[0]); i++) {
  let n = arr[i];
  while (!nextPrime(n)) {
    n++;
  }
  console.log(n);
}
