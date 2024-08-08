let input = require("fs")
  .readFileSync(process.platform === "linux" ? "/dev/stdin" : "input.txt")
  .toString()
  .trim(" ");

let s = new Set();
for (let i = 0; i < input.length; i++) {
  for (let y = i; y < input.length; y++) {
    s.add(input.substring(i, y + 1));
  }
}

console.log(s.size);
