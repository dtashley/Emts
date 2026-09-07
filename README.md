# EMTS

- [Overview](#overview)
- [License](*license)
  - [The Unlicense](#theunlicense)
  - [License Clarifications](#licenseclarifications)
- [Glossary of Notation](#glossaryofnotation)
- [Glossary of Terms](#glossaryofterms)
- [References](#references)  

## Overview

*EMTS* (*Em*bedded System *T*ool*s*et Base)
is a set of software source files (and related files and
information) provided to assist in the construction
of PC and server tools useful in embedded system
engineering.

An *EMTS* project consists of:

* The *EMTS Core*, which has to be included in all
  projects.
* *EMTS Modules* (a *module* is defined later), which
  may or may not be included in a project.
* *Application Modules*, which are written by the
  user of the *EMTS* framework.

*EMTS* might also be described as a tool integration framework.
It provides the capability to integrate user tools
with each other and with built-in *EMTS* functionality.

The tools that can be produced using *EMTS* are:

* A command-line tool for *Windows*.
* A command-line tool for _*nix_.
* A native GUI tool for *Windows*.

*EMTS* relies on two companion libraries:

* [LibGen](https://github.com/dtashley/LibGen), a general-purpose
  non-numeric C / C++ library, distributed in source code form.
* [LibNum](https://github.com/dtashley/LibNum), a numeric
  C / C++ / assembly-language library, ,distributed in source code
  form

The general process of building an EMTS project involves:

* Checking out and arranging *EMTS*, *LibGen*, *LibNum*, and application
  source files in a recommended directory arrangement.
* Incorporating the necessary source files into the project (i.e. *Visual
  Studio* project, makefile, etc.) being built.
* Setting up preprocessor directives so that *EMTS*, *LibGen*,
  and *LibNum* compile as intended.
* Building the project and using the executable.

*EMTS*, *LibGen*, and *LibNum* are all provided under _The Unlicense_,
so there are no restrictions on their use, no obligation to make
source code changes public, and no obligation to disclose to end users
a program incorporates open-source software.

## License

*EMTS* is provided under *The Unlicense* (text below).  I've also
provided license clarifications, also below.

### The Unlicense

TBD.

### License Clarifications

TBD.


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

\section*{Sets Of Numbers}

\begin{vworkmathtermglossaryenum}

\item \mbox{\boldmath $\vworkintsetpos$}

      The 
      \index{natural number}
      \index{N@$\vworkintsetpos$}
      set of positive integers (natural numbers).

\item \mbox{\boldmath $\vworkratset$}

      The 
      \index{rational number}
      \index{Q@$\vworkratset$}
      set of rational numbers.

\item \mbox{\boldmath $\vworkratsetnonneg$}

      The 
      \index{rational number}
      \index{Q+@$\vworkratsetnonneg$}
      set of non-negative rational numbers.

\item \mbox{\boldmath $\vworkrealset$}

      The 
      \index{real number}
      \index{R@$\vworkrealset$}
      set of real numbers.

\item \mbox{\boldmath $\vworkrealsetnonneg$}

      The 
      \index{real number}
      \index{R+@$\vworkrealsetnonneg$}
      set of non-negative real numbers.

\item \mbox{\boldmath $\vworkintset$}

      The 
      \index{integer}
      \index{Z@$\vworkintset$}
      set of integers.

\item \mbox{\boldmath $\vworkintsetnonneg$}

      The 
      \index{integer}
      \index{Z+@$\vworkintsetnonneg$}
      set of non-negative integers.

\end{vworkmathtermglossaryenum}

%End of file c_glo3.tex

\chapter{\cinttwotitle{}}

\label{cint2}


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
\section{Overview of This Manual}
\label{cint2:siov0}

This manual describes \emph{\productname{}}, a customizable tool integration
framework.

\emph{\productname{}} is a customizable tool integration framework:
\begin{itemize}
      \item It allows the same tools, built from the same source code,
            to be used in a consistent way in the following forms:
            \begin{itemize}
                  \item Standalone console-mode programs.
                  \item As built-in functions in a scripting language, \emph{CLIKE}.
                  \item As programs with a GUI interface.
            \end{itemize}
      \item It provides a base product with substantial functionality that can be
            customized and extended through:
            \begin{itemize}
                \item The addition of functionality packaged as standalone conole-mode programs,
                      built-in functions in a scripting langauge, and panels in GUI
                      program.
                \item Customized opening graphics.
                \item Customized help and contact information.
          \end{itemize}
\end{itemize}


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
\section{Overview of \productname{}}
\label{cint2:siov1}

\emph{\productname{}} contains a core, called the \emph{core}
or the \emph{\productname{} core},
that is not designed to be divided.  Any proprietary or custom tool built
using \emph{\productname{}} would contain the entire core, combined
with additional proprietary or custom content.

Outside of the core, the fundamental building block of \emph{\productname{}}
is the \emph{\productname{} module}, or \emph{module}.  A module is the
smallest unit that can be included or not included in a build
of \emph{\productname{}}.  A module is atomic and not designed to
divided.  A \emph{tool} generally corresponds to closely related functionality;
cryptographic hashing functions, for example.

A module may contain one or more \emph{tools}.  A tool generally
corresponds to narrow functionality; the SHA256 hash, for example.

A tool may contain one or more \emph{commands}.  A command
generally has very narrow scope to support a tool.  For example,
an SHA256 tool might contain two commands, one to calculate the
hash of a string, and another to calculate the hash of a file.

The notions of module, tool, and command are subjective enough
that no guarantees can be made about how they might be
defined.  The only guarantee that can be made is that a
module corresponds to an integral number of panels
in the graphical tool.


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
\section{Motivation for \emph{\productname{}}}
%Section tag: MFP0
\label{cint2:smfp0}

TBD.


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
\section{Detailed Description of \emph{\productname{}}}
%Section tag: DDP0
\label{cint2:sddp0}

This manual describes \emph{\productname{}}, a customizable tool integration
framework.

\emph{\productname{}} is a customizable tool integration framework:
\begin{itemize}
      \item It allows the same tools, built from the same source code,
            to be used in a consistent way in the following forms:
            \begin{itemize}
                  \item Standalone console-mode programs.
                  \item As built-in functions in a scripting language, \emph{CLIKE}.
                  \item As programs with a GUI interface.
            \end{itemize}
      \item It provides a base product with substantial functionality that can be
            customized and extended through:
            \begin{itemize}
                \item The addition of functionality packaged as standalone conole-mode programs,
                      built-in functions in a scripting langauge, and panels in GUI
                      program.
                \item Customized opening graphics.
                \item Customized help and contact information.
          \end{itemize}
\end{itemize}

%Certum card instructions.
%
%Cut the card out of the holder.
%
%Installed in the reader (took a little guessing to get it open).
%
%Installed the SmartCard reader drivers from the ACS website.
%
%Rebooted to be sure.
%
%Installed the ProCertum CardManager, 64-bit MSI.
%
%Rebooted per instructions.
%
%Read card, Initialized, then set my standard 6-digit value for both PIN and PUK (they are set identically).
%
%20240810:  Results from renewing code signing certificate.  Went through automatic verification
%           process tonight.  It involved a cellphone and taking a picture of my identity
%           document (passport), and some shots of my face.
%
%           Status of process unclear.  Believe I've done all I can do.  Should know by
%           Monday, which should be a work day for Certum.
%
%           Process is unclear.  I believed I would use old certificate to help authenticate
%           the renewal, but from the instructions it appears that I don't do this.
%
%           Could not find earlier notes anywhere, so it appears I will have to re-document
%           how to use the card, or search more for my earlier notes.
%
%
%
%
%
%
%
%
%
%
%
%
%
%
%
%
%
%
%
%
%
%
%
%
%
%
%
%
%
%
%End of file c_int2.tex

\chapter{\cspszerotitle{}}

\label{csps0}

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
\section{Purchase and Setup of Code Signing Certificate}
%Section tag: PSC0
\label{csps0:spsc0}

All of the lines are \LaTeX{} comments until I get it formatted and
ready for compilation.

% Purchased from Certum.  All went according to published procedures,
% except installation of certificate per instruction.
% 
% My issue is solved.  Please disregard my technical support request (although if there is
% anything additional I should read, I'd be grateful for links).
% 
% a)I ran the command shell as administrator (that seems to make a difference).
% 
% b)I used the ``/debug'' option with SIGNTOOL and determined that it is only looking in
% the Personal/Certificates area of the stored certificates.  The proCertum application
% installs the certificate in the Other People/Certificates area of the stored
% certificates, which is apparently not checked by SIGNTOOL. 
% So I had to import the certificate into the right location.
% 
% Step #1
% -------
% After installing certificate from the proCertum Card application, made sure it was present in both Personal/Certificates
% and Other People/Certificates folders.  Copy and Paste within certmgr does that.
%
% Step #2
% -------
% Discovered that there is a "certlm" application as well as a "certmgr" application.  Believe I may have tried putting
% certificates there as well, but I'm not sure it made a difference.  Local machine versus local user.
%
% Step #3
% -------
% Discovered that the "/debug" option has to be placed immediately after "sign".
%
% "c:\Program Files (x86)\Windows Kits\10\bin\10.0.22621.0\x64\signtool.exe" sign /n "David Ashley" /t http://time.certum.pl/ /fd sha256 /v emts_ifsfscan.exe /debug
%
% versus
%
% "c:\Program Files (x86)\Windows Kits\10\bin\10.0.22621.0\x64\signtool.exe" sign /debug /n "David Ashley" /t http://time.certum.pl/ /fd sha256 /v emts_ifsfscan.exe
%
% Step #4
% -------
% Based on various Internet postings, tried this command:
%
% certutil -repairstore
%
% Seemed to have no effect.
%
% Step #5
% -------
% Upgraded to the latest version of the windows kit, 26100.  That changed the command line slightly.
%
% Step #6
% -------
% Determined that the problem was with the "Private Key filter".

% C:\Users\dashl\Documents>"c:\Program Files (x86)\Windows Kits\10\bin\10.0.26100.0\x64\signtool.exe" sign /debug /n "David Ashley" /t http://time.certum.pl/ /fd sha256 /v emts_ifsfscan.exe
% 
% The following certificates were considered:
%     Issued to: David Ashley
%     Issued by: Certum Code Signing 2021 CA
%     Expires:   Sat Aug 16 01:46:38 2025
%     SHA1 hash: D5F54EEBC165FE82202C2DB9B633D4885B12E5C5
% 
%     Issued to: c1e26399-5bee-45e3-9c33-e51655695ace
%     Issued by: c1e26399-5bee-45e3-9c33-e51655695ace
%     Expires:   Thu Mar 20 11:14:56 2025
%     SHA1 hash: 4DECD3C81B96AEB6C226C5126E4DE999506A953D
% 
%     Issued to: 1418c40a-aa3e-4259-a258-2d929d1b383b
%     Issued by: 1418c40a-aa3e-4259-a258-2d929d1b383b
%     Expires:   Thu Jan 16 10:55:18 2025
%     SHA1 hash: 3B3A4254A5CDAE9F4A975C272259064854624C9F
% 
%     Issued to: a3665860-c4e0-4b3e-adc5-ffe3bfd8721a
%     Issued by: MS-Organization-Access
%     Expires:   Mon Jan 07 18:55:40 2030
%     SHA1 hash: 17784374B18C0EB9EB0346442EC21B4984D6225A
% 
% After EKU filter, 3 certs were left.
% After expiry filter, 3 certs were left.
% After Subject Name filter, 1 certs were left.
% After Private Key filter, 0 certs were left.
% SignTool Error: No certificates were found that met all the given criteria.
%
% Searched the Internet.
%
% Step #7
% -------
% Got information from certmgr.
% 
% C:\Users\dashl\Documents>certutil -scinfo
% The Microsoft Smart Card Resource Manager is running.
% Current reader/card status:
% Readers: 1
%   0: ACS ACR39U ICC Reader 0
% --- Reader: ACS ACR39U ICC Reader 0
% --- Status: SCARD_STATE_PRESENT | SCARD_STATE_UNPOWERED
% --- Status: The card is available for use.
% ---   Card:  cryptoCertum3.6
% ---    ATR:
%         3b 7f 96 00 00 80 31 80  58 43 65 72 74 75 6d 30   ;.....1.XCertum0
%         31 82 90 00                                        1...
% 
% 
% =======================================================
% Analyzing card in reader: ACS ACR39U ICC Reader 0
% 
% --------------===========================--------------
% ================ Certificate 0 ================
% --- Reader: ACS ACR39U ICC Reader 0
% ---   Card:  cryptoCertum3.6
% Provider = Microsoft Base Smart Card Crypto Provider
% Key Container = CFC2BAB12D160BF78F203DDC1E78D95A7E7D644
% 
% Serial Number: 65c7bf928db4fff3558e09aa30e8c49e
% Issuer: CN=Certum Code Signing 2021 CA, O=Asseco Data Systems S.A., C=PL
%  NotBefore: 8/16/2024 1:46 AM
%  NotAfter: 8/16/2025 1:46 AM
% Subject: CN=David Ashley, O=David Ashley, L=Allen Park, S=Michigan, C=US
% Non-root Certificate
% Cert Hash(sha1): d5f54eebc165fe82202c2db9b633d4885b12e5c5
% 
% Performing AT_SIGNATURE public key matching test...
% Public key matching test succeeded
%   Key Container = CFC2BAB12D160BF78F203DDC1E78D95A7E7D644
%   Provider = Microsoft Base Smart Card Crypto Provider
%   ProviderType = 1
%   Flags = 1
%     0x1 (1)
%   KeySpec = 2 -- AT_SIGNATURE
% Private key verifies
% 
% Performing cert chain verification...
% Chain validates
% Smart Card Logon: Chain on smart card is invalid
% dwFlags = CA_VERIFY_FLAGS_CONSOLE_TRACE (0x20000000)
% dwFlags = CA_VERIFY_FLAGS_DUMP_CHAIN (0x40000000)
% ChainFlags = CERT_CHAIN_REVOCATION_CHECK_CHAIN_EXCLUDE_ROOT (0x40000000)
% HCCE_LOCAL_MACHINE
% CERT_CHAIN_POLICY_BASE
% -------- CERT_CHAIN_CONTEXT --------
% ChainContext.dwInfoStatus = CERT_TRUST_HAS_PREFERRED_ISSUER (0x100)
% ChainContext.dwRevocationFreshnessTime: 5 Days, 18 Hours, 6 Minutes, 26 Seconds
% 
% SimpleChain.dwInfoStatus = CERT_TRUST_HAS_PREFERRED_ISSUER (0x100)
% SimpleChain.dwRevocationFreshnessTime: 5 Days, 18 Hours, 6 Minutes, 26 Seconds
% 
% CertContext[0][0]: dwInfoStatus=102 dwErrorStatus=0
%   Issuer: CN=Certum Code Signing 2021 CA, O=Asseco Data Systems S.A., C=PL
%   NotBefore: 8/16/2024 1:46 AM
%   NotAfter: 8/16/2025 1:46 AM
%   Subject: CN=David Ashley, O=David Ashley, L=Allen Park, S=Michigan, C=US
%   Serial: 65c7bf928db4fff3558e09aa30e8c49e
%   Cert: d5f54eebc165fe82202c2db9b633d4885b12e5c5
%   Element.dwInfoStatus = CERT_TRUST_HAS_KEY_MATCH_ISSUER (0x2)
%   Element.dwInfoStatus = CERT_TRUST_HAS_PREFERRED_ISSUER (0x100)
%     CRL (null):
%     Issuer: CN=Certum Code Signing 2021 CA Validation Service, O=Asseco Data Systems S.A., C=PL
%     ThisUpdate: 8/16/2024 11:04 AM
%     NextUpdate: 8/23/2024 11:04 AM
%     CRL: 2ece42454c488182ca9be31a1e43bc455028c0ee
%   Issuance[0] = 2.23.140.1.4.1
%   Issuance[1] = 1.2.616.1.113527.2.5.1.4
%   Application[0] = 1.3.6.1.5.5.7.3.3 Code Signing
% 
% CertContext[0][1]: dwInfoStatus=102 dwErrorStatus=0
%   Issuer: CN=Certum Trusted Network CA 2, OU=Certum Certification Authority, O=Unizeto Technologies S.A., C=PL
%   NotBefore: 5/19/2021 1:32 AM
%   NotAfter: 5/18/2036 1:32 AM
%   Subject: CN=Certum Code Signing 2021 CA, O=Asseco Data Systems S.A., C=PL
%   Serial: 99a3800a26553b65abdc6e84a6b3ea39
%   Cert: 8d57e2b4008bbe461470a69f3492bc5ae362a7a9
%   Element.dwInfoStatus = CERT_TRUST_HAS_KEY_MATCH_ISSUER (0x2)
%   Element.dwInfoStatus = CERT_TRUST_HAS_PREFERRED_ISSUER (0x100)
%     CRL (null):
%     Issuer: CN=Certum Trusted Network CA 2 Validation Service, O=Asseco Data Systems S.A., C=PL
%     ThisUpdate: 8/10/2024 6:10 PM
%     NextUpdate: 8/17/2024 6:10 PM
%     CRL: 4766a90c4ef022d93996acfa27318c548a4595f8
%   Application[0] = 1.3.6.1.5.5.7.3.3 Code Signing
% 
% CertContext[0][2]: dwInfoStatus=10c dwErrorStatus=0
%   Issuer: CN=Certum Trusted Network CA 2, OU=Certum Certification Authority, O=Unizeto Technologies S.A., C=PL
%   NotBefore: 10/6/2011 4:39 AM
%   NotAfter: 10/6/2046 4:39 AM
%   Subject: CN=Certum Trusted Network CA 2, OU=Certum Certification Authority, O=Unizeto Technologies S.A., C=PL
%   Serial: 21d6d04a4f250fc93237fcaa5e128de9
%   Cert: d3dd483e2bbf4c05e8af10f5fa7626cfd3dc3092
%   Element.dwInfoStatus = CERT_TRUST_HAS_NAME_MATCH_ISSUER (0x4)
%   Element.dwInfoStatus = CERT_TRUST_IS_SELF_SIGNED (0x8)
%   Element.dwInfoStatus = CERT_TRUST_HAS_PREFERRED_ISSUER (0x100)
%   Application[0] = 1.3.6.1.5.5.7.3.2 Client Authentication
%   Application[1] = 1.3.6.1.5.5.7.3.3 Code Signing
%   Application[2] = 1.3.6.1.5.5.7.3.4 Secure Email
%   Application[3] = 1.3.6.1.5.5.7.3.1 Server Authentication
%   EV[0] = 1.2.616.1.113527.2.5.1.1
%   EV[1] = 1.2.616.1.113527.2.5.1.7
%   EV[2] = 2.23.140.1.3
% 
% Exclude leaf cert:
%   Chain: aed7917909ae63983d4878bef16ee07368b32bc0
% Full chain:
%   Chain: f175a0509a47c4d296f311acb97789b08ef23f1b
% ------------------------------------
% Verified Issuance Policies:
%     2.23.140.1.4.1
%     1.2.616.1.113527.2.5.1.4
% Verified Application Policies:
%     1.3.6.1.5.5.7.3.3 Code Signing
% Displayed AT_SIGNATURE cert for reader: ACS ACR39U ICC Reader 0
% Serial Number: 65c7bf928db4fff3558e09aa30e8c49e
% Issuer: CN=Certum Code Signing 2021 CA, O=Asseco Data Systems S.A., C=PL
%  NotBefore: 8/16/2024 1:46 AM
%  NotAfter: 8/16/2025 1:46 AM
% Subject: CN=David Ashley, O=David Ashley, L=Allen Park, S=Michigan, C=US
% Non-root Certificate
% Cert Hash(sha1): d5f54eebc165fe82202c2db9b633d4885b12e5c5
% 
% Performing AT_KEYEXCHANGE public key matching test...
% Public key matching test succeeded
%   Key Container = CFC2BAB12D160BF78F203DDC1E78D95A7E7D644
%   Provider = Microsoft Base Smart Card Crypto Provider
%   ProviderType = 1
%   Flags = 1
%     0x1 (1)
%   KeySpec = 1 -- AT_KEYEXCHANGE
% Private key verifies
% 
% Performing cert chain verification...
% Chain validates
% Smart Card Logon: Chain on smart card is invalid
% dwFlags = CA_VERIFY_FLAGS_CONSOLE_TRACE (0x20000000)
% dwFlags = CA_VERIFY_FLAGS_DUMP_CHAIN (0x40000000)
% ChainFlags = CERT_CHAIN_REVOCATION_CHECK_CHAIN_EXCLUDE_ROOT (0x40000000)
% HCCE_LOCAL_MACHINE
% CERT_CHAIN_POLICY_BASE
% -------- CERT_CHAIN_CONTEXT --------
% ChainContext.dwInfoStatus = CERT_TRUST_HAS_PREFERRED_ISSUER (0x100)
% ChainContext.dwRevocationFreshnessTime: 5 Days, 18 Hours, 6 Minutes, 28 Seconds
% 
% SimpleChain.dwInfoStatus = CERT_TRUST_HAS_PREFERRED_ISSUER (0x100)
% SimpleChain.dwRevocationFreshnessTime: 5 Days, 18 Hours, 6 Minutes, 28 Seconds
% 
% CertContext[0][0]: dwInfoStatus=102 dwErrorStatus=0
%   Issuer: CN=Certum Code Signing 2021 CA, O=Asseco Data Systems S.A., C=PL
%   NotBefore: 8/16/2024 1:46 AM
%   NotAfter: 8/16/2025 1:46 AM
%   Subject: CN=David Ashley, O=David Ashley, L=Allen Park, S=Michigan, C=US
%   Serial: 65c7bf928db4fff3558e09aa30e8c49e
%   Cert: d5f54eebc165fe82202c2db9b633d4885b12e5c5
%   Element.dwInfoStatus = CERT_TRUST_HAS_KEY_MATCH_ISSUER (0x2)
%   Element.dwInfoStatus = CERT_TRUST_HAS_PREFERRED_ISSUER (0x100)
%     CRL (null):
%     Issuer: CN=Certum Code Signing 2021 CA Validation Service, O=Asseco Data Systems S.A., C=PL
%     ThisUpdate: 8/16/2024 11:04 AM
%     NextUpdate: 8/23/2024 11:04 AM
%     CRL: 2ece42454c488182ca9be31a1e43bc455028c0ee
%   Issuance[0] = 2.23.140.1.4.1
%   Issuance[1] = 1.2.616.1.113527.2.5.1.4
%   Application[0] = 1.3.6.1.5.5.7.3.3 Code Signing
% 
% CertContext[0][1]: dwInfoStatus=102 dwErrorStatus=0
%   Issuer: CN=Certum Trusted Network CA 2, OU=Certum Certification Authority, O=Unizeto Technologies S.A., C=PL
%   NotBefore: 5/19/2021 1:32 AM
%   NotAfter: 5/18/2036 1:32 AM
%   Subject: CN=Certum Code Signing 2021 CA, O=Asseco Data Systems S.A., C=PL
%   Serial: 99a3800a26553b65abdc6e84a6b3ea39
%   Cert: 8d57e2b4008bbe461470a69f3492bc5ae362a7a9
%   Element.dwInfoStatus = CERT_TRUST_HAS_KEY_MATCH_ISSUER (0x2)
%   Element.dwInfoStatus = CERT_TRUST_HAS_PREFERRED_ISSUER (0x100)
%     CRL (null):
%     Issuer: CN=Certum Trusted Network CA 2 Validation Service, O=Asseco Data Systems S.A., C=PL
%     ThisUpdate: 8/10/2024 6:10 PM
%     NextUpdate: 8/17/2024 6:10 PM
%     CRL: 4766a90c4ef022d93996acfa27318c548a4595f8
%   Application[0] = 1.3.6.1.5.5.7.3.3 Code Signing
% 
% CertContext[0][2]: dwInfoStatus=10c dwErrorStatus=0
%   Issuer: CN=Certum Trusted Network CA 2, OU=Certum Certification Authority, O=Unizeto Technologies S.A., C=PL
%   NotBefore: 10/6/2011 4:39 AM
%   NotAfter: 10/6/2046 4:39 AM
%   Subject: CN=Certum Trusted Network CA 2, OU=Certum Certification Authority, O=Unizeto Technologies S.A., C=PL
%   Serial: 21d6d04a4f250fc93237fcaa5e128de9
%   Cert: d3dd483e2bbf4c05e8af10f5fa7626cfd3dc3092
%   Element.dwInfoStatus = CERT_TRUST_HAS_NAME_MATCH_ISSUER (0x4)
%   Element.dwInfoStatus = CERT_TRUST_IS_SELF_SIGNED (0x8)
%   Element.dwInfoStatus = CERT_TRUST_HAS_PREFERRED_ISSUER (0x100)
%   Application[0] = 1.3.6.1.5.5.7.3.2 Client Authentication
%   Application[1] = 1.3.6.1.5.5.7.3.3 Code Signing
%   Application[2] = 1.3.6.1.5.5.7.3.4 Secure Email
%   Application[3] = 1.3.6.1.5.5.7.3.1 Server Authentication
%   EV[0] = 1.2.616.1.113527.2.5.1.1
%   EV[1] = 1.2.616.1.113527.2.5.1.7
%   EV[2] = 2.23.140.1.3
% 
% Exclude leaf cert:
%   Chain: aed7917909ae63983d4878bef16ee07368b32bc0
% Full chain:
%   Chain: f175a0509a47c4d296f311acb97789b08ef23f1b
% ------------------------------------
% Verified Issuance Policies:
%     2.23.140.1.4.1
%     1.2.616.1.113527.2.5.1.4
% Verified Application Policies:
%     1.3.6.1.5.5.7.3.3 Code Signing
% Displayed AT_KEYEXCHANGE cert for reader: ACS ACR39U ICC Reader 0
% 
% --------------===========================--------------
% ================ Certificate 0 ================
% --- Reader: ACS ACR39U ICC Reader 0
% ---   Card:  cryptoCertum3.6
% Provider = Microsoft Smart Card Key Storage Provider
% Key Container = CFC2BAB12D160BF78F203DDC1E78D95A7E7D644
% 
% Cannot open the  key for reader: ACS ACR39U ICC Reader 0
% 
% --------------===========================--------------
% ================ Certificate 1 ================
% --- Reader: ACS ACR39U ICC Reader 0
% ---   Card:  cryptoCertum3.6
% Provider = Microsoft Smart Card Key Storage Provider
% Key Container = CFC2BAB12D160BF78F203DDC1E78D95A7E7D644
% 
% Cannot open the  key for reader: ACS ACR39U ICC Reader 0
% 
% --------------===========================--------------
% 
% Done.
% CertUtil: -SCInfo command completed successfully.
%
% Step #8
% -------
% Got information about the cryptographic card, decided to try the /kc option.
%
% C:\Users\dashl\Documents>"c:\Program Files (x86)\Windows Kits\10\bin\10.0.26100.0\x64\signtool.exe" sign /debug /kc CFC2BAB12D160BF78F203DDC1E78D95A7E7D644 /n "David Ashley" /t http://time.certum.pl/ /fd sha256 /v emts_ifsfscan.exe
% SignTool Error: The /k option requires the /csp option.
% 
% Step #9
% --------
% Got more information about the cryptographic card, decided to try the /csp option.
%
% C:\Users\dashl\Documents>
% C:\Users\dashl\Documents>"c:\Program Files (x86)\Windows Kits\10\bin\10.0.26100.0\x64\signtool.exe" sign /debug /kc CFC2BAB12D160BF78F203DDC1E78D95A7E7D644 /csp "Microsoft Base Smart Card Crypto Provider" /n "David Ashley" /t http://time.certum.pl/ /fd sha256 /v emts_ifsfscan.exe
% 
% The following certificates were considered:
%     Issued to: David Ashley
%     Issued by: Certum Code Signing 2021 CA
%     Expires:   Sat Aug 16 01:46:38 2025
%     SHA1 hash: D5F54EEBC165FE82202C2DB9B633D4885B12E5C5
% 
%     Issued to: c1e26399-5bee-45e3-9c33-e51655695ace
%     Issued by: c1e26399-5bee-45e3-9c33-e51655695ace
%     Expires:   Thu Mar 20 11:14:56 2025
%     SHA1 hash: 4DECD3C81B96AEB6C226C5126E4DE999506A953D
% 
%     Issued to: 1418c40a-aa3e-4259-a258-2d929d1b383b
%     Issued by: 1418c40a-aa3e-4259-a258-2d929d1b383b
%     Expires:   Thu Jan 16 10:55:18 2025
%     SHA1 hash: 3B3A4254A5CDAE9F4A975C272259064854624C9F
% 
%     Issued to: a3665860-c4e0-4b3e-adc5-ffe3bfd8721a
%     Issued by: MS-Organization-Access
%     Expires:   Mon Jan 07 18:55:40 2030
%     SHA1 hash: 17784374B18C0EB9EB0346442EC21B4984D6225A
% 
% After EKU filter, 3 certs were left.
% After expiry filter, 3 certs were left.
% After Subject Name filter, 1 certs were left.
% The following certificate was selected:
%     Issued to: David Ashley
%     Issued by: Certum Code Signing 2021 CA
%     Expires:   Sat Aug 16 01:46:38 2025
%     SHA1 hash: D5F54EEBC165FE82202C2DB9B633D4885B12E5C5
% 
% SignTool Error: An unexpected internal error has occurred.
% Error information: "Could not associate private key with certificate." (-2147024891/0x80070005)
% 
% Step #10
% --------
% Decided to try the -repairstore option.
%
% C:\Users\dashl\Documents>certutil -repairstore
% Expected at least 2 args, received 0
% CertUtil: Missing argument
% 
% Usage:
%   CertUtil [Options] -repairstore CertificateStoreName CertIdList [PropertyInfFile | SDDLSecurityDescriptor]
%   Repair key association or update certificate properties or key security descriptor
%     CertificateStoreName -- Certificate store name.  See -store.
%     CertIdList -- comma separated list of Certificate or CRL match tokens.
%             See -store's CertId description.
%     PropertyInfFile -- INF file containing external properties:
%             [Properties]
%             19 = Empty ; Add archived property, OR:
%             19 =       ; Remove archived property
% 
%             11 = "{text}Friendly Name" ; Add friendly name property
% 
%             127 = "{hex}" ; Add custom hexadecimal property
%               _continue_ = "00 01 02 03 04 05 06 07 08 09 0a 0b 0c 0d 0e 0f"
%               _continue_ = "10 11 12 13 14 15 16 17 18 19 1a 1b 1c 1d 1e 1f"
% 
%             2 = "{text}" ; Add Key Provider Information property
%               _continue_ = "Container=Container Name&"
%               _continue_ = "Provider=Microsoft Strong Cryptographic Provider&"
%               _continue_ = "ProviderType=1&"
%               _continue_ = "Flags=0&"
%               _continue_ = "KeySpec=2"
% 
%             9 = "{text}" ; Add Enhanced Key Usage property
%               _continue_ = "1.3.6.1.5.5.7.3.2,"
%               _continue_ = "1.3.6.1.5.5.7.3.1,"
% 
% Options:
%   -f                -- Force overwrite
%   -Enterprise       -- (-ent) Use local machine Enterprise registry certificate store
%   -user             -- Use HKEY_CURRENT_USER keys or certificate store
%   -GroupPolicy      -- (-gp) Use Group Policy certificate store
%   -Unicode          -- Write redirected output in Unicode
%   -gmt              -- Display times as GMT
%   -seconds          -- Display times with seconds and milliseconds
%   -Silent           -- (-q) Use silent flag to acquire crypt context
%   -split            -- Split embedded ASN.1 elements, and save to files
%   -v                -- Verbose operation
%   -privatekey       -- Display password and private key data
%   -pin PIN                  -- Smart Card PIN
%   -csp Provider             -- Provider
%         KSP -- "Microsoft Software Key Storage Provider"
%         TPM -- "Microsoft Platform Crypto Provider"
%         NGC -- "Microsoft Passport Key Storage Provider"
%         SC -- "Microsoft Smart Card Key Storage Provider"
%   -sid WELL_KNOWN_SID_TYPE  -- Numeric SID
%             22 -- Local System
%             23 -- Local Service
%             24 -- Network Service
% 
% CertUtil -?              -- Display a verb list (command list)
% CertUtil -repairstore -? -- Display help text for the "repairstore" verb
% CertUtil -v -?           -- Display all help text for all verbs
% 
%
% Step #11
% --------
% Installing the sub-certificates as trusted root certification authorities in the certificate store cured my problems.  I downloaded
% these certificates (3 of them) listed as sub-certificates with my certificate on the Certum website.  I used the second
% export form available, and these imported no problem.
%
% It ends up that the "Could not associate private key with certificate." message from signtool was quite misleading.
%
% Step #12
% --------
% For reasons I don't understand, the computer now claimed that 26100 was an imcompatible version.
%
% Used the previous version and the form of the command recommended in the Certum instructions, and it worked
% fine.
%
% C:\Users\dashl\Documents>"c:\Program Files (x86)\Windows Kits\10\bin\10.0.22621.0\x64\signtool.exe" sign /debug /n "David Ashley" /t http://time.certum.pl/ /fd sha256 /v emts_ifsfscan.exe
% 
% The following certificates were considered:
%     Issued to: David Ashley
%     Issued by: Certum Code Signing 2021 CA
%     Expires:   Sat Aug 16 01:46:38 2025
%     SHA1 hash: D5F54EEBC165FE82202C2DB9B633D4885B12E5C5
% 
%     Issued to: c1e26399-5bee-45e3-9c33-e51655695ace
%     Issued by: c1e26399-5bee-45e3-9c33-e51655695ace
%     Expires:   Thu Mar 20 11:14:56 2025
%     SHA1 hash: 4DECD3C81B96AEB6C226C5126E4DE999506A953D
% 
%     Issued to: 1418c40a-aa3e-4259-a258-2d929d1b383b
%     Issued by: 1418c40a-aa3e-4259-a258-2d929d1b383b
%     Expires:   Thu Jan 16 10:55:18 2025
%     SHA1 hash: 3B3A4254A5CDAE9F4A975C272259064854624C9F
% 
%     Issued to: a3665860-c4e0-4b3e-adc5-ffe3bfd8721a
%     Issued by: MS-Organization-Access
%     Expires:   Mon Jan 07 18:55:40 2030
%     SHA1 hash: 17784374B18C0EB9EB0346442EC21B4984D6225A
% 
% After EKU filter, 3 certs were left.
% After expiry filter, 3 certs were left.
% After Subject Name filter, 1 certs were left.
% After Private Key filter, 1 certs were left.
% The following certificate was selected:
%     Issued to: David Ashley
%     Issued by: Certum Code Signing 2021 CA
%     Expires:   Sat Aug 16 01:46:38 2025
%     SHA1 hash: D5F54EEBC165FE82202C2DB9B633D4885B12E5C5
% 
% Done Adding Additional Store
% Successfully signed: emts_ifsfscan.exe
% 
% Number of files successfully Signed: 1
% Number of warnings: 0
% Number of errors: 0
%
% Step #13
% --------
% Determined that my e-mail address was not in the "properties" of the signature in the .EXE, so have
% written Certum technical support on 8/16 to see if I need to have the certificate reissued, or how
% I would get my e-mail address in there.
% 
%End of file c_psc0.tex






## Licensing

_Emts_ is provided under _The Unlicense_ (full text below).  The license places
no restrictions (other than inabilty to litigate) on a user of the software.
The software may be used without restriction or obligation in embedded products.

*This is free and unencumbered software released into the public domain.
Anyone is free to copy, modify, publish, use, compile, sell, or
distribute this software, either in source code form or as a compiled
binary, for any purpose, commercial or non-commercial, and by any
means.*
    
*In jurisdictions that recognize copyright laws, the author or authors
of this software dedicate any and all copyright interest in the
software to the public domain. We make this dedication for the benefit
of the public at large and to the detriment of our heirs and
successors. We intend this dedication to be an overt act of
relinquishment in perpetuity of all present and future rights to this
software under copyright law.*

*THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
IN NO EVENT SHALL THE AUTHORS BE LIABLE FOR ANY CLAIM, DAMAGES OR
OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
OTHER DEALINGS IN THE SOFTWARE.*

*For more information, please refer to &lt;https://unlicense.org&gt;*

## Organization of an *Emts* Application

### Required Software and Libraries

In order to build a typical *Emts* application, four
components are required.

* *The application:* software source files (and other files)
  unique to the
  application.
  * Includes source files unique to the application,
    and project/build files.
  * Project/build files will point to files in
    *Emts*, *LibGen*, and/or *LibNum*.
* [*Emts*](https://github.com/dtashley/Emts): source files (and other files)
  in this repository, providing functionality to construct PC and server tools.
* [*LibGen*](https://github.com/dtashley/LibGen): source files (and other files)
  providing a general non-numeric library.
* [*LibNum*](https://github.com/dtashley/LibNum): source files (and other files)
  providing a numeric library.

### *Emts* Console-Mode and GUI Versions, *Windows* and _*nix* Compatibility

Applications developed for *Emts* can be built in 3 variants.

* *Windows* console-mode.
* _*nix_ console-mode.
* *Windows* GUI.

There is no option for building a _*nix_ GUI variant.

The console-mode variants can be used as part of either
a developer workflow or a server workflow.  The GUI variant
is intended to be used only interactively by a human.

A given *Emts* build will consist of the core (discussed below)
plus any number of modules (also discussed below).
The details of the GUI build haven't been decided yet, but
preliminarily:

* The GUI window will consist of an arbitrary number of tabs,
  each of which makes a different panel active.  Each panel
  would consume the entire GUI interface, except for the tab area,
  which selects between the panels.
* Each module (described below) has to correspond to an integral
  number of GUI panels, each selected by a tab.
  * If a given module
    is not present in the GUI build, its tabs and panels will not be
    visible or available.
  * The reason for the restriction that a module correspond to an integral
    number of panels (no panel sharing between modules) is that without
    this restriction, it is harder to handle the mechanics of the GUI
    interface and module exclusion or inclusion in a build.

### Future Scripting Language Development

It is anticipated that in the future, both the console-mode and GUI
variants will be augmented with a scripting language.  There are two
implications:

* Commands and subcommands must map to scripting language functions.
* Internally, something like the *Tcl* object must be used.  The tool must be built
  as if the commands were being called from a script interpreter.

### *Emts* Core

*Emts* contains a core (called the *core*
or the *Emts core*), that is not designed to be divided.
Any application built using *Emts* would contain the entire core, combined
with additional proprietary or custom content.

### *Emts* Modules, Tools, Commands

Outside of the core, the fundamental building block of *Emts*
is the *Emts module*, or *module*.  A module is the
smallest unit that can be included or not included in a build
of an *Emts* application.  A module is atomic and not designed to
divided.  A module generally contains closely related functionality;
cryptographic hashing functions, for example.

Modules are generally not visible to the user of an *Emts* application.

* Modules specify the minimum granularity with which functionality can be
  included or excluded from an *Emts* application.  *Module* is
  a configuration and build notion rather than an observable behavior
  notion.
* In console-mode builds, module boundaries are invisible.  (In other words,
  it would not be obvious to a user whether two tools are in the same
  module.)
* In GUI builds, it is required that a module use an integral number
  of GUI panels.  (There is no notion of modules sharing panels.)  

A module may contain one or more *tool*s.  A tool generally
corresponds to narrow functionality; the SHA256 hash, for example.

A tool may contain one or more *command*s.  A command
generally has very narrow scope to support a tool.  For example,
an SHA256 tool might contain two commands; one to calculate the
hash of a string, and another to calculate the hash of a file.

Modules are not generally visible to a user of an *Emts* application.  A module
is a build notion that specifies the minimum functionality that
can be included or omitted from the build of an *Emts* application.

The notions of module, tool, and command are subjective enough
that no guarantees can be made about how they might be
defined.  The only guarantee that can be made is that a
module corresponds to an integral number of panels
in the graphical tool.

The rules for identifying a command to run are:

* _module_ is not used in the naming.
* _tool_ and _command_ are concatenated together to form the
  full command name: for example, _sha256hash.hashfile_.
  * The exception is that if the _command_ name is globally
    unique, the _tool_ qualifier is optional.

### Verbosity Levels

TBD.

### Threading

TBD.

### Logging

TBD.

### Assertions

Assertions are implemented using the macro
```LBGN_ASSERT()```.  With assertions disabled, no code is generated; and with
assertions enabled, code to exit the program is generated.

## Design Rules for *Emts* Applications

### Recommended Directory Organization

The recommended directory organization is for the application
to be at the same directory level as *Emts*, *LibGen*, and
*LibNum*.

This is convenient because:
* *Emts*, *LibGen*, and *LibNum* can be shared between several applications
  without having multiple copies of each repository on disk.
* This organization keeps repositories separate, which is simpler than
  nesting them or using *Git* submodules.

This is a recommendation only.  *Emts* applications should build
and run correctly even if some other scheme is used.

### C Versus C++ File Naming Conventions

C files should have a _.c_ extension, and the associated header files 
should have a _.h_ extension.  C++ files should have a _.cpp_ extension, 
and the associated header files should have a _.hpp_ extension.  In all 
cases, a header file has the same base name as the associated C or C++ 
source file.  

### File Name Uniqueness

Within an *Emts* application:

* No two C or C++ source files within the application should have the same 
  base name.
* No C or C++ source file in the application should have the 
  same base name as any source file in *Emts*, *LibGen*, or *LibNum*.  
  
### File Name, Function, Class, and Constant Prefixes

The application must ensure uniqueness of free function names, global 
variable names, class names, and constants are unique within the 
application.  However, the application should also: 

* Avoid _Et_ and _Emts_ as prefixes, as these are used by *Emts*.
* Avoid _Lg_ or _Lbgn_ as prefixes, as these are used by *LibGen*.
* Avoid _Ln_ and _Lbnm_ as prefixes, as these are used by *LibNum*.

### Threading Rules

TBD.

### C, C++ Language Standards Supported

The compiler language version support assumed for C code is C99.

The compiler language version support assumed for C++ is C++17.

## Command Line Format

### General Format

The general format of a command line is:

```emts [tool.]command [options] [--] [filespecs]```

### Options

#### ```-vn``` (Verbosity)

Specifies the verbosity, 0-9.  The default level is 3.  The levels
are defined in the *LibGen* documentation.

The verbosity can be specified in two ways.

* ```-vn```, where *n* is an integer in the range 0-9.
  Example: ```-v6```.  The levels specified correspond
  to the *LibGen* documentation.
* ```-v```, ```-vv```, ```-vvv```, etc.  This can only
  increase the default verbosity (3), but not decrease it.
  ```-v``` would correspond to a verbosity of 4, ```-vv``` to
  a verbosity of 5, etc.

#### ```-pr```, ```-cr```, ```-ar```

Parsing range, context range, and action range.

| Level | Brief Description | *stdout* | *stderr* | Long Description           |
| :---  |     :---          | :---     |  :---    | :---                  |
| `0`  | Silent             | No output. | No output. | No *stdout* or *stderr* output.  All results through process exit code and generated files. |
| `1`  | Terse error descriptions only, announced on *stderr* only. | No output. | Terse errors only. | No output to *stdout*.  Errors, if any, are described in a terse form on *stderr*. |
| `2`  | Detailed error descriptions, announced on *stderr* only. | No output. | Detailed errors only. | No output to *stdout*.  Errors, if any, are described in a detailed form on *stderr*. |


### Doxygen is Used for Documentation
_Doxygen_ is used as the documentation tool for this library, and comments
in the source code are formatted accordingly.

## Miscellaneous Information

### Certum Card Instructions

Cut the card out of the holder.

Installed in the reader (took a little guessing to get it open).

Installed the SmartCard reader drivers from the ACS website.

Rebooted to be sure.

Installed the ProCertum CardManager, 64-bit MSI.

Rebooted per instructions.

Read card, Initialized, then set my standard 6-digit value for both PIN and PUK (they are set identically).

20240810:  Results from renewing code signing certificate.
Went through automatic verification process tonight.  It
involved a cellphone and taking a picture of my identity
document (passport), and some shots of my face.

Status of process unclear.  Believe I've done all I can
do.  Should know by Monday, which should be a work day
for Certum.

Process is unclear.  I believed I would use old
certificate to help authenticate the renewal, but from
the instructions it appears that I don't do this.

Could not find earlier notes anywhere, so it appears
I will have to re-document how to use the card,
or search more for my earlier notes.

## Glossary of Notation

### Bitfields and Portions of Integers

| Notation  | Description |
| ------------- | ------------- |
| $a_{b}$  | The $b$ th bit of the integer $a$.  Bits are numbered with the least significant bit 0, and consecutively through $n-1$, where $n$ is the total number of bits.<br><br>In general, if $p$ is an $n$-bit unsigned integer,<br><br>
$$
p = \sum_{i=0}^{n-1} 2^i p_i
$$.|
| $a_{c:b}$  | The integer consisting of the $b$ th through the $c$ th bits of the integer $a$.  Bits are numbered with the least significant bit 0, and consecutively through $n-1$, where $n$ is the total number of bits.<br><br>For example, if $p$ is a 24-bit unsigned integer, then $$p = 2^{16}p_{23:16} + 2^{8}p_{15:8} + p_{7:0}$$. |
| $a_{[b]}$ | The $b$ th word of the integer $a$. Words are numbered with the least significant word 0, and consecutively through $n-1$, where $n$ is the total number of words.<br><br>In general, if $p$ is an $n$-word unsigned integer and $z$ is the wordsize in bits, $$p = \sum_{i=0}^{n-1} 2^{iz} p_i$$. |
| $a_{[c:b]}$ | The integer consisting of the $b$ th through the $c$ th word of the integer $a$.  Words are numbered with the least significant word 0, and consecutively through $n-1$, where $n$ is the total number of words.<br><br>For example, if $p$ is a 24-word unsigned integer and $z$ is the wordsize in bits, then $$p = 2^{16z}p_{[23:16]} + 2^{8z}p_{[15:8]} + p_{[7:0]}$$. |

### Matrices And Vectors

| Notation  | Description |
| ------------- | ------------- |
| $\mathbf{0}$ (in bold face)  | A vector or matrix populated with all zeroes. Optionally, in cases where the context is not clear or where there is cause to highlight the dimension, $\mathbf{0}$ may be subscripted to indicate the dimension, i.e.
$$
\mathbf{0}_3 = \left[\begin{array}{c} 0 \\ 0 \\ 0 \end{array}\right]$$ $$\mathbf{0}_{3 \times 2} = \left[\begin{array}{cc} 0&0 \\ 0&0 \\ 0&0 \end{array}\right]$$. |
| $\mathbf{I}$  | The square identity matrix (the matrix with all elements 0 except elements on the diagonal which are 1). Optionally, in cases where the context is not clear or where there is cause to highlight the dimension, $I$ may be subscripted      to indicate the dimension, i.e. $$I = I_3 = I_{3 \times 3} = \left[\begin{array}{ccc} 1&0&0 \\ 0&1&0 \\ 0&0&1 \end{array}\right]
$$ |

### Sets And Set Notation

| Notation  | Description |
| ------------- | ------------- |
| $n(A)$  | The cardinality of a set $A$. (Cardinality is the number of elements in a set.)  For example,
$$
n(\{12, 29, 327\}) = 3
$$.|

## Glossary of Terms

TBD.

## References

TBD.

<!-- End of file README.md -->
