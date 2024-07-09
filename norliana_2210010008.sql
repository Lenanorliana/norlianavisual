-- phpMyAdmin SQL Dump
-- version 5.2.0
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Jul 08, 2024 at 07:16 PM
-- Server version: 10.4.24-MariaDB
-- PHP Version: 8.1.6

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `norliana_2210010008`
--

-- --------------------------------------------------------

--
-- Table structure for table `barang1`
--

CREATE TABLE `barang1` (
  `idbarang` varchar(10) CHARACTER SET utf8mb4 NOT NULL,
  `nama` varchar(20) CHARACTER SET utf8mb4 NOT NULL,
  `spesipikasi` varchar(50) CHARACTER SET utf8mb4 NOT NULL,
  `satuan` decimal(10,0) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `barang1`
--

INSERT INTO `barang1` (`idbarang`, `nama`, `spesipikasi`, `satuan`) VALUES
('22100', 'Laptop', 'Bagus', '450000'),
('22200', 'Meja', 'Baik', '34000');

-- --------------------------------------------------------

--
-- Table structure for table `bukti_pembayaran`
--

CREATE TABLE `bukti_pembayaran` (
  `nobukti` varchar(10) CHARACTER SET utf8mb4 NOT NULL,
  `noinvoice` varchar(10) CHARACTER SET utf8mb4 NOT NULL,
  `tglbukti` date NOT NULL,
  `keterangan` text CHARACTER SET utf8mb4 NOT NULL,
  `norek` varchar(20) CHARACTER SET utf8mb4 NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `bukti_pembayaran`
--

INSERT INTO `bukti_pembayaran` (`nobukti`, `noinvoice`, `tglbukti`, `keterangan`, `norek`) VALUES
('', '', '0000-00-00', '', ''),
('1', '134', '0000-00-00', 'da', '131131'),
('1232', '134', '0000-00-00', 'da', '131131'),
('3535', '4242', '0000-00-00', 'emas', '');

-- --------------------------------------------------------

--
-- Table structure for table `bukti_timbangan`
--

CREATE TABLE `bukti_timbangan` (
  `nobukti` varchar(10) CHARACTER SET utf8mb4 NOT NULL,
  `tglmasuk` date NOT NULL,
  `tglkirim` date NOT NULL,
  `nopolisi` varchar(10) CHARACTER SET utf8mb4 NOT NULL,
  `nobt` varchar(10) CHARACTER SET utf8mb4 NOT NULL,
  `tglkeluar` date NOT NULL,
  `beratmasuk` varchar(5) CHARACTER SET utf8mb4 NOT NULL,
  `beratkeluar` varchar(5) CHARACTER SET utf8mb4 NOT NULL,
  `nogr` varchar(10) CHARACTER SET utf8mb4 NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `bukti_timbangan`
--

INSERT INTO `bukti_timbangan` (`nobukti`, `tglmasuk`, `tglkirim`, `nopolisi`, `nobt`, `tglkeluar`, `beratmasuk`, `beratkeluar`, `nogr`) VALUES
('1', '0000-00-00', '0000-00-00', 'da3232', 'da3232', '0000-00-00', '1ton', '0,8to', ''),
('132', '0000-00-00', '0000-00-00', '', '', '0000-00-00', '', '', ''),
('2', '0000-00-00', '0000-00-00', 'da3232', 'da3232', '0000-00-00', '1ton', '0,8to', ''),
('232', '0000-00-00', '0000-00-00', '', '', '0000-00-00', '', '', ''),
('3', '0000-00-00', '0000-00-00', 'da3232', 'da3232', '0000-00-00', '1ton', '0,8to', '');

-- --------------------------------------------------------

--
-- Table structure for table `good_receipt`
--

CREATE TABLE `good_receipt` (
  `nogr` varchar(10) CHARACTER SET utf8mb4 NOT NULL,
  `tglmasuk` date NOT NULL,
  `tglposting` date NOT NULL,
  `jumlahorder` varchar(10) CHARACTER SET utf8mb4 NOT NULL,
  `tglgr` date NOT NULL,
  `keterangan` varchar(20) CHARACTER SET utf8mb4 NOT NULL,
  `nopo` varchar(10) CHARACTER SET utf8mb4 NOT NULL,
  `jangkapengiriman` varchar(10) CHARACTER SET utf8mb4 NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `good_receipt`
--

INSERT INTO `good_receipt` (`nogr`, `tglmasuk`, `tglposting`, `jumlahorder`, `tglgr`, `keterangan`, `nopo`, `jangkapengiriman`) VALUES
('121', '0000-00-00', '0000-00-00', '100', '0000-00-00', 'baik', '8', '5 hari');

-- --------------------------------------------------------

--
-- Table structure for table `gudang`
--

CREATE TABLE `gudang` (
  `idgudang` varchar(10) CHARACTER SET utf8mb4 NOT NULL,
  `alamatgudang` text CHARACTER SET utf8mb4 NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `gudang`
--

INSERT INTO `gudang` (`idgudang`, `alamatgudang`) VALUES
('33100', 'Pegambangan');

-- --------------------------------------------------------

--
-- Table structure for table `invoice1`
--

CREATE TABLE `invoice1` (
  `noinvoice` varchar(10) CHARACTER SET utf8mb4 NOT NULL,
  `nopo` varchar(10) CHARACTER SET utf8mb4 NOT NULL,
  `tglinvoice` date NOT NULL,
  `discon` varchar(10) CHARACTER SET utf8mb4 NOT NULL,
  `ppn` decimal(10,0) NOT NULL,
  `jumbayar` decimal(10,0) NOT NULL,
  `idkaryawan` varchar(10) CHARACTER SET utf8mb4 NOT NULL,
  `jangkapengiriman` varchar(10) CHARACTER SET utf8mb4 NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `invoice1`
--

INSERT INTO `invoice1` (`noinvoice`, `nopo`, `tglinvoice`, `discon`, `ppn`, `jumbayar`, `idkaryawan`, `jangkapengiriman`) VALUES
('12', '1', '0000-00-00', '1000', '500', '12000', '2', '2 hRI');

-- --------------------------------------------------------

--
-- Table structure for table `karyawan1`
--

CREATE TABLE `karyawan1` (
  `nik` varchar(10) CHARACTER SET utf8mb4 NOT NULL,
  `nama` varchar(50) CHARACTER SET utf8mb4 NOT NULL,
  `alamat` text CHARACTER SET utf8mb4 NOT NULL,
  `telp` varchar(20) CHARACTER SET utf8mb4 NOT NULL,
  `golongan` varchar(3) NOT NULL,
  `status` varchar(10) NOT NULL,
  `anak` int(3) NOT NULL,
  `masa` int(2) NOT NULL,
  `gaji` int(10) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `karyawan1`
--

INSERT INTO `karyawan1` (`nik`, `nama`, `alamat`, `telp`, `golongan`, `status`, `anak`, `masa`, `gaji`) VALUES
('', '', '', '', 'I', 'Menikah', 0, 0, 3500000),
('22111', 'lena liana', 'banjarbaru', '081952441', 'I', 'Menikah', 3, 10, 1000000),
('22112', 'lia', 'bogor', '3525252', 'I', 'Belum Meni', 0, 2, 3500000),
('32324', 'lena', 'handil', '12345', 'I', 'Menikah', 2, 4, 3900000),
('345353', 'lia', 'jakarta', '034353', 'II', 'Menikah', 2, 6, 4600000);

-- --------------------------------------------------------

--
-- Table structure for table `kenderaan`
--

CREATE TABLE `kenderaan` (
  `nopolisi` varchar(10) NOT NULL,
  `jenis` varchar(10) NOT NULL,
  `muatan` varchar(10) NOT NULL,
  `sopir` varchar(20) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `kenderaan`
--

INSERT INTO `kenderaan` (`nopolisi`, `jenis`, `muatan`, `sopir`) VALUES
('', '', '', ''),
('12134', '232', '1', 'zaki'),
('242', '', '', '');

-- --------------------------------------------------------

--
-- Table structure for table `klien`
--

CREATE TABLE `klien` (
  `idklien` varchar(10) CHARACTER SET utf8mb4 NOT NULL,
  `namaklien` text CHARACTER SET utf8mb4 NOT NULL,
  `alamat` text CHARACTER SET utf8mb4 NOT NULL,
  `telp` varchar(13) CHARACTER SET utf8mb4 NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `klien`
--

INSERT INTO `klien` (`idklien`, `namaklien`, `alamat`, `telp`) VALUES
('44100', 'Norliana', 'Handil Bakti', '08979786757');

-- --------------------------------------------------------

--
-- Table structure for table `mou_klien1`
--

CREATE TABLE `mou_klien1` (
  `nomou` varchar(10) CHARACTER SET utf8mb4 NOT NULL,
  `idklien` varchar(10) CHARACTER SET utf8mb4 NOT NULL,
  `tglmou` date NOT NULL,
  `jangkawaktu` year(4) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `mou_klien1`
--

INSERT INTO `mou_klien1` (`nomou`, `idklien`, `tglmou`, `jangkawaktu`) VALUES
('12', '1', '0000-00-00', 0000),
('1212', '1', '2024-06-12', 0000),
('3', '23', '0000-00-00', 2004),
('4', '121', '0000-00-00', 2003);

-- --------------------------------------------------------

--
-- Table structure for table `penawaran`
--

CREATE TABLE `penawaran` (
  `nopenawaran` varchar(10) CHARACTER SET utf8mb4 DEFAULT NULL,
  `idbarang` varchar(10) CHARACTER SET utf8mb4 NOT NULL,
  `status` varchar(200) CHARACTER SET utf8mb4 NOT NULL,
  `harga` decimal(10,0) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `penawaran`
--

INSERT INTO `penawaran` (`nopenawaran`, `idbarang`, `status`, `harga`) VALUES
('55100', '400', 'Nego', '870000');

-- --------------------------------------------------------

--
-- Table structure for table `purchase_order`
--

CREATE TABLE `purchase_order` (
  `nopo` varchar(10) CHARACTER SET utf8mb4 NOT NULL,
  `jangkapengiriman` varchar(10) CHARACTER SET utf8mb4 NOT NULL,
  `idklien` varchar(10) CHARACTER SET utf8mb4 NOT NULL,
  `tglpo` date NOT NULL,
  `statuspo` varchar(50) CHARACTER SET utf8mb4 NOT NULL,
  `qty` varchar(20) CHARACTER SET utf8mb4 NOT NULL,
  `harga` decimal(10,0) NOT NULL,
  `UoM` varchar(10) CHARACTER SET utf8mb4 NOT NULL,
  `idbarang` varchar(10) CHARACTER SET utf8mb4 NOT NULL,
  `idgudang` varchar(10) CHARACTER SET utf8mb4 NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `purchase_order`
--

INSERT INTO `purchase_order` (`nopo`, `jangkapengiriman`, `idklien`, `tglpo`, `statuspo`, `qty`, `harga`, `UoM`, `idbarang`, `idgudang`) VALUES
('12', '2 tahun', '1', '0000-00-00', 'baik', '234', '1000', '564', '2', '1');

-- --------------------------------------------------------

--
-- Table structure for table `transaksi_penawaran`
--

CREATE TABLE `transaksi_penawaran` (
  `nopenawaran` varchar(10) CHARACTER SET utf8mb4 NOT NULL,
  `idbarang` varchar(10) CHARACTER SET utf8mb4 NOT NULL,
  `idklien` varchar(10) CHARACTER SET utf8mb4 NOT NULL,
  `tglpenawaran` date NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `transaksi_penawaran`
--

INSERT INTO `transaksi_penawaran` (`nopenawaran`, `idbarang`, `idklien`, `tglpenawaran`) VALUES
('12', '1', '2', '0000-00-00');

--
-- Indexes for dumped tables
--

--
-- Indexes for table `barang1`
--
ALTER TABLE `barang1`
  ADD PRIMARY KEY (`idbarang`);

--
-- Indexes for table `bukti_pembayaran`
--
ALTER TABLE `bukti_pembayaran`
  ADD PRIMARY KEY (`nobukti`);

--
-- Indexes for table `bukti_timbangan`
--
ALTER TABLE `bukti_timbangan`
  ADD PRIMARY KEY (`nobukti`);

--
-- Indexes for table `good_receipt`
--
ALTER TABLE `good_receipt`
  ADD PRIMARY KEY (`nogr`);

--
-- Indexes for table `gudang`
--
ALTER TABLE `gudang`
  ADD PRIMARY KEY (`idgudang`);

--
-- Indexes for table `invoice1`
--
ALTER TABLE `invoice1`
  ADD PRIMARY KEY (`noinvoice`);

--
-- Indexes for table `karyawan1`
--
ALTER TABLE `karyawan1`
  ADD PRIMARY KEY (`nik`);

--
-- Indexes for table `kenderaan`
--
ALTER TABLE `kenderaan`
  ADD PRIMARY KEY (`nopolisi`);

--
-- Indexes for table `klien`
--
ALTER TABLE `klien`
  ADD PRIMARY KEY (`idklien`);

--
-- Indexes for table `mou_klien1`
--
ALTER TABLE `mou_klien1`
  ADD PRIMARY KEY (`nomou`);

--
-- Indexes for table `purchase_order`
--
ALTER TABLE `purchase_order`
  ADD PRIMARY KEY (`nopo`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
