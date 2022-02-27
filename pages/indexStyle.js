import styled from "styled-components";
import { BLUE, GREEN, RED, ORANGE, YELLOW, PURPLE } from "../Components/Common/Colors";

const Main = styled.main`
    .mySwiper {
        width: 100%;
        height: calc(100vh - ${props => props.headerHeight+"px"} - ${props => props.footerHeight+"px"});
    }

    .SwiperSlide {
        width: 100%;
        height: 100%;
        &:nth-of-type(1) {
            background-color: ${BLUE};
        }
        &:nth-of-type(2) {
            background-color: ${GREEN};
        }
        &:nth-of-type(3) {
            background-color: ${RED};
        }
        &:nth-of-type(4) {
            background-color: ${ORANGE};
        }
        &:nth-of-type(5) {
            background-color: ${YELLOW};
        }
        &:nth-of-type(6) {
            background-color: ${PURPLE};
        }
        &:nth-of-type(7) {
            background-color: ${BLUE};
        }
        &:nth-of-type(8) {
            background-color: ${GREEN};
        }
    }
`
export default Main;