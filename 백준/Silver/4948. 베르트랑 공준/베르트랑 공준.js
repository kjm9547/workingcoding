let input = require("fs")
  .readFileSync(process.platform === "linux" ? "/dev/stdin" : "input.txt")
  .toString()
  .trim(" ")
  .split("\n");

function eratosPrime(n) {
  let arr = new Array(n);
  for (let i = 0; i <= 2 * n; i++) {
    if (i < 2) arr[i] = false;
    else {
      arr[i] = true;
    }
  }
  for (let i = 2; i <= Math.sqrt(2 * n); i++) {
    if (arr[i]) {
      for (let y = i * i; y <= 2 * n; y += i) {
        arr[y] = false;
      }
    }
  }

  let result = arr.map((v, i) => (v ? i : 0)).filter((v) => v);

  console.log(result.filter((v) => v > n).length);
}

let index = 0;
while (true) {
  if (Number(input[index]) == 0) break;
  else {
    eratosPrime(Number(input[index]));
    index++;
  }
}
