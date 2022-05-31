import React from 'react'

export const ChildThree = () => {
    console.log('ChlidTwo Render')
  return (
    <div>Child component</div>
  )
}
export const MemoizedChlidThree=React.memo(MemoizedChlidThree)