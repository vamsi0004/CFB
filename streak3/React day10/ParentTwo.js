import React, { useState } from 'react'
//import { Child } from './Child'
import { ChildTwo } from './ChlidTwo'

export const ParentTwo = () => {
    const [count,setCount]=useState(0)
    const [name,setName]=useState('mahesh')

    console.log('ParentTwo Render')
  return (
    <div>
        <button onClick={()=>setCount((c)=>c+1)}>Count -{count}</button>
        <button onClick={()=>setName('Learner')}>Change name</button>
        <ChildTwo name={name}/>
    </div>
  )
}

export default ParentTwo