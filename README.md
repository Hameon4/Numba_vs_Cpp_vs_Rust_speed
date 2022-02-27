# Numba_vs_Cpp_vs_Rust_speed
A simple problem to compare execution speeds between Python w/ Numba, C++ w/ optimization, and Rust using its package manager 'cargo' via 'cargo run --release' command <br><br>
<strong>Size of list/vector: 20000</strong>
<p>
  <h3>Test Benchmarks on ten attempts on each languages:</h3>
  <ul>
  <li><strong>[PYTHON w/ Numba] in Jupyter notebook:</strong> (in seconds)</li>
  <ul>
    <li>0.86, 1.11, 0.89, 1.17, 0.96, 1.05, 1.04, 0.89, 1.077, 1.022</li>
    <li><strong>Average: </strong>10.069 seconds</li>
  </ul>
  <hr>
  <li><strong>[C++ w/ optimization] in onlinegdb:</strong> (in seconds)</li>
  <ul>
    <li>0.7, 0.9, 1.1, 1.3, 1.22, 1.18, 0.86, 0.87, 1.03, 1.16</li>
    <li><strong>Average: </strong>10.319 seconds</li>
  </ul>
  <hr>
  <li><strong>[Rust using <i>'cargo run --release'</i>] in cmd:</strong> (in micro-seconds)</li>
  <ul>
    <li>269, 522.7, 651.4, 322, 428.3, 385.3, 412.9, 751, 622, 664.6</li>
    <li><strong>Average: </strong>5029.200000000001 ~ 5.0292 milli-seconds</li>
  </ul>
  </ul>
</p>
