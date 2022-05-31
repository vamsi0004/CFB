import React, { useState } from 'react'
//import { Child } from './Child'
import {MemoizedChlidFour} from './ChlidFour'

export const ParentThree = () => {
    const [count,setCount]=useState(0)
    const [name,setName]=useState('mahesh')

    console.log('ParentThree Render')
  return (
    <div>
        <button onClick={()=>setCount((c)=>c+1)}>Count -{count}</button>
        <button onClick={()=>setName('Learner')}>Change name</button>
        <MemoizedChlidFour name={name} />
    </div>
  )
}

export default ParentThree