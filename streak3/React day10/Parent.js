import React,{useState } from "react";
import { Child } from "../Child";
 export const Parent=()=>{
     const [count,setCount]=useState(0)
     console.log('Parent Render')
    return (
        <div>
            <button onClick={()=>setCount((c)=>c+1)}>count - {count }</button>
            <button onClick={()=>setCount(0)}>count to 0</button>
            <button onClick={()=>setCount(5)}>count to 5</button>
            <Child />
        </div>
    )

 }
 export default Parent