const song=document.getElementById("song");
const playBtn=document.querySelector(".inner");
const nextBtn=document.querySelector(".forward");
const prevBtn=document.querySelector(".rewind");
const durationTime=document.querySelector(".duration");
const remainingTime=document.querySelector(".remaining");
const rangeBar=document.querySelector(".range");
const musicName=document.querySelector(".music-name");
const musicImage=document.querySelector(".music-thumb img");
const musicThumb=document.querySelector(".music-thumb");
let isPlaying=true;
let indexSong=0;
//const musics=["camnhan.mp3","thieuthan.mp3","vimeanhbatchiatay.mp3","bentrentanglau.mp3"];
const musics=[
    {
        id:1,
        title:"Cảm nhận",
        file:"camnhan.mp3",
        image:"sea.jpg",
    },
    {
        id:2,
        title:"Thiêu thân",
        file:"thieuthan.mp3",
        image:"https://photo-resize-zmp3.zmdcdn.me/w240_r1x1_jpeg/cover/f/e/5/6/fe5659fe70dd215e616b784bd19751b5.jpg",
    },
    {
        id:3,
        title:"Vì mẹ anh bắt chia tay",
        file:"vimeanhbatchiatay.mp3",
        image:"https://i.ytimg.com/vi/S7ElVoYZN0g/maxresdefault.jpg",
    },
    {
        id:4,
        title:"Bên trên tầng lầu",
        file:"bentrentanglau.mp3",
        image:"https://i.ytimg.com/vi/LaxkmhiECfM/maxresdefault.jpg",
    },
    {
        id:5,
        title:"Vài câu nói có khiến người thay đổi",
        file:"vaicaunoi.mp3",
        image:"https://thegioidienanh.vn/stores/news_dataimages/thanhtan/062022/18/22/in_article/1152_maxresdefault.jpg?rt=20220618221215",
    },
    {
        id:6,
        title:"There's no one at all",
        file:"mtp.mp3",
        image:"https://mp3lofi.com/wp-content/uploads/2022/04/Loi-bai-hat-Theres-No-One-At-All-Son-Tung.jpg",
    },
    {
        id:7,
        title:"Mamma Mia",
        file:"hieu.mp3",
        image:"https://mp3lofi.com/wp-content/uploads/2022/06/Loi-bai-hat-Mamma-Mia-HURRYKNG-REX-HIEUTHUHAI-Negav-MANBO.jpg",
    },
  
]


/*kích hoạt nút play*/
playBtn.addEventListener("click",playPause);

/*kích hoạt nút tiếp*/
nextBtn.addEventListener("click",function(){
    changeSong(1);
});

/*kích hoạt nút lùi*/
prevBtn.addEventListener("click",function(){
    changeSong(-1);
});

/*cuối bài tự chuyển*/
song.addEventListener("ended",handleChangeBar);
function handleChangeBar(){
    changeSong(1);
}

/*tìm nhạc theo danh sách*/
function changeSong(dir)
{
    if(dir==1){
        indexSong++;
        if(indexSong>=musics.length)
        {
            indexSong=0;
        }
        isPlaying=true;
    }
    else if(dir==-1)
    {
        indexSong--;
        if(indexSong<0)
        {
            indexSong=musics.length-1;
        }
        isPlaying=true;
    }
    init(indexSong);
    playPause();
}

/*Ấn nút play thì phát nhạc*/
function playPause(){
    if(isPlaying){
        musicThumb.classList.add("is-playing");
        song.play();
        playBtn.innerHTML=`<i class='bx bx-pause' ></i>`;
        isPlaying=false;
        timer=setInterval(displayTimer,500);

    }
    else
    {
        musicThumb.classList.remove("is-playing");
        song.pause();
        playBtn.innerHTML=`<i class='bx bx-play' ></i>`;
        isPlaying=true;
        clearInterval(timer);
    }

}

/*Tạo cho thanh chạy theo nhạc*/
displayTimer();
let timer=setInterval(displayTimer,500);
function displayTimer(){
    const{duration,currentTime}=song;
    rangeBar.max=duration;
    rangeBar.value=currentTime;
    remainingTime.textContent=formatTimer(currentTime);
    if(!duration){
        durationTime.textContent="00:00";
    }
    else{
        durationTime.textContent=formatTimer(duration);
    }
}
/*Tổng thời gian bài nhạc đã phát*/
function formatTimer(number){
    const minutes=Math.floor(number/60);
    const seconds=Math.floor(number-minutes*60);
    return `${minutes<10?"0"+minutes:minutes}:${seconds<10?"0"+seconds:seconds}`;
}

/*dịch chuyển theo ý muốn*/
rangeBar.addEventListener("change",handleChangeBar);
function handleChangeBar(){
   song.currentTime= rangeBar.value;
}

/*chơi tùng bài nhạc với hình khác nhau*/
function init(indexSong){
    displayTimer();
    song.setAttribute("src", `./music/${musics[indexSong].file}`);
    musicImage.setAttribute("src",musics[indexSong].image);
    musicName.textContent=musics[indexSong].title;
}
init(indexSong);

/*Tự động chuyển bài*/
song.addEventListener("ended",handleEndedSong);
function handleEndedSong(){
    changeSong(1);
}

