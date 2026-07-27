-- phpMyAdmin SQL Dump
-- version 5.2.3
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1:3306
-- Generation Time: Jul 16, 2026 at 12:19 PM
-- Server version: 8.4.7
-- PHP Version: 8.3.28

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `auth_db`
--

-- --------------------------------------------------------

--
-- Table structure for table `users`
--

DROP TABLE IF EXISTS `users`;
CREATE TABLE IF NOT EXISTS `users` (
  `id` int NOT NULL AUTO_INCREMENT,
  `name` varchar(50) COLLATE utf8mb4_unicode_ci NOT NULL,
  `email` varchar(50) COLLATE utf8mb4_unicode_ci DEFAULT NULL,
  `password` varchar(255) COLLATE utf8mb4_unicode_ci NOT NULL,
  `role` varchar(20) COLLATE utf8mb4_unicode_ci NOT NULL DEFAULT 'user',
  PRIMARY KEY (`id`),
  UNIQUE KEY `email` (`email`)
) ENGINE=MyISAM AUTO_INCREMENT=11 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_unicode_ci;

--
-- Dumping data for table `users`
--

INSERT INTO `users` (`id`, `name`, `email`, `password`, `role`) VALUES
(4, 'Abhishek Yadav', 'qwe@gmail.com', '$2y$10$jnMaTsPK9npVLbbPtUxYWu.0oGYa9tcdts0NbYp9MLo', 'user'),
(5, 'Laxmi Narayan Sharma', 'tyu@gmail.com', '$2y$10$hs/.fuldtqX8jrPQ6a5iMOc1wnRpxGvYSqw.AeU3GjN', 'user'),
(6, 'Mohan Das ', 'cgd@gmail.com', '$2y$10$31qTmBj5IUDgU0RHD1HgLeL2kTaL1ZgPNlCCqlLk5vz', 'admin'),
(9, 'Aman', 'Aman@gmail.com', '$2y$10$c5WJ1EZQ4/Gcs3PeheawwOOZNQHSSrASvQFhO8FLWB4Go6mjkomNu', 'admin'),
(10, 'mahesh', 'mahesh@gmail.com', '$2y$10$b6EYPd0lD5HdumOREiGkeeipcubbItWvFxu8juHHpNFaDG8EKCS2K', 'user');
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
