# Numba vs C++ vs Rust
A simple problem to compare execution speeds between Python w/ Numba, C++ w/ optimization, and Rust using its package manager 'cargo' via 'cargo run --release' command <br><br>
<ul>
  <li><h3>Text Editor: VsCode</h3></li>
  <li><h3>Size of list/vector: 20000</h3></li>
</ul>
<p>
  <h3>Test Benchmarks on ten attempts on each languages:</h3>
  <ul>
  <li><strong>[Python w/ Numba]:</strong> (in seconds)</li>
  <ul>
    <li>Array List: [0.72147632 0.60844398 0.61216307 0.6099298  0.62080336 0.62467861
 0.60971665 0.62949634 0.61024547 0.62054276]</li>
    <li><strong>Average: </strong>0.6267496347427368 seconds</li>
    <li>Fastest speed recorded: ~ 0.6 seconds</li>
  </ul>
  <hr>
  <li><strong>[C++ w/ optimization]:</strong> (in milliseconds)</li>
  <ul>
    <li>Compiler: g++ version 11.1</li>
    <li>Compilation command: g++-11 -Ofast -std=c++2a findMax.cpp</li>
    <li>62.500, 46.875, 46.875, 46.875, 46.875, 46.875, 31.250, 46.875, 62.500, 46.875</li>
    <li><strong>Average: </strong>~ 48.4375 milliseconds</li>
    <li>Fastest speed recorded: ~ 31.25 milliseconds</li>
  </ul>
  <hr>
  <li><strong>[Rust]:</strong> (in microseconds)</li>
  <ul>
    <li>Compilation command: cargo run --release
    <li>269, 522.7, 651.4, 322, 428.3, 385.3, 412.9, 751, 622, 664.6</li>
    <li><strong>Average: </strong>502.92 microseconds</li>
    <li>Fastest speed recorded: ~ 228 microseconds</li>
  </ul>
  </ul>
</p>
