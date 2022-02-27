/* eslint-disable @next/next/no-img-element */
import { FlexBox } from '../FlexBox';
import { FooterTag } from './FooterStyle';
import heart from '../../../public/assets/svg/heart.svg';
import code from '../../../public/assets/svg/code.svg';

function Footer() {
  return (
    <FooterTag>
      <a href="https://www.linkedin.com/in/mratunjya/" rel="noreferrer" target="_blank">
        <FlexBox justify="center" align="center" columnGap="7px" w="fit-content">
          Made with <img src={heart.src} alt="Love" width="24" height="24"/> and <img src={code.src} alt="Code" width="29" height="29"/> by Mratunjya Shankhdhar
        </FlexBox>
      </a>
    </FooterTag>
  )
}

export default Footer