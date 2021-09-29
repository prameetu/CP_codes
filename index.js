if (freq.length === 0) {
  return 0;
}
let ans = 0;
for (let i = 1; i < freq.length - 1; i++) {
  let p1 = Math.min(freq[i - 1], freq[i]);
  let p2 = Math.min(freq[i], freq[i + 1]);
  if (p1 >= p2) {
    ans += p1;
    freq[i] -= p1;
    freq[i - 1] -= p1;
  } else {
    ans += p2;
    freq[i] -= p2;
    freq[i + 1] -= p2;
  }
}
for (let i = 0; i < freq.length; i++) {
  let pairs = Math.floor(freq[i] / 2);
  ans += pairs;
  freq[i] = freq[i] % 2 === 0 ? 0 : 1;
  if (i > 0 && freq[i - 1] === 1 && freq[i] === 1) {
    ans += 1;
    freq[i - 1] = 0;
    freq[i] = 0;
  }
}
return ans;
