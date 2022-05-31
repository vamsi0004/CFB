import React from 'react'

export const ChlidA = () => {
    console.log('chlid A render')
  return (
      <>
    <div>ChlidA</div>
    <ChlidB />
    </>
  )
}

export const ChlidB = () => {
    console.log('chlid B render')
  return (
      <>
    <div>ChlidB</div>
    <ChlidC />
    </>
  )
}

export const ChlidC = () => {
    const count=useContext(CountContext)
    console.log('chlid A render')
  return (
      <>
    <div>Chlidc count ={count}</div>
    
    </>
  )
}
