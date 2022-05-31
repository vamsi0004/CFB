import React, { useState } from 'react'
//import { Child } from './Child'
import { ChildOne } from './ChlidOne'

export const ParentOne = () => {
    const [count,setCount]=useState(0)

    console.log('ParentOne Render')
  return (
    <div>
        <button onClick={()=>setCount((c)=>c+1)}>Count -{count}</button>
        <ChildOne />
    </div>
  )
}

export default ParentOne