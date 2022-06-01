import React from "react"

type InputProps={
    value:String
    handleChange:(event:React.ChangeEvent<HTMLInputElement>)=>void
}
export const Input=(props:InputProps)=>{
    return (
    <div>
        <input type='text' value={props.value} onChange={props.handleChange} />
        <input value=" " handleChange={event=>console.log(event) />
   </div>
}