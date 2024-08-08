let input = require("fs")
  .readFileSync(process.platform === "linux" ? "/dev/stdin" : "input.txt")
  .toString()
  .trim(" ")
  .split("\n");

function gcd(a, b) {
  if (b == 0) {
    return a;
  } else {
    return gcd(b, a % b);
  }
}

let ta = input[0].split(" ");
let aa = Number(ta[0]);
let ab = Number(ta[1]);
let tb = input[1].split(" ");
let ba = Number(tb[0]);
let bb = Number(tb[1]);

const t = (aa * (ab * bb)) / ab + (ba * (ab * bb)) / bb;
const b = ab * bb;

console.log(t / gcd(t, b), b / gcd(t, b));
