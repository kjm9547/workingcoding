let input = require("fs")
  .readFileSync(process.platform === "linux" ? "/dev/stdin" : "input.txt")
  .toString()
  .trim(" ")
  .split("\n");

const n = Number(input[0]);
let cnt = 0;
for (let i = 1; i * i <= n; i++) {
  cnt++;
}
console.log(cnt);
