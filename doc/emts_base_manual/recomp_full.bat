rem ---------------------------------------------------------------------------
rem Run three times to be sure index entries are correct.
rem ---------------------------------------------------------------------------
latex emts_base_manual
makeindex emts_base_manual
latex emts_base_manual
makeindex emts_base_manual
latex emts_base_manual
makeindex emts_base_manual
rem ---------------------------------------------------------------------------
rem Create Postscript output.
rem ---------------------------------------------------------------------------
dvips -T 8.5in,11in emts_base_manual
rem ---------------------------------------------------------------------------
rem Creation of a .PDF will be done manually.
rem ---------------------------------------------------------------------------
