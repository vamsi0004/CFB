import React from 'react'
import useCounter from './hooks/useCounter'
function Counter2() {
    const [count,increment,decrement,reset]=useCounter()
  return (
    <div>
        <h2>count={count}</h2>
        <button onClick={increment}>Increment</button>
        <button onClick={decrement}>Decrement</button>
        <button onClick={reset}>reset</button>
    </div>
  )
}

export default Counter2