let input = require("fs")
  .readFileSync(process.platform === "linux" ? "/dev/stdin" : "input.txt")
  .toString()
  .trim(" ")
  .split("\n");

const m = new Map();
let cnt = 0;
for (let i = 0; i < Number(input[0]); i++) {
  if (!m.has(input[i + 1]) && input[i + 1] != "ENTER") {
    cnt++;
  }
  m.set(input[i + 1], input[i + 1]);
  if (input[i + 1] == "ENTER") {
    m.clear();
  }
}

console.log(cnt);
