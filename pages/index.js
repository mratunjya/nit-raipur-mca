import Head from 'next/head'
import Link from 'next/link'
import Footer from '../Components/Common/Footer/Footer'
import Header from '../Components/Common/Header/Header'
import React, { useState, useEffect, useRef } from 'react'
import { Main } from '../Components/IndexStyle'
import { FlexBox } from "../Components/Common/FlexBox";
import { Swiper, SwiperSlide } from 'swiper/react';
import { Mousewheel, Pagination, Keyboard, EffectFade } from "swiper";
import "swiper/css";
import "swiper/css/bundle";

export default function Home() {
  const [headerHeight, setHeaderHeight] = useState();
  const [footerHeight, setFooterHeight] = useState();

  const refHeader = useRef(null);
  const refFooter = useRef(null);

  // eslint-disable-next-line react-hooks/exhaustive-deps
  useEffect(() => {
    setHeaderHeight(refHeader.current.clientHeight);
    setFooterHeight(refFooter.current.clientHeight);
  });

  return (
    <>
      <Head>
        <title>Unofficially maintained for NIT Raipur: MCA</title>
        <meta name="description" content="NIT Raipur MCA 2021 - 2024" />
        <link rel="icon" href="/favicon.ico" />
      </Head>
      <div ref={refHeader}>
        <Header header="NIT Raipur MCA 2021 - 2024"/>
      </div>
      <Main headerHeight={headerHeight} footerHeight={footerHeight}>
        <Swiper
          direction={"vertical"}
          slidesPerView={1}
          spaceBetween={0}
          mousewheel={true}
          pagination={{
            clickable: true,
            dynamicBullets: true,
          }}
          keyboard={{
            enabled: true,
          }}
          loop={true}
          grabCursor={true}
          modules={[Mousewheel, Pagination, Keyboard, EffectFade]}
          className="mySwiper"
        >
          <SwiperSlide className="SwiperSlide"><Link href="Semester/"><a><FlexBox w="100%" h="100%" align="center" justify="center">Semester 1</FlexBox></a></Link></SwiperSlide>
          <SwiperSlide className="SwiperSlide"><Link href="Semester/"><a><FlexBox w="100%" h="100%" align="center" justify="center">Semester 2</FlexBox></a></Link></SwiperSlide>
          <SwiperSlide className="SwiperSlide"><Link href="Semester/"><a><FlexBox w="100%" h="100%" align="center" justify="center">Semester 3</FlexBox></a></Link></SwiperSlide>
          <SwiperSlide className="SwiperSlide"><Link href="Semester/"><a><FlexBox w="100%" h="100%" align="center" justify="center">Semester 4</FlexBox></a></Link></SwiperSlide>
          <SwiperSlide className="SwiperSlide"><Link href="Semester/"><a><FlexBox w="100%" h="100%" align="center" justify="center">Semester 5</FlexBox></a></Link></SwiperSlide>
          <SwiperSlide className="SwiperSlide"><Link href="Semester/"><a><FlexBox w="100%" h="100%" align="center" justify="center">Semester 6</FlexBox></a></Link></SwiperSlide>
        </Swiper>
      </Main>
      <div ref={refFooter}>
        <Footer />
      </div>
    </>
  )
}