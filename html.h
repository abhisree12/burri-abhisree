<!DOCTYPE html>
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">

    <title>burri abhitejas varma  | Personal Portfolio</title>

    <style>
        /* =========================
           GENERAL
        ========================== */

        * {
            box-sizing: border-box;
            margin: 0;
            padding: 0;
        }

        html {
            scroll-behavior: smooth;
            scroll-padding-top: 70px;
        }

        body {
            font-family: Arial, sans-serif;
            background: #f2f5f9;
            color: #222;
            line-height: 1.6;
        }

        /* =========================
           NAVIGATION
        ========================== */

        nav {
            background: #111827;
            padding: 15px 10px;
            text-align: center;
            position: sticky;
            top: 0;
            z-index: 1000;
            box-shadow: 0 2px 10px rgba(0, 0, 0, 0.2);
        }

        nav a {
            color: white;
            text-decoration: none;
            margin: 0 8px;
            font-weight: bold;
            transition: 0.3s;
        }

        nav a:hover {
            color: #38bdf8;
        }

        /* =========================
           HOME
        ========================== */

        #home {
            text-align: center;
            padding: 70px 20px;
            background: linear-gradient(135deg, #2563eb, #06b6d4);
            color: white;
        }

        .profile {
            width: 160px;
            height: 160px;
            border-radius: 50%;
            object-fit: cover;
            border: 5px solid white;
            margin-bottom: 15px;
            animation: zoom 1.2s;
        }

        h1 {
            font-size: 42px;
            margin-bottom: 10px;
        }

        .home-text {
            font-size: 18px;
            margin: 8px 0;
        }

        /* =========================
           SECTIONS
        ========================== */

        section {
            max-width: 1000px;
            margin: auto;
            padding: 50px 20px;
        }

        h2 {
            color: #2563eb;
            border-bottom: 3px solid #2563eb;
            padding-bottom: 8px;
            margin-bottom: 25px;
        }

        h3 {
            margin-bottom: 12px;
            color: #1e3a8a;
        }

        /* =========================
           CARDS
        ========================== */

        .card {
            background: white;
            padding: 25px;
            margin: 20px 0;
            border-radius: 15px;
            box-shadow: 0 4px 15px rgba(0, 0, 0, 0.1);
            animation: slideUp 0.8s;
            transition: 0.3s;
        }

        .card:hover {
            transform: translateY(-3px);
        }

        ul {
            padding-left: 20px;
        }

        li {
            margin: 8px 0;
        }

        /* =========================
           BUTTONS
        ========================== */

        .btn {
            display: inline-block;
            padding: 12px 20px;
            margin: 8px;
            background: #2563eb;
            color: white;
            text-decoration: none;
            border-radius: 8px;
            transition: 0.3s;
        }

        .btn:hover {
            background: #1d4ed8;
            transform: scale(1.05);
        }

        /* =========================
           FAMILY
        ========================== */

        .family-container {
            display: grid;
            grid-template-columns: repeat(2, 1fr);
            gap: 20px;
            margin-top: 20px;
        }

        .family-container .card {
            margin: 0;
        }

        /* =========================
           SKILLS
        ========================== */

        .skills {
            display: flex;
            flex-wrap: wrap;
            gap: 12px;
        }

        .skill {
            background: #2563eb;
            color: white;
            padding: 12px 18px;
            border-radius: 20px;
            transition: 0.3s;
        }

        .skill:hover {
            background: #06b6d4;
            transform: scale(1.05);
        }

        /* =========================
           STYLISH GALLERY
        ========================== */

        .gallery {
            columns: 3 250px;
            column-gap: 18px;
            margin-top: 25px;
        }

        .gallery-item {
            position: relative;
            break-inside: avoid;
            margin-bottom: 18px;
            border-radius: 18px;
            overflow: hidden;
            background: white;
            box-shadow: 0 6px 20px rgba(0, 0, 0, 0.15);
            cursor: pointer;
            transition: 0.4s ease;
        }

        .gallery-item:hover {
            transform: translateY(-6px);
            box-shadow: 0 12px 30px rgba(0, 0, 0, 0.22);
        }

        .gallery-item img {
            width: 100%;
            height: auto;
            display: block;
            transition: 0.5s ease;
        }

        .gallery-item:hover img {
            transform: scale(1.08);
        }

        /* Gallery captions */

        .gallery-caption {
            position: absolute;
            left: 0;
            right: 0;
            bottom: 0;

            padding: 20px 12px 12px;

            color: white;
            font-size: 16px;
            font-weight: bold;
            text-align: center;

            background: linear-gradient(
                transparent,
                rgba(0, 0, 0, 0.85)
            );

            opacity: 0;
            transform: translateY(10px);
            transition: 0.4s ease;
        }

        .gallery-item:hover .gallery-caption {
            opacity: 1;
            transform: translateY(0);
        }

        /* =========================
           CONTACT
        ========================== */

        .contact-info a {
            color: #2563eb;
            text-decoration: none;
            font-weight: bold;
        }

        .contact-info a:hover {
            text-decoration: underline;
        }

        /* =========================
           SOCIAL MEDIA
        ========================== */

        .social {
            text-align: center;
            margin-top: 20px;
        }

        /* =========================
           FOOTER
        ========================== */

        footer {
            background: #111827;
            color: white;
            text-align: center;
            padding: 30px 20px;
            margin-top: 30px;
        }

        /* =========================
           BACK TO TOP
        ========================== */

        #top {
            position: fixed;
            right: 20px;
            bottom: 20px;
            background: #2563eb;
            color: white;
            width: 45px;
            height: 45px;
            display: flex;
            align-items: center;
            justify-content: center;
            border-radius: 50%;
            text-decoration: none;
            font-size: 22px;
            box-shadow: 0 4px 10px rgba(0, 0, 0, 0.2);
            z-index: 999;
        }

        #top:hover {
            background: #1d4ed8;
        }

        /* =========================
           ANIMATIONS
        ========================== */

        @keyframes zoom {
            from {
                transform: scale(0);
                opacity: 0;
            }

            to {
                transform: scale(1);
                opacity: 1;
            }
        }

        @keyframes slideUp {
            from {
                opacity: 0;
                transform: translateY(30px);
            }

            to {
                opacity: 1;
                transform: translateY(0);
            }
        }

        /* =========================
           TABLET
        ========================== */

        @media (max-width: 700px) {

            nav a {
                display: inline-block;
                margin: 5px;
                font-size: 13px;
            }

            h1 {
                font-size: 32px;
            }

            .profile {
                width: 130px;
                height: 130px;
            }

            .family-container {
                grid-template-columns: 1fr;
            }

            .gallery {
                columns: 2 160px;
                column-gap: 12px;
            }

            .gallery-item {
                margin-bottom: 12px;
                border-radius: 14px;
            }

            section {
                padding: 40px 15px;
            }
        }

        /* =========================
           MOBILE
        ========================== */

        @media (max-width: 450px) {

            nav {
                padding: 10px 5px;
            }

            nav a {
                font-size: 12px;
                margin: 3px;
            }

            h1 {
                font-size: 28px;
            }

            h2 {
                font-size: 24px;
            }

            .gallery {
                columns: 2;
                column-gap: 10px;
            }

            .gallery-item {
                margin-bottom: 10px;
                border-radius: 12px;
            }

            .gallery-caption {
                font-size: 13px;
                padding: 15px 8px 8px;
            }

            .btn {
                padding: 10px 15px;
                margin: 5px;
            }

            .card {
                padding: 20px;
            }
        }
    </style>
</head>



    <!-- =========================
         NAVIGATION
    ========================== -->

    <nav>
        <a href="#home">Home</a>
        <a href="#about">About</a>
        <a href="#family">Family</a>
        <a href="#education">Education</a>
        <a href="#skills">Skills</a>
        <a href="#hobbies">Hobbies</a>
        <a href="#inspirations">Inspirations</a>
        <a href="#gallery">Gallery</a>
        <a href="#contact">Contact</a>
    </nav>


    <!-- =========================
         HOME
    ========================== -->

    <section id="home">

        <img src="asas.jpg"
             alt="burri abhitejas varma  Profile Photo"
             class="profile">

        <h1>Welcome to My Portfolio</h1>

        <p class="home-text">
            Hello! My name is <strong>B.Abhitejas varma</strong>.
        </p>

        <p class="home-text">
            I am a Diploma Computer Science student.
        </p>

        <a href="#about" class="btn">Learn More</a>

    </section>


    <!-- =========================
         ABOUT
    ========================== -->

    <section id="about">

        <h2>About Me</h2>

        <div class="card">

            <ul>
                <li>Hello! My name is B. Abhitejas varma.</li>

                <li>I am a Diploma student.</li>

                <li>
                    I am interested in Computer Science and Web Development.
                </li>

                <li>
                    I am learning new programming languages and improving
                    my technical skills every day.
                </li>
            </ul>

        </div>

    </section>


    <!-- =========================
         FAMILY
    ========================== -->

    <section id="family">

        <h2>👨‍👩‍👦‍👦 My Family</h2>

        <p>
            My family is very important to me.
            We are a loving and supportive family.
        </p>

        <div class="family-container">

            <div class="card">
                <h3>👨 Father</h3>
                <ul>
                    <li>
                        My father is one of my biggest inspirations.
                        He always supports and guides me.
                    </li>
                </ul>
            </div>

            <div class="card">
                <h3>👩 Mother</h3>
                <ul>
                    <li>My mother is my first inspiration.</li>
                    <li>She always cares for and motivates me.</li>
                </ul>
            </div>

            <div class="card">
                <h3>👤 Me</h3>
                <ul>
                    <li>I am the older brother.</li>
                    <li>I am elder than my brother.</li>
                    <li>I always try to support and guide him.</li>
                </ul>
            </div>

            

            <div class="card">
                <h3>👦 Younger Brother </h3>
                <ul>
                    <li>He is my younger brother.</li>
                    <li>He is also a special part of my family.</li>
                </ul>
            </div>

        </div>

    </section>


    <!-- =========================
         EDUCATION
    ========================== -->

    <section id="education">

        <h2>🎓 My Education</h2>

        <div class="card">

            <ul>
                <li>Diploma in Computer Science and Engineering</li>
                <li>First Year</li>
            </ul>

        </div>

    </section>


    <!-- =========================
         SKILLS
    ========================== -->

    <section id="skills">

        <h2>💻 My Skills</h2>

        <div class="card">

            <div class="skills">

                <span class="skill">C Programming</span>
                <span class="skill">C++</span>
                <span class="skill">HTML</span>
                <span class="skill">Python</span>
                <span class="skill">Java</span>
                <span class="skill">Web Development</span>

            </div>

        </div>

    </section>


    <!-- =========================
         HOBBIES
    ========================== -->

    <section id="hobbies">

        <h2>🎯 My Hobbies</h2>

        <div class="card">

            <ul>
                <li>Learning new programming languages</li>
                <li>Reading story books</li>
                <li>Running and exercise</li>
                <li>Learning new things daily</li>
            </ul>

        </div>

    </section>


    <!-- =========================
         INSPIRATIONS
    ========================== -->

    <section id="inspirations">

        <h2>❤️ My Inspirations</h2>

        <div class="card">

            <h3>❤️ My First Inspiration – My Mother & Father</h3>

            <p>
                My mother and father are my first and greatest
                inspirations.
            </p>

            <p>
                They always support me, encourage me, and teach me
                to work hard and never give up on my dreams.
            </p>

            <p>
                Their love, sacrifices, and guidance motivate me
                to become a better person every day.
            </p>

        </div>



    <!-- =========================
         CONTACT
    ========================== -->

    <section id="contact">

        <h2>📞 Contact Me</h2>

        <div class="card contact-info">

            <p>
                📞 Phone:
                <a href="tel:9
                  ,994804405">
                    9948044005
                  
                </a>
            </p>

            <p>
                📧 Email:
                <a href="mailto:burriabhisree@gmail.com.com">
                    burriabhisree@gmail.com
                </a>
            </p>

        </div>


        <h2>📍 My Address</h2>

        <div class="card">

            <ul>
                <li>Village: SAIPET</li>
                <li>Mandal: DHARMASAGAR</ul>
                <li>District: HANUMAKONDA</li>
                <li>PIN Code: 506142</li>
            </ul>

        </div>

</section>


    <!-- =========================
         FOOTER
    ========================== -->

    <footer>

        <p>© 2026 B. Abhitejas varma </p>
        <p>My Personal Portfolio</p>

    </footer>


    <!-- BACK TO TOP -->
        ↑