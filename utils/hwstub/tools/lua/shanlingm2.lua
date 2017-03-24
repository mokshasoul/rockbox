--
-- Shangling M2
--
M2 = {}

-- call with nil to get automatic name
function M2.dump_ipl(file)
    if file == nil then
        file = "shangling_m2_ipl.bin"
    end
    print("Dumping IPL to " .. file .." ...")
    JZ.nand.rom.init()
    JZ.nand.rom.read_flags()
    local ipl = JZ.nand.rom.read_bootloader()
    JZ.nand.rom.write_to_file(file, ipl)
end

-- call with nil to get automatic name
function M2.dump_spl(file)
    if file == nil then
        file = "shangling_m2_spl.bin"
    end
    print("Dumping SPL to " .. file .." ...")
    -- hardcoded parameters are specific to the Shangling M2
    local nand_params = {
        bus_width = 16,
        row_cycle = 3,
        col_cycle = 2,
        page_size = 2048,
        page_per_block = 64,
        oob_size = 128,
        badblock_pos = 0,
        badblock_page = 0,
        ecc_pos = 4,
        ecc_size = 13,
        ecc_level = 8,
        addr_setup_time = 4,
        addr_hold_time = 4,
        write_strobe_time = 4,
        read_strobe_time = 4,
        recovery_time = 13,
    }
    local spl = JZ.nand.rom.read_spl(nand_params, 0x400, 0x200)
    JZ.nand.rom.write_to_file(file, spl)
end

function M2.dump()
    M2.dump_ipl(nil)
    M2.dump_spl(nil)
end
