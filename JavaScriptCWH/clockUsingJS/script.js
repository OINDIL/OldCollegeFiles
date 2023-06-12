let month = ["Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"]
setInterval(function () {
    let ob = new Date()
    let h = ob.getHours(), m = ob.getMinutes(), s = ob.getSeconds(), d = ob.getDate(), mnth = ob.getMonth(), yr = ob.getFullYear()
    document.getElementById("hour").innerHTML = h
    document.getElementById("minutes").innerHTML = m
    if (m < 10) document.getElementById("minutes").innerHTML = "0" + m
    document.getElementById("seconds").innerHTML = s
    if (s < 10) document.getElementById("seconds").innerHTML = "0" + s
    document.getElementById("day").innerHTML = d
    if (d < 10) document.getElementById("day").innerHTML = "0" + d
    document.getElementById("month").innerHTML = month[mnth]
    // if(mnth < 10) document.getElementById("month").innerHTML = "0"+ mnth
    document.getElementById("year").innerHTML = yr
}, 1000)
/*
const url = 'https://weather-by-api-ninjas.p.rapidapi.com/v1/weather?city=Bagda';
const options = {
    method: 'GET',
    headers: {
        'X-RapidAPI-Key': '13d5c9d14fmsh3b31cdd0d74d039p1690d6jsna553cce0ba07',
        'X-RapidAPI-Host': 'weather-by-api-ninjas.p.rapidapi.com'
    }
};

try {
    (async () => {
        const response = await fetch(url, options);
        const result = await response.text();
        console.log(result);
        cloud_pct.innerHTML = response.cloud_pct
        temp.innerHTML = response.temp
        feels_like.innerHTML = response.feels_like
        humidity.innerHTML = response.humidity
        min_temp.innerHTML = response.min_temp
        max_temp.innerHTML = response.max_temp
        wind_speed.innerHTML = response.wind_speed
        wind_degrees.innerHTML = response.wind_degrees
        sunrise.innerHTML = response.sunrise
        sunset.innerHTML = response.sunset
    })()
} catch (error) {
    console.error(error);
*/