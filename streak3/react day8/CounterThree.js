import React,{useReducer} from 'react'

const intialState=0
const reducer=(state,action)=>{
    switch(action){
        case 'increment':
            return state+1
        case 'decrement':
            return state-1
        case 'reset':
            return intialState
        default :
            return state
    }
}

function CounterThree() {

   const [count,dispatch]= useReducer(reducer,intialState)
   const [countTwo,dispatchTwo]=useReducer(reducer,intialState) 
  return (
    <div>
        <div>count - {count}</div>
        <button onClick={() =>dispatch('increment')}>Increment</button>
        <button onClick={() =>dispatch('decrement')}>Decrement</button>
        <button onClick={() =>dispatch('reset')}>reset</button>
    
    <div>
    <div>count Two - {countTwo}</div>
    <button onClick={() =>dispatchTwo('increment')}>Increment</button>
    <button onClick={() =>dispatchTwo('decrement')}>Decrement</button>
    <button onClick={() =>dispatchTwo('reset')}>reset</button>
    </div>
    </div>
    
)
}

export default CounterThree