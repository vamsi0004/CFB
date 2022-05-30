import React, {useState} from 'react'
import useDocument from './hooks/useDocument'
function DoctitleTwo() {
    const [count,setCount]=useState(0)

    useDocument(count)
  return (
    <div>
        <button onClick={()=>setCount(count+1)}>count- {count}</button>
    </div>
  )
}

export default DoctitleTwo