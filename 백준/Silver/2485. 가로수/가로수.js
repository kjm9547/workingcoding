let input = require("fs")
  .readFileSync(process.platform === "linux" ? "/dev/stdin" : "input.txt")
  .toString()
  .trim(" ")
  .split("\n");

function gcd_(a, b) {
  if (b == 0) {
    return a;
  } else {
    return gcd_(b, a % b);
  }
}

let arr = [];
for (let i = 0; i < Number(input[0]) - 1; i++) {
  arr.push(Number(input[2 + i]) - Number(input[1 + i]));
}

let gcd = arr[0];
for (let i = 0; i < arr.length; i++) {
  gcd = gcd_(gcd, arr[i]);
}

let cnt = 0;

for (let i = 0; i < arr.length; i++) {
  cnt += arr[i] / gcd - 1;
}
console.log(cnt);
