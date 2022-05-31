import React from 'react'

export const ChlidFive = ({name }) => {
  return (
    <div>
        Hello {name} 
    </div>
  )
}
export const MemoizedChlidFive=React.memo(ChlidFive)