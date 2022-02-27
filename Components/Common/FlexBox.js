import styled from 'styled-components';
import { css } from 'styled-components';

export const FlexBox = styled.div`
    display: flex;
    ${props => props.column ? css`flex-direction: column;` : css`flex-direction: row`};
    ${props => props.wrap && css`flex-wrap: wrap;`};
    justify-content: ${props => props.justify};
    align-items: ${props => props.align};
    width: ${props => props.w};
    height: ${props => props.h};
    background-color: ${props => props.bgColor};
    border-radius: ${props => props.borderRadius};
    box-shadow: ${props => props.boxShadow};
    margin: ${props => props.margin};
    padding: ${props => props.padding};
    row-gap: ${props => props.rowGap};
    column-gap: ${props => props.columnGap};
`

FlexBox.defaultProps = {
    justify: 'flex-start',
    align: 'stretch',
    w: 'auto',
    h: 'auto',
    bgColor: 'transparent',
    borderRadius: '0',
    boxShadow: 'none',
    margin: '0',
    padding: '0',
    rowGap: '0',
    columnGap: '0'
}