import React from 'react'

export const ChlidFour = ({name}) => {
    const date=new Date()
    console.log('ChlidFour Render')
  return (
    <div>
        Hello {name}. Is is currently {(date.getHours())}: {date.getMinutes()}:{' '} 
        {date.getSeconds()}
    </div>
  )
}
export const MemoizedChlidFour = React.memo(ChlidFour)