import React, { useState,useMemo,useCallback } from 'react'
//import { Child } from './Child'
import {MemoizedChlidFive} from './ChlidFive'

export const ParentFour = () => {
    const [count,setCount]=useState(0)
    const [name,setName]=useState('mahesh')

    const person={
        fname:'Mahesh',
        lname:'Reddy'
    }
    const memoizedPerson=useMemo(()=>person,[])

    const handleClick=()=>{} 

    const memoizedHandleClick=useCallback(handleClick,[])

    console.log('ParentFour Render')
  return (
    <div>
        <button onClick={()=>setCount((c)=>c+1)}>Count -{count}</button>
        <button onClick={()=>setName('Learner')}>Change name</button>
        <MemoizedChlidFive name={name} person={memoizedPerson}/>
        <MemoizedChlidFive name={name} handleClick={memoizedHandleClick}/>
    </div>
  )
}

//export default ParentFour