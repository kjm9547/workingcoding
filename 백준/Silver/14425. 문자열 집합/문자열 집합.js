let input = require("fs")
  .readFileSync(process.platform === "linux" ? "/dev/stdin" : "input.txt")
  .toString()
  .split("\n");
input_num = input[0].split(" ");
input.shift();

const s = new Map();
for (let i = 0; i < Number(input_num[0]); i++) {
  s.set(input[i], input[i]);
}

let cnt = 0;

for (let i = 0; i < Number(input_num[1]); i++) {
  if (s.has(input[i + Number(input_num[0])])) {
    cnt++;
  }
}
console.log(cnt);
