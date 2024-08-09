let input = require("fs")
  .readFileSync(process.platform === "linux" ? "/dev/stdin" : "input.txt")
  .toString()
  .trim(" ")
  .split("\n");
let maxNum = Math.max(...input);
function getPrime() {
  const arr = new Array(maxNum+1);
  for (let i = 0; i <= maxNum; i++) {
    if (i < 2) arr[i] = false;
    else arr[i] = true;
  }

  for (let i = 2; i <= Math.sqrt(maxNum); i++) {
    if (arr[i]) {
      for (let y = i * i; y <= maxNum; y += i) {
        arr[y] = false;
      }
    }
  }
  return arr;
}

for (let i = 0; i < Number(input[0]); i++) {
  let cnt = 0;
  let arr = getPrime();
  let n = Number(input[i + 1]);
  for (let y = 1; y <= Math.floor(n / 2); y++) {
    if (arr[y] && arr[n - y]) cnt++;
  }
  console.log(cnt);
}
