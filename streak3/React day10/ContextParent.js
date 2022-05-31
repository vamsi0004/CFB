import React, { useState } from 'react'
import {ChlidA} from './ContextChlidrens'

export const Countcontext = React.createContext()
const CountProvider = countContext.Provider

const ContextParent = () => {
    const [count,setCount]=useState(0)
    console.log('contextPArent Render')
  return (
    <>
      <button onClick={()=>setCount(c=>c+1)}>Count-{count}</button>
      <CountProvider value={count}>
      <ChlidA />
      </CountProvider>
      
    </>
  )
}

export default ContextParent
