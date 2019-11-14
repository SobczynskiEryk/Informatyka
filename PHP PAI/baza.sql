-- phpMyAdmin SQL Dump
-- version 4.9.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Czas generowania: 14 Lis 2019, 18:30
-- Wersja serwera: 10.4.8-MariaDB
-- Wersja PHP: 7.3.10

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET AUTOCOMMIT = 0;
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Baza danych: `baza`
--

-- --------------------------------------------------------

--
-- Struktura tabeli dla tabeli `poprawne_odp`
--

CREATE TABLE `poprawne_odp` (
  `ID_użytkownika` int(11) NOT NULL,
  `ID_pytania` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- --------------------------------------------------------

--
-- Struktura tabeli dla tabeli `pytania_szkola`
--

CREATE TABLE `pytania_szkola` (
  `ID_pytania` int(11) NOT NULL,
  `Pytanie` text NOT NULL,
  `Odp` text NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

--
-- Zrzut danych tabeli `pytania_szkola`
--

INSERT INTO `pytania_szkola` (`ID_pytania`, `Pytanie`, `Odp`) VALUES
(1, 'Szkoła z internatem', 'boarding school'),
(2, 'szkoła niepubliczna', 'independent school'),
(3, 'przedszkole', 'nursery school'),
(4, 'szkoła podstawowa', 'primary school'),
(5, 'szkoła publiczna', 'public school'),
(6, 'szkoła średnia', 'secondary school'),
(7, 'szkoła zawodowa', 'vocational school'),
(8, 'rok akademicki', 'academic year'),
(9, 'uczęszczać na wykłady', 'attend lectures'),
(10, 'Licencjat w dziedzinie nauk humanistycznych', 'Bachelor of Arts'),
(11, 'studia podyplomowe', 'postgraduate course'),
(12, 'publikacja naukowa', 'research paper'),
(13, 'praca semestralna', 'term paper'),
(14, 'czesne', 'university fees'),
(15, 'nauki społeczne', 'social ciences'),
(16, 'rok szkolny', 'school year'),
(17, 'wieczne pióro', 'fountain pen'),
(18, 'wieczne pióro', 'fountain pen'),
(19, 'dziurkacz', 'hole punch'),
(20, 'ekierka', 'set square'),
(21, 'plecak', 'backpack'),
(22, 'cyrkiel', 'compass'),
(23, 'zakreślacz', 'highlighter'),
(24, 'notatnik', 'notepad'),
(25, 'gumka do mazania', 'rubber'),
(26, 'spinacz do papieru', 'paperclip'),
(27, 'szywacz', 'stapler'),
(28, 'teczka', 'folder'),
(29, 'kampus uniwersytecki', 'campus'),
(30, 'dziekan', 'dean'),
(31, 'praca magisteraska', 'thesis'),
(32, 'przeciętny', 'avarage'),
(33, 'zdolności', 'abilities'),
(34, 'kreatywność', 'creativity'),
(35, 'utalentowany', 'talented'),
(36, 'prześladowca', 'bully'),
(37, 'wykres', 'graph'),
(38, 'przedmioty ścisłe', 'science'),
(39, 'źle się zachowywać', 'misbehave'),
(40, 'wsparcie', 'support'),
(41, 'być nieobecnym w szkole', 'be off school'),
(42, 'nadrobić materiał z zajęć', 'catch up on school work'),
(43, 'rzucić szkołę', 'drop out of school'),
(44, 'mieć zaległości w nauce', 'fall behind with school work'),
(45, 'zabrać się do pracy', 'get down to work'),
(46, 'spóźnić się', 'turn up late'),
(47, 'łatwizna', 'piece of cake'),
(48, 'kurs pierwszej pomocy', 'first aid training'),
(49, 'rozwijać umiejętności interpersonalne', 'develop interpersonal skills'),
(50, 'przygotować egzamin', 'set an exam'),
(51, 'mieć trudności', 'have a hard time'),
(52, 'rozwiązywać równania kwadratowe', 'solve quadratic equatrions'),
(53, 'dostać się na uniwersytet', 'get into university'),
(54, 'opisać doświadczenie', 'write up an experiment'),
(55, 'nie chodzić do szkoły', 'be off school'),
(56, 'wydalić kogoś', 'throw somebody out'),
(57, 'oblać egazmin', 'flunk an exam'),
(58, 'specjalne potrzeby edukacyjne', 'special education needs'),
(59, 'średnia ocen', 'grade point average'),
(60, 'opawiać prace domową', 'give feedback on homework');

-- --------------------------------------------------------

--
-- Struktura tabeli dla tabeli `users`
--

CREATE TABLE `users` (
  `ID_użytkownika` int(11) NOT NULL,
  `Login` text NOT NULL,
  `Hasło` text NOT NULL,
  `Mail` text NOT NULL,
  `Punkty` int(3) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

--
-- Zrzut danych tabeli `users`
--

INSERT INTO `users` (`ID_użytkownika`, `Login`, `Hasło`, `Mail`, `Punkty`) VALUES
(1, 'Kubamaz17', 'mazur!D3bil', 'kubamaz17@gmail.com', 0);

--
-- Indeksy dla zrzutów tabel
--

--
-- Indeksy dla tabeli `pytania_szkola`
--
ALTER TABLE `pytania_szkola`
  ADD PRIMARY KEY (`ID_pytania`);

--
-- Indeksy dla tabeli `users`
--
ALTER TABLE `users`
  ADD PRIMARY KEY (`ID_użytkownika`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT dla tabeli `pytania_szkola`
--
ALTER TABLE `pytania_szkola`
  MODIFY `ID_pytania` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=61;

--
-- AUTO_INCREMENT dla tabeli `users`
--
ALTER TABLE `users`
  MODIFY `ID_użytkownika` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=2;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
