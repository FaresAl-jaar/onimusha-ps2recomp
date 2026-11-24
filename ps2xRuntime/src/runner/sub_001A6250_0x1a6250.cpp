#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A6250
// Address: 0x1a6250 - 0x1a709c
void sub_001A6250_0x1a6250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A6250_0x1a6250");
#endif

    switch (ctx->pc) {
        case 0x1a6280u: goto label_1a6280;
        case 0x1a62fcu: goto label_1a62fc;
        case 0x1a6610u: goto label_1a6610;
        case 0x1a66b4u: goto label_1a66b4;
        case 0x1a6738u: goto label_1a6738;
        case 0x1a68f8u: goto label_1a68f8;
        case 0x1a6908u: goto label_1a6908;
        case 0x1a69d4u: goto label_1a69d4;
        case 0x1a69e4u: goto label_1a69e4;
        case 0x1a6a20u: goto label_1a6a20;
        case 0x1a6a28u: goto label_1a6a28;
        case 0x1a6a58u: goto label_1a6a58;
        case 0x1a6af8u: goto label_1a6af8;
        case 0x1a6b00u: goto label_1a6b00;
        case 0x1a6b08u: goto label_1a6b08;
        case 0x1a6b18u: goto label_1a6b18;
        case 0x1a6b3cu: goto label_1a6b3c;
        case 0x1a6b58u: goto label_1a6b58;
        case 0x1a6b78u: goto label_1a6b78;
        case 0x1a6b84u: goto label_1a6b84;
        case 0x1a6b94u: goto label_1a6b94;
        case 0x1a6ba8u: goto label_1a6ba8;
        case 0x1a6bbcu: goto label_1a6bbc;
        case 0x1a6c7cu: goto label_1a6c7c;
        case 0x1a6d10u: goto label_1a6d10;
        case 0x1a6e54u: goto label_1a6e54;
        case 0x1a6ee4u: goto label_1a6ee4;
        case 0x1a6f2cu: goto label_1a6f2c;
        case 0x1a7080u: goto label_1a7080;
        default: break;
    }

    ctx->pc = 0x1a6250u;

    // 0x1a6250: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1a6250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1a6254: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1a6254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1a6258: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1a6258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1a625c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a625cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a6260: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a6260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a6264: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a6264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a6268: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1a6268u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a626c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a626cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6270: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x1a6270u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1a6274: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a6274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6278: 0xc049590  jal         func_125640
    ctx->pc = 0x1A6278u;
    SET_GPR_U32(ctx, 31, 0x1A6280u);
    ctx->pc = 0x1A627Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6278u;
    // 0x1a627c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x1A6278u, 0x1A6280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6280u;
label_1a6280:
    // 0x1a6280: 0xa2110000  sb          $s1, 0x0($s0)
    ctx->pc = 0x1a6280u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 17));
    // 0x1a6284: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x1a6284u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x1a6288: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x1a6288u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a628c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a628cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a6290: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1a6290u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1a6294: 0x2c610017  sltiu       $at, $v1, 0x17
    ctx->pc = 0x1a6294u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)23) ? 1 : 0);
    // 0x1a6298: 0xa2040003  sb          $a0, 0x3($s0)
    ctx->pc = 0x1a6298u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a629c: 0x10200378  beqz        $at, . + 4 + (0x378 << 2)
    ctx->pc = 0x1A629Cu;
    {
        const bool branch_taken_0x1a629c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A62A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A629Cu;
        // 0x1a62a0: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a629c) {
            ctx->pc = 0x1A7080u;
            goto label_1a7080;
        }
    }
    ctx->pc = 0x1A62A4u;
    // 0x1a62a4: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x1a62a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x1a62a8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a62a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a62ac: 0x24845980  addiu       $a0, $a0, 0x5980
    ctx->pc = 0x1a62acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22912));
    // 0x1a62b0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a62b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a62b4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1a62b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a62b8: 0x600008  jr          $v1
    ctx->pc = 0x1A62B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A62C0u: goto label_1a62c0;
            case 0x1A6338u: goto label_1a6338;
            case 0x1A6388u: goto label_1a6388;
            case 0x1A63E8u: goto label_1a63e8;
            case 0x1A6470u: goto label_1a6470;
            case 0x1A64F8u: goto label_1a64f8;
            case 0x1A6550u: goto label_1a6550;
            case 0x1A6618u: goto label_1a6618;
            case 0x1A66C0u: goto label_1a66c0;
            case 0x1A6740u: goto label_1a6740;
            case 0x1A67A0u: goto label_1a67a0;
            case 0x1A6828u: goto label_1a6828;
            case 0x1A6890u: goto label_1a6890;
            case 0x1A6978u: goto label_1a6978;
            case 0x1A6C08u: goto label_1a6c08;
            case 0x1A6C88u: goto label_1a6c88;
            case 0x1A6D18u: goto label_1a6d18;
            case 0x1A6DC0u: goto label_1a6dc0;
            case 0x1A6E60u: goto label_1a6e60;
            case 0x1A6F50u: goto label_1a6f50;
            case 0x1A6FB0u: goto label_1a6fb0;
            case 0x1A7008u: goto label_1a7008;
            case 0x1A7080u: goto label_1a7080;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A62B8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1A62C0u;
label_1a62c0:
    // 0x1a62c0: 0x2603005c  addiu       $v1, $s0, 0x5C
    ctx->pc = 0x1a62c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 92));
    // 0x1a62c4: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x1a62c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1a62c8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1a62c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a62cc: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A62CCu;
    {
        const bool branch_taken_0x1a62cc = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x1A62D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A62CCu;
        // 0x1a62d0: 0x31083  sra         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a62cc) {
            ctx->pc = 0x1A62DCu;
            goto label_1a62dc;
        }
    }
    ctx->pc = 0x1A62D4u;
    // 0x1a62d4: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x1a62d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x1a62d8: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1a62d8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_1a62dc:
    // 0x1a62dc: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x1a62dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a62e0: 0x3c040085  lui         $a0, 0x85
    ctx->pc = 0x1a62e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)133 << 16));
    // 0x1a62e4: 0x240206c0  addiu       $v0, $zero, 0x6C0
    ctx->pc = 0x1a62e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1728));
    // 0x1a62e8: 0x2484f280  addiu       $a0, $a0, -0xD80
    ctx->pc = 0x1a62e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963840));
    // 0x1a62ec: 0xa6020004  sh          $v0, 0x4($s0)
    ctx->pc = 0x1a62ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a62f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a62f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a62f4: 0xc070608  jal         func_1C1820
    ctx->pc = 0x1A62F4u;
    SET_GPR_U32(ctx, 31, 0x1A62FCu);
    ctx->pc = 0x1A62F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A62F4u;
    // 0x1a62f8: 0xa2020001  sb          $v0, 0x1($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1820u, 0x1A62F4u, 0x1A62FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A62FCu;
label_1a62fc:
    // 0x1a62fc: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x1a62fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x1a6300: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1a6300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1a6304: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x1a6304u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x1a6308: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1a6308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a630c: 0x3c038080  lui         $v1, 0x8080
    ctx->pc = 0x1a630cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32896 << 16));
    // 0x1a6310: 0x34658080  ori         $a1, $v1, 0x8080
    ctx->pc = 0x1a6310u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
    // 0x1a6314: 0xae050020  sw          $a1, 0x20($s0)
    ctx->pc = 0x1a6314u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 5));
    // 0x1a6318: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x1a6318u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x1a631c: 0xae040024  sw          $a0, 0x24($s0)
    ctx->pc = 0x1a631cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 4));
    // 0x1a6320: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x1a6320u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    // 0x1a6324: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x1a6324u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x1a6328: 0xae05002c  sw          $a1, 0x2C($s0)
    ctx->pc = 0x1a6328u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 5));
    // 0x1a632c: 0xae050030  sw          $a1, 0x30($s0)
    ctx->pc = 0x1a632cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 5));
    // 0x1a6330: 0x10000353  b           . + 4 + (0x353 << 2)
    ctx->pc = 0x1A6330u;
    {
        const bool branch_taken_0x1a6330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6330u;
        // 0x1a6334: 0xae050034  sw          $a1, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6330) {
            ctx->pc = 0x1A7080u;
            goto label_1a7080;
        }
    }
    ctx->pc = 0x1A6338u;
label_1a6338:
    // 0x1a6338: 0x2604002c  addiu       $a0, $s0, 0x2C
    ctx->pc = 0x1a6338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x1a633c: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x1a633cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1a6340: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x1a6340u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a6344: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A6344u;
    {
        const bool branch_taken_0x1a6344 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x1A6348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6344u;
        // 0x1a6348: 0x41883  sra         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6344) {
            ctx->pc = 0x1A6354u;
            goto label_1a6354;
        }
    }
    ctx->pc = 0x1A634Cu;
    // 0x1a634c: 0x24830003  addiu       $v1, $a0, 0x3
    ctx->pc = 0x1a634cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x1a6350: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x1a6350u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_1a6354:
    // 0x1a6354: 0xa6030006  sh          $v1, 0x6($s0)
    ctx->pc = 0x1a6354u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a6358: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a6358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a635c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1a635cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1a6360: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x1a6360u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a6364: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x1a6364u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x1a6368: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x1a6368u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x1a636c: 0xae040010  sw          $a0, 0x10($s0)
    ctx->pc = 0x1a636cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
    // 0x1a6370: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1a6370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1a6374: 0xae040014  sw          $a0, 0x14($s0)
    ctx->pc = 0x1a6374u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 4));
    // 0x1a6378: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1a6378u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1a637c: 0x10000340  b           . + 4 + (0x340 << 2)
    ctx->pc = 0x1A637Cu;
    {
        const bool branch_taken_0x1a637c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A637Cu;
        // 0x1a6380: 0xa2030028  sb          $v1, 0x28($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 40), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a637c) {
            ctx->pc = 0x1A7080u;
            goto label_1a7080;
        }
    }
    ctx->pc = 0x1A6384u;
    // 0x1a6384: 0x0  nop
    ctx->pc = 0x1a6384u;
    // NOP
label_1a6388:
    // 0x1a6388: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x1a6388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1a638c: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x1a638cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1a6390: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x1a6390u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a6394: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A6394u;
    {
        const bool branch_taken_0x1a6394 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x1A6398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6394u;
        // 0x1a6398: 0x41883  sra         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6394) {
            ctx->pc = 0x1A63A4u;
            goto label_1a63a4;
        }
    }
    ctx->pc = 0x1A639Cu;
    // 0x1a639c: 0x24830003  addiu       $v1, $a0, 0x3
    ctx->pc = 0x1a639cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x1a63a0: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x1a63a0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_1a63a4:
    // 0x1a63a4: 0xa6030006  sh          $v1, 0x6($s0)
    ctx->pc = 0x1a63a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a63a8: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x1a63a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1a63ac: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x1a63acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a63b0: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x1a63b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1a63b4: 0xa2030002  sb          $v1, 0x2($s0)
    ctx->pc = 0x1a63b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a63b8: 0x3c038080  lui         $v1, 0x8080
    ctx->pc = 0x1a63b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32896 << 16));
    // 0x1a63bc: 0x34648080  ori         $a0, $v1, 0x8080
    ctx->pc = 0x1a63bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
    // 0x1a63c0: 0x3c03453b  lui         $v1, 0x453B
    ctx->pc = 0x1a63c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17723 << 16));
    // 0x1a63c4: 0xae04001c  sw          $a0, 0x1C($s0)
    ctx->pc = 0x1a63c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 4));
    // 0x1a63c8: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x1a63c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x1a63cc: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x1a63ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x1a63d0: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x1a63d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x1a63d4: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x1a63d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x1a63d8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a63d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a63dc: 0x10000328  b           . + 4 + (0x328 << 2)
    ctx->pc = 0x1A63DCu;
    {
        const bool branch_taken_0x1a63dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A63E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A63DCu;
        // 0x1a63e0: 0xae030018  sw          $v1, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a63dc) {
            ctx->pc = 0x1A7080u;
            goto label_1a7080;
        }
    }
    ctx->pc = 0x1A63E4u;
    // 0x1a63e4: 0x0  nop
    ctx->pc = 0x1a63e4u;
    // NOP
label_1a63e8:
    // 0x1a63e8: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x1a63e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x1a63ec: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x1a63ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1a63f0: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x1a63f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a63f4: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A63F4u;
    {
        const bool branch_taken_0x1a63f4 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x1A63F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A63F4u;
        // 0x1a63f8: 0x41883  sra         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a63f4) {
            ctx->pc = 0x1A6404u;
            goto label_1a6404;
        }
    }
    ctx->pc = 0x1A63FCu;
    // 0x1a63fc: 0x24830003  addiu       $v1, $a0, 0x3
    ctx->pc = 0x1a63fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x1a6400: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x1a6400u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_1a6404:
    // 0x1a6404: 0xa6030006  sh          $v1, 0x6($s0)
    ctx->pc = 0x1a6404u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a6408: 0x3c06447a  lui         $a2, 0x447A
    ctx->pc = 0x1a6408u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17530 << 16));
    // 0x1a640c: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x1a640cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1a6410: 0x3c053f00  lui         $a1, 0x3F00
    ctx->pc = 0x1a6410u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16128 << 16));
    // 0x1a6414: 0xa6030004  sh          $v1, 0x4($s0)
    ctx->pc = 0x1a6414u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a6418: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x1a6418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1a641c: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x1a641cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a6420: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x1a6420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x1a6424: 0xa2030002  sb          $v1, 0x2($s0)
    ctx->pc = 0x1a6424u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a6428: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a6428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a642c: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x1a642cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x1a6430: 0x3c038080  lui         $v1, 0x8080
    ctx->pc = 0x1a6430u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32896 << 16));
    // 0x1a6434: 0x34648080  ori         $a0, $v1, 0x8080
    ctx->pc = 0x1a6434u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
    // 0x1a6438: 0xae040028  sw          $a0, 0x28($s0)
    ctx->pc = 0x1a6438u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 4));
    // 0x1a643c: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x1a643cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x1a6440: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x1a6440u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x1a6444: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1a6444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1a6448: 0xae060018  sw          $a2, 0x18($s0)
    ctx->pc = 0x1a6448u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 6));
    // 0x1a644c: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x1a644cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x1a6450: 0xae060030  sw          $a2, 0x30($s0)
    ctx->pc = 0x1a6450u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 6));
    // 0x1a6454: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x1a6454u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x1a6458: 0xae05001c  sw          $a1, 0x1C($s0)
    ctx->pc = 0x1a6458u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 5));
    // 0x1a645c: 0xae040020  sw          $a0, 0x20($s0)
    ctx->pc = 0x1a645cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
    // 0x1a6460: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x1a6460u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
    // 0x1a6464: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x1a6464u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x1a6468: 0x10000305  b           . + 4 + (0x305 << 2)
    ctx->pc = 0x1A6468u;
    {
        const bool branch_taken_0x1a6468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A646Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6468u;
        // 0x1a646c: 0xae00003c  sw          $zero, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6468) {
            ctx->pc = 0x1A7080u;
            goto label_1a7080;
        }
    }
    ctx->pc = 0x1A6470u;
label_1a6470:
    // 0x1a6470: 0x26040094  addiu       $a0, $s0, 0x94
    ctx->pc = 0x1a6470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 148));
    // 0x1a6474: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x1a6474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1a6478: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x1a6478u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a647c: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A647Cu;
    {
        const bool branch_taken_0x1a647c = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x1A6480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A647Cu;
        // 0x1a6480: 0x41883  sra         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a647c) {
            ctx->pc = 0x1A648Cu;
            goto label_1a648c;
        }
    }
    ctx->pc = 0x1A6484u;
    // 0x1a6484: 0x24830003  addiu       $v1, $a0, 0x3
    ctx->pc = 0x1a6484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x1a6488: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x1a6488u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_1a648c:
    // 0x1a648c: 0xa6030006  sh          $v1, 0x6($s0)
    ctx->pc = 0x1a648cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a6490: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1a6490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1a6494: 0xa6050004  sh          $a1, 0x4($s0)
    ctx->pc = 0x1a6494u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 5));
    // 0x1a6498: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x1a6498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1a649c: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x1a649cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a64a0: 0x3c0443fa  lui         $a0, 0x43FA
    ctx->pc = 0x1a64a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17402 << 16));
    // 0x1a64a4: 0xa2050002  sb          $a1, 0x2($s0)
    ctx->pc = 0x1a64a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 5));
    // 0x1a64a8: 0x3c03457a  lui         $v1, 0x457A
    ctx->pc = 0x1a64a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17786 << 16));
    // 0x1a64ac: 0xae040010  sw          $a0, 0x10($s0)
    ctx->pc = 0x1a64acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
    // 0x1a64b0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1a64b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a64b4: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x1a64b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x1a64b8: 0x3c0380ff  lui         $v1, 0x80FF
    ctx->pc = 0x1a64b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33023 << 16));
    // 0x1a64bc: 0xae050068  sw          $a1, 0x68($s0)
    ctx->pc = 0x1a64bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 5));
    // 0x1a64c0: 0x34644040  ori         $a0, $v1, 0x4040
    ctx->pc = 0x1a64c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16448);
    // 0x1a64c4: 0xae040018  sw          $a0, 0x18($s0)
    ctx->pc = 0x1a64c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 4));
    // 0x1a64c8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a64c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a64cc: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x1a64ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x1a64d0: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x1a64d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1a64d4: 0xa2000058  sb          $zero, 0x58($s0)
    ctx->pc = 0x1a64d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 88), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a64d8: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x1a64d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1a64dc: 0xa2040059  sb          $a0, 0x59($s0)
    ctx->pc = 0x1a64dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 89), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a64e0: 0xae05008c  sw          $a1, 0x8C($s0)
    ctx->pc = 0x1a64e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 5));
    // 0x1a64e4: 0xa200006c  sb          $zero, 0x6C($s0)
    ctx->pc = 0x1a64e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 108), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a64e8: 0xa203006d  sb          $v1, 0x6D($s0)
    ctx->pc = 0x1a64e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 109), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a64ec: 0xa200007c  sb          $zero, 0x7C($s0)
    ctx->pc = 0x1a64ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 124), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a64f0: 0x100002e3  b           . + 4 + (0x2E3 << 2)
    ctx->pc = 0x1A64F0u;
    {
        const bool branch_taken_0x1a64f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A64F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A64F0u;
        // 0x1a64f4: 0xa204007d  sb          $a0, 0x7D($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 125), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a64f0) {
            ctx->pc = 0x1A7080u;
            goto label_1a7080;
        }
    }
    ctx->pc = 0x1A64F8u;
label_1a64f8:
    // 0x1a64f8: 0x26040024  addiu       $a0, $s0, 0x24
    ctx->pc = 0x1a64f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x1a64fc: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x1a64fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1a6500: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x1a6500u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a6504: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A6504u;
    {
        const bool branch_taken_0x1a6504 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x1A6508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6504u;
        // 0x1a6508: 0x41883  sra         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6504) {
            ctx->pc = 0x1A6514u;
            goto label_1a6514;
        }
    }
    ctx->pc = 0x1A650Cu;
    // 0x1a650c: 0x24830003  addiu       $v1, $a0, 0x3
    ctx->pc = 0x1a650cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x1a6510: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x1a6510u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_1a6514:
    // 0x1a6514: 0xa6030006  sh          $v1, 0x6($s0)
    ctx->pc = 0x1a6514u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a6518: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x1a6518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1a651c: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x1a651cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1a6520: 0xa6000004  sh          $zero, 0x4($s0)
    ctx->pc = 0x1a6520u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a6524: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x1a6524u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a6528: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x1a6528u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x1a652c: 0xa2040002  sb          $a0, 0x2($s0)
    ctx->pc = 0x1a652cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a6530: 0x34638080  ori         $v1, $v1, 0x8080
    ctx->pc = 0x1a6530u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
    // 0x1a6534: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x1a6534u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x1a6538: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1a6538u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1a653c: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1a653cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1a6540: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1a6540u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1a6544: 0x100002ce  b           . + 4 + (0x2CE << 2)
    ctx->pc = 0x1A6544u;
    {
        const bool branch_taken_0x1a6544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6544u;
        // 0x1a6548: 0xae000020  sw          $zero, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6544) {
            ctx->pc = 0x1A7080u;
            goto label_1a7080;
        }
    }
    ctx->pc = 0x1A654Cu;
    // 0x1a654c: 0x0  nop
    ctx->pc = 0x1a654cu;
    // NOP
label_1a6550:
    // 0x1a6550: 0x26030080  addiu       $v1, $s0, 0x80
    ctx->pc = 0x1a6550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x1a6554: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x1a6554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1a6558: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1a6558u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a655c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A655Cu;
    {
        const bool branch_taken_0x1a655c = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x1A6560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A655Cu;
        // 0x1a6560: 0x31083  sra         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a655c) {
            ctx->pc = 0x1A656Cu;
            goto label_1a656c;
        }
    }
    ctx->pc = 0x1A6564u;
    // 0x1a6564: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x1a6564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x1a6568: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1a6568u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_1a656c:
    // 0x1a656c: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x1a656cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a6570: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1a6570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1a6574: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x1a6574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1a6578: 0xa6000004  sh          $zero, 0x4($s0)
    ctx->pc = 0x1a6578u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a657c: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x1a657cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a6580: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x1a6580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1a6584: 0x3c0200a0  lui         $v0, 0xA0
    ctx->pc = 0x1a6584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)160 << 16));
    // 0x1a6588: 0xa2030002  sb          $v1, 0x2($s0)
    ctx->pc = 0x1a6588u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a658c: 0x3442a0a0  ori         $v0, $v0, 0xA0A0
    ctx->pc = 0x1a658cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41120);
    // 0x1a6590: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1a6590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1a6594: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x1a6594u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x1a6598: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1a6598u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1a659c: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x1a659cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x1a65a0: 0x34438080  ori         $v1, $v0, 0x8080
    ctx->pc = 0x1a65a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x1a65a4: 0x3c026080  lui         $v0, 0x6080
    ctx->pc = 0x1a65a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24704 << 16));
    // 0x1a65a8: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x1a65a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x1a65ac: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x1a65acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x1a65b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a65b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a65b4: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1a65b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x1a65b8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1a65b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1a65bc: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x1a65bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x1a65c0: 0xa2040035  sb          $a0, 0x35($s0)
    ctx->pc = 0x1a65c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 53), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a65c4: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1a65c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1a65c8: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x1a65c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x1a65cc: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x1a65ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x1a65d0: 0xa2050034  sb          $a1, 0x34($s0)
    ctx->pc = 0x1a65d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 52), (uint8_t)GPR_U32(ctx, 5));
    // 0x1a65d4: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x1a65d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x1a65d8: 0xa2040035  sb          $a0, 0x35($s0)
    ctx->pc = 0x1a65d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 53), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a65dc: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x1a65dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    // 0x1a65e0: 0x2404002d  addiu       $a0, $zero, 0x2D
    ctx->pc = 0x1a65e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x1a65e4: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x1a65e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x1a65e8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a65e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a65ec: 0xae040014  sw          $a0, 0x14($s0)
    ctx->pc = 0x1a65ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 4));
    // 0x1a65f0: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1a65f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1a65f4: 0xae030058  sw          $v1, 0x58($s0)
    ctx->pc = 0x1a65f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 3));
    // 0x1a65f8: 0x2604005c  addiu       $a0, $s0, 0x5C
    ctx->pc = 0x1a65f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 92));
    // 0x1a65fc: 0xa2000038  sb          $zero, 0x38($s0)
    ctx->pc = 0x1a65fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 56), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a6600: 0xa2050039  sb          $a1, 0x39($s0)
    ctx->pc = 0x1a6600u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 57), (uint8_t)GPR_U32(ctx, 5));
    // 0x1a6604: 0xa2000048  sb          $zero, 0x48($s0)
    ctx->pc = 0x1a6604u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a6608: 0xc049590  jal         func_125640
    ctx->pc = 0x1A6608u;
    SET_GPR_U32(ctx, 31, 0x1A6610u);
    ctx->pc = 0x1A660Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6608u;
    // 0x1a660c: 0xa2020049  sb          $v0, 0x49($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 73), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x1A6608u, 0x1A6610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6610u;
label_1a6610:
    // 0x1a6610: 0x1000029b  b           . + 4 + (0x29B << 2)
    ctx->pc = 0x1A6610u;
    {
        const bool branch_taken_0x1a6610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6610) {
            ctx->pc = 0x1A7080u;
            goto label_1a7080;
        }
    }
    ctx->pc = 0x1A6618u;
label_1a6618:
    // 0x1a6618: 0x26030064  addiu       $v1, $s0, 0x64
    ctx->pc = 0x1a6618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x1a661c: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x1a661cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1a6620: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1a6620u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a6624: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A6624u;
    {
        const bool branch_taken_0x1a6624 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x1A6628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6624u;
        // 0x1a6628: 0x31083  sra         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6624) {
            ctx->pc = 0x1A6634u;
            goto label_1a6634;
        }
    }
    ctx->pc = 0x1A662Cu;
    // 0x1a662c: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x1a662cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x1a6630: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1a6630u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_1a6634:
    // 0x1a6634: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x1a6634u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a6638: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x1a6638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1a663c: 0xa6000004  sh          $zero, 0x4($s0)
    ctx->pc = 0x1a663cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a6640: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a6640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a6644: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x1a6644u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a6648: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x1a6648u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1a664c: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x1a664cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x1a6650: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x1a6650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1a6654: 0xa2000014  sb          $zero, 0x14($s0)
    ctx->pc = 0x1a6654u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 20), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a6658: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x1a6658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x1a665c: 0xa2030015  sb          $v1, 0x15($s0)
    ctx->pc = 0x1a665cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 21), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a6660: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x1a6660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x1a6664: 0xa2000024  sb          $zero, 0x24($s0)
    ctx->pc = 0x1a6664u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 36), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a6668: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1a6668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a666c: 0xa2070025  sb          $a3, 0x25($s0)
    ctx->pc = 0x1a666cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 37), (uint8_t)GPR_U32(ctx, 7));
    // 0x1a6670: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1a6670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1a6674: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x1a6674u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x1a6678: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1a6678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1a667c: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x1a667cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x1a6680: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1a6680u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1a6684: 0xae04003c  sw          $a0, 0x3C($s0)
    ctx->pc = 0x1a6684u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 4));
    // 0x1a6688: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x1a6688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x1a668c: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x1a668cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x1a6690: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x1a6690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x1a6694: 0xae050044  sw          $a1, 0x44($s0)
    ctx->pc = 0x1a6694u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 5));
    // 0x1a6698: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x1a6698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x1a669c: 0xae030048  sw          $v1, 0x48($s0)
    ctx->pc = 0x1a669cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
    // 0x1a66a0: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1a66a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1a66a4: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x1a66a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x1a66a8: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x1a66a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x1a66ac: 0xc049590  jal         func_125640
    ctx->pc = 0x1A66ACu;
    SET_GPR_U32(ctx, 31, 0x1A66B4u);
    ctx->pc = 0x1A66B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A66ACu;
    // 0x1a66b0: 0xa2070054  sb          $a3, 0x54($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 84), (uint8_t)GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x1A66ACu, 0x1A66B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A66B4u;
label_1a66b4:
    // 0x1a66b4: 0x10000272  b           . + 4 + (0x272 << 2)
    ctx->pc = 0x1A66B4u;
    {
        const bool branch_taken_0x1a66b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a66b4) {
            ctx->pc = 0x1A7080u;
            goto label_1a7080;
        }
    }
    ctx->pc = 0x1A66BCu;
    // 0x1a66bc: 0x0  nop
    ctx->pc = 0x1a66bcu;
    // NOP
label_1a66c0:
    // 0x1a66c0: 0x26030050  addiu       $v1, $s0, 0x50
    ctx->pc = 0x1a66c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x1a66c4: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x1a66c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1a66c8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1a66c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a66cc: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A66CCu;
    {
        const bool branch_taken_0x1a66cc = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x1A66D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A66CCu;
        // 0x1a66d0: 0x31083  sra         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a66cc) {
            ctx->pc = 0x1A66DCu;
            goto label_1a66dc;
        }
    }
    ctx->pc = 0x1A66D4u;
    // 0x1a66d4: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x1a66d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x1a66d8: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1a66d8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_1a66dc:
    // 0x1a66dc: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x1a66dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a66e0: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x1a66e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1a66e4: 0xa6000004  sh          $zero, 0x4($s0)
    ctx->pc = 0x1a66e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a66e8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a66e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a66ec: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x1a66ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a66f0: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x1a66f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1a66f4: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x1a66f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x1a66f8: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x1a66f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1a66fc: 0xa2000014  sb          $zero, 0x14($s0)
    ctx->pc = 0x1a66fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 20), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a6700: 0x3c028040  lui         $v0, 0x8040
    ctx->pc = 0x1a6700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32832 << 16));
    // 0x1a6704: 0xa2030015  sb          $v1, 0x15($s0)
    ctx->pc = 0x1a6704u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 21), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a6708: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1a6708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1a670c: 0xa2000024  sb          $zero, 0x24($s0)
    ctx->pc = 0x1a670cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 36), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a6710: 0x34434040  ori         $v1, $v0, 0x4040
    ctx->pc = 0x1a6710u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16448);
    // 0x1a6714: 0xa2040025  sb          $a0, 0x25($s0)
    ctx->pc = 0x1a6714u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 37), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a6718: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1a6718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a671c: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x1a671cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x1a6720: 0x26040044  addiu       $a0, $s0, 0x44
    ctx->pc = 0x1a6720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x1a6724: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x1a6724u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x1a6728: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1a6728u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1a672c: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x1a672cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x1a6730: 0xc049590  jal         func_125640
    ctx->pc = 0x1A6730u;
    SET_GPR_U32(ctx, 31, 0x1A6738u);
    ctx->pc = 0x1A6734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6730u;
    // 0x1a6734: 0xae000040  sw          $zero, 0x40($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x1A6730u, 0x1A6738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6738u;
label_1a6738:
    // 0x1a6738: 0x10000251  b           . + 4 + (0x251 << 2)
    ctx->pc = 0x1A6738u;
    {
        const bool branch_taken_0x1a6738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6738) {
            ctx->pc = 0x1A7080u;
            goto label_1a7080;
        }
    }
    ctx->pc = 0x1A6740u;
label_1a6740:
    // 0x1a6740: 0x26040048  addiu       $a0, $s0, 0x48
    ctx->pc = 0x1a6740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
    // 0x1a6744: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x1a6744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1a6748: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x1a6748u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a674c: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A674Cu;
    {
        const bool branch_taken_0x1a674c = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x1A6750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A674Cu;
        // 0x1a6750: 0x41883  sra         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a674c) {
            ctx->pc = 0x1A675Cu;
            goto label_1a675c;
        }
    }
    ctx->pc = 0x1A6754u;
    // 0x1a6754: 0x24830003  addiu       $v1, $a0, 0x3
    ctx->pc = 0x1a6754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x1a6758: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x1a6758u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_1a675c:
    // 0x1a675c: 0xa6030006  sh          $v1, 0x6($s0)
    ctx->pc = 0x1a675cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a6760: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1a6760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a6764: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x1a6764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1a6768: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x1a6768u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a676c: 0x3c03a000  lui         $v1, 0xA000
    ctx->pc = 0x1a676cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40960 << 16));
    // 0x1a6770: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x1a6770u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a6774: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x1a6774u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x1a6778: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1a6778u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1a677c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1a677cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1a6780: 0xae040040  sw          $a0, 0x40($s0)
    ctx->pc = 0x1a6780u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 4));
    // 0x1a6784: 0xa2000020  sb          $zero, 0x20($s0)
    ctx->pc = 0x1a6784u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a6788: 0xa2030021  sb          $v1, 0x21($s0)
    ctx->pc = 0x1a6788u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 33), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a678c: 0xa2000030  sb          $zero, 0x30($s0)
    ctx->pc = 0x1a678cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 48), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a6790: 0xa2030031  sb          $v1, 0x31($s0)
    ctx->pc = 0x1a6790u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 49), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a6794: 0x1000023a  b           . + 4 + (0x23A << 2)
    ctx->pc = 0x1A6794u;
    {
        const bool branch_taken_0x1a6794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6794u;
        // 0x1a6798: 0xae000044  sw          $zero, 0x44($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6794) {
            ctx->pc = 0x1A7080u;
            goto label_1a7080;
        }
    }
    ctx->pc = 0x1A679Cu;
    // 0x1a679c: 0x0  nop
    ctx->pc = 0x1a679cu;
    // NOP
label_1a67a0:
    // 0x1a67a0: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x1a67a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x1a67a4: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x1a67a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1a67a8: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x1a67a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a67ac: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A67ACu;
    {
        const bool branch_taken_0x1a67ac = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x1A67B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A67ACu;
        // 0x1a67b0: 0x41883  sra         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a67ac) {
            ctx->pc = 0x1A67BCu;
            goto label_1a67bc;
        }
    }
    ctx->pc = 0x1A67B4u;
    // 0x1a67b4: 0x24830003  addiu       $v1, $a0, 0x3
    ctx->pc = 0x1a67b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x1a67b8: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x1a67b8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_1a67bc:
    // 0x1a67bc: 0xa6030006  sh          $v1, 0x6($s0)
    ctx->pc = 0x1a67bcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a67c0: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x1a67c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1a67c4: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x1a67c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1a67c8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1a67c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a67cc: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x1a67ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a67d0: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1a67d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1a67d4: 0x3c031080  lui         $v1, 0x1080
    ctx->pc = 0x1a67d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4224 << 16));
    // 0x1a67d8: 0xa2070002  sb          $a3, 0x2($s0)
    ctx->pc = 0x1a67d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 7));
    // 0x1a67dc: 0x34648080  ori         $a0, $v1, 0x8080
    ctx->pc = 0x1a67dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
    // 0x1a67e0: 0xae040020  sw          $a0, 0x20($s0)
    ctx->pc = 0x1a67e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
    // 0x1a67e4: 0x240300c8  addiu       $v1, $zero, 0xC8
    ctx->pc = 0x1a67e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x1a67e8: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1a67e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1a67ec: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x1a67ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1a67f0: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1a67f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1a67f4: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x1a67f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x1a67f8: 0xae040028  sw          $a0, 0x28($s0)
    ctx->pc = 0x1a67f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 4));
    // 0x1a67fc: 0x3c0380ff  lui         $v1, 0x80FF
    ctx->pc = 0x1a67fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33023 << 16));
    // 0x1a6800: 0xae06007c  sw          $a2, 0x7C($s0)
    ctx->pc = 0x1a6800u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 6));
    // 0x1a6804: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x1a6804u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a6808: 0xae05002c  sw          $a1, 0x2C($s0)
    ctx->pc = 0x1a6808u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 5));
    // 0x1a680c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1a680cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a6810: 0xae040030  sw          $a0, 0x30($s0)
    ctx->pc = 0x1a6810u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 4));
    // 0x1a6814: 0xa200006c  sb          $zero, 0x6C($s0)
    ctx->pc = 0x1a6814u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 108), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a6818: 0xa207006d  sb          $a3, 0x6D($s0)
    ctx->pc = 0x1a6818u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 109), (uint8_t)GPR_U32(ctx, 7));
    // 0x1a681c: 0x10000218  b           . + 4 + (0x218 << 2)
    ctx->pc = 0x1A681Cu;
    {
        const bool branch_taken_0x1a681c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A681Cu;
        // 0x1a6820: 0xae030080  sw          $v1, 0x80($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a681c) {
            ctx->pc = 0x1A7080u;
            goto label_1a7080;
        }
    }
    ctx->pc = 0x1A6824u;
    // 0x1a6824: 0x0  nop
    ctx->pc = 0x1a6824u;
    // NOP
label_1a6828:
    // 0x1a6828: 0x2604002c  addiu       $a0, $s0, 0x2C
    ctx->pc = 0x1a6828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x1a682c: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x1a682cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1a6830: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x1a6830u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a6834: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A6834u;
    {
        const bool branch_taken_0x1a6834 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x1A6838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6834u;
        // 0x1a6838: 0x41883  sra         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6834) {
            ctx->pc = 0x1A6844u;
            goto label_1a6844;
        }
    }
    ctx->pc = 0x1A683Cu;
    // 0x1a683c: 0x24830003  addiu       $v1, $a0, 0x3
    ctx->pc = 0x1a683cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x1a6840: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x1a6840u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_1a6844:
    // 0x1a6844: 0xa6030006  sh          $v1, 0x6($s0)
    ctx->pc = 0x1a6844u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a6848: 0x240400b4  addiu       $a0, $zero, 0xB4
    ctx->pc = 0x1a6848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x1a684c: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x1a684cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1a6850: 0xa6030004  sh          $v1, 0x4($s0)
    ctx->pc = 0x1a6850u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a6854: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x1a6854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1a6858: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x1a6858u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a685c: 0x3c038080  lui         $v1, 0x8080
    ctx->pc = 0x1a685cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32896 << 16));
    // 0x1a6860: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x1a6860u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a6864: 0x34658080  ori         $a1, $v1, 0x8080
    ctx->pc = 0x1a6864u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
    // 0x1a6868: 0xae050018  sw          $a1, 0x18($s0)
    ctx->pc = 0x1a6868u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 5));
    // 0x1a686c: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1a686cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1a6870: 0xae05001c  sw          $a1, 0x1C($s0)
    ctx->pc = 0x1a6870u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 5));
    // 0x1a6874: 0xae050020  sw          $a1, 0x20($s0)
    ctx->pc = 0x1a6874u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 5));
    // 0x1a6878: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1a6878u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1a687c: 0xae040010  sw          $a0, 0x10($s0)
    ctx->pc = 0x1a687cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
    // 0x1a6880: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x1a6880u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x1a6884: 0x100001fe  b           . + 4 + (0x1FE << 2)
    ctx->pc = 0x1A6884u;
    {
        const bool branch_taken_0x1a6884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6884u;
        // 0x1a6888: 0xae000028  sw          $zero, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6884) {
            ctx->pc = 0x1A7080u;
            goto label_1a7080;
        }
    }
    ctx->pc = 0x1A688Cu;
    // 0x1a688c: 0x0  nop
    ctx->pc = 0x1a688cu;
    // NOP
label_1a6890:
    // 0x1a6890: 0x2603007c  addiu       $v1, $s0, 0x7C
    ctx->pc = 0x1a6890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
    // 0x1a6894: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x1a6894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1a6898: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1a6898u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a689c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A689Cu;
    {
        const bool branch_taken_0x1a689c = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x1A68A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A689Cu;
        // 0x1a68a0: 0x31083  sra         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a689c) {
            ctx->pc = 0x1A68ACu;
            goto label_1a68ac;
        }
    }
    ctx->pc = 0x1A68A4u;
    // 0x1a68a4: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x1a68a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x1a68a8: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1a68a8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_1a68ac:
    // 0x1a68ac: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x1a68acu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a68b0: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1a68b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x1a68b4: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x1a68b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1a68b8: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x1a68b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x1a68bc: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x1a68bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a68c0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1a68c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1a68c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a68c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a68c8: 0x24a56aa0  addiu       $a1, $a1, 0x6AA0
    ctx->pc = 0x1a68c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27296));
    // 0x1a68cc: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x1a68ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a68d0: 0x3c0280ff  lui         $v0, 0x80FF
    ctx->pc = 0x1a68d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33023 << 16));
    // 0x1a68d4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1a68d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1a68d8: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1a68d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x1a68dc: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1a68dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1a68e0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a68e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1a68e4: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1a68e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1a68e8: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1a68e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1a68ec: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x1a68ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x1a68f0: 0xc041494  jal         func_105250
    ctx->pc = 0x1A68F0u;
    SET_GPR_U32(ctx, 31, 0x1A68F8u);
    ctx->pc = 0x1A68F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A68F0u;
    // 0x1a68f4: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105250u, 0x1A68F0u, 0x1A68F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A68F8u;
label_1a68f8:
    // 0x1a68f8: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1a68f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1a68fc: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1a68fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1a6900: 0xc041442  jal         func_105108
    ctx->pc = 0x1A6900u;
    SET_GPR_U32(ctx, 31, 0x1A6908u);
    ctx->pc = 0x1A6904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6900u;
    // 0x1a6904: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1A6900u, 0x1A6908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6908u;
label_1a6908:
    // 0x1a6908: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x1a6908u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x1a690c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1a690cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a6910: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x1a6910u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    // 0x1a6914: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x1a6914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1a6918: 0xae040054  sw          $a0, 0x54($s0)
    ctx->pc = 0x1a6918u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 4));
    // 0x1a691c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1a691cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1a6920: 0xa2000034  sb          $zero, 0x34($s0)
    ctx->pc = 0x1a6920u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 52), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a6924: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1a6924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1a6928: 0xa2030035  sb          $v1, 0x35($s0)
    ctx->pc = 0x1a6928u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 53), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a692c: 0xa2000044  sb          $zero, 0x44($s0)
    ctx->pc = 0x1a692cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a6930: 0x3c033e99  lui         $v1, 0x3E99
    ctx->pc = 0x1a6930u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16025 << 16));
    // 0x1a6934: 0xa2050045  sb          $a1, 0x45($s0)
    ctx->pc = 0x1a6934u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 69), (uint8_t)GPR_U32(ctx, 5));
    // 0x1a6938: 0x3466999a  ori         $a2, $v1, 0x999A
    ctx->pc = 0x1a6938u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x1a693c: 0xae04005c  sw          $a0, 0x5C($s0)
    ctx->pc = 0x1a693cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 4));
    // 0x1a6940: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x1a6940u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x1a6944: 0xae040060  sw          $a0, 0x60($s0)
    ctx->pc = 0x1a6944u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 4));
    // 0x1a6948: 0x3465cccd  ori         $a1, $v1, 0xCCCD
    ctx->pc = 0x1a6948u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1a694c: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x1a694cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x1a6950: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x1a6950u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x1a6954: 0xae060068  sw          $a2, 0x68($s0)
    ctx->pc = 0x1a6954u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 6));
    // 0x1a6958: 0x3464cccd  ori         $a0, $v1, 0xCCCD
    ctx->pc = 0x1a6958u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1a695c: 0xae05006c  sw          $a1, 0x6C($s0)
    ctx->pc = 0x1a695cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 5));
    // 0x1a6960: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1a6960u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1a6964: 0xae040070  sw          $a0, 0x70($s0)
    ctx->pc = 0x1a6964u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 4));
    // 0x1a6968: 0xae030074  sw          $v1, 0x74($s0)
    ctx->pc = 0x1a6968u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 3));
    // 0x1a696c: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x1a696cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
    // 0x1a6970: 0x100001c3  b           . + 4 + (0x1C3 << 2)
    ctx->pc = 0x1A6970u;
    {
        const bool branch_taken_0x1a6970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6970u;
        // 0x1a6974: 0xae000078  sw          $zero, 0x78($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6970) {
            ctx->pc = 0x1A7080u;
            goto label_1a7080;
        }
    }
    ctx->pc = 0x1A6978u;
label_1a6978:
    // 0x1a6978: 0x260301ac  addiu       $v1, $s0, 0x1AC
    ctx->pc = 0x1a6978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 428));
    // 0x1a697c: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x1a697cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1a6980: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1a6980u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a6984: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A6984u;
    {
        const bool branch_taken_0x1a6984 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x1A6988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6984u;
        // 0x1a6988: 0x31083  sra         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6984) {
            ctx->pc = 0x1A6994u;
            goto label_1a6994;
        }
    }
    ctx->pc = 0x1A698Cu;
    // 0x1a698c: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x1a698cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x1a6990: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1a6990u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_1a6994:
    // 0x1a6994: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x1a6994u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a6998: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1a6998u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x1a699c: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x1a699cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1a69a0: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x1a69a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x1a69a4: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x1a69a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a69a8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1a69a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1a69ac: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1a69acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1a69b0: 0x24a56aa0  addiu       $a1, $a1, 0x6AA0
    ctx->pc = 0x1a69b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27296));
    // 0x1a69b4: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x1a69b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a69b8: 0xa6000004  sh          $zero, 0x4($s0)
    ctx->pc = 0x1a69b8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a69bc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a69bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1a69c0: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1a69c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1a69c4: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1a69c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1a69c8: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x1a69c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x1a69cc: 0xc041494  jal         func_105250
    ctx->pc = 0x1A69CCu;
    SET_GPR_U32(ctx, 31, 0x1A69D4u);
    ctx->pc = 0x1A69D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A69CCu;
    // 0x1a69d0: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105250u, 0x1A69CCu, 0x1A69D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A69D4u;
label_1a69d4:
    // 0x1a69d4: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1a69d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1a69d8: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1a69d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1a69dc: 0xc041442  jal         func_105108
    ctx->pc = 0x1A69DCu;
    SET_GPR_U32(ctx, 31, 0x1A69E4u);
    ctx->pc = 0x1A69E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A69DCu;
    // 0x1a69e0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1A69DCu, 0x1A69E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A69E4u;
label_1a69e4:
    // 0x1a69e4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a69e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a69e8: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1a69e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1a69ec: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x1a69ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x1a69f0: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1a69f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1a69f4: 0xa2000020  sb          $zero, 0x20($s0)
    ctx->pc = 0x1a69f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a69f8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1a69f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1a69fc: 0xa2040021  sb          $a0, 0x21($s0)
    ctx->pc = 0x1a69fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 33), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a6a00: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1a6a00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6a04: 0xa2000028  sb          $zero, 0x28($s0)
    ctx->pc = 0x1a6a04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a6a08: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1a6a08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6a0c: 0xa2030029  sb          $v1, 0x29($s0)
    ctx->pc = 0x1a6a0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 41), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a6a10: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1a6a10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6a14: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x1a6a14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x1a6a18: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x1a6a18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x1a6a1c: 0x0  nop
    ctx->pc = 0x1a6a1cu;
    // NOP
label_1a6a20:
    // 0x1a6a20: 0xc04d4a0  jal         func_135280
    ctx->pc = 0x1A6A20u;
    SET_GPR_U32(ctx, 31, 0x1A6A28u);
    ctx->pc = 0x135280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135280u, 0x1A6A20u, 0x1A6A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6A28u;
label_1a6a28:
    // 0x1a6a28: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1a6a28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a6a2c: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x1a6a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x1a6a30: 0xa242003c  sb          $v0, 0x3C($s2)
    ctx->pc = 0x1a6a30u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 60), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a6a34: 0x9242003c  lbu         $v0, 0x3C($s2)
    ctx->pc = 0x1a6a34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x1a6a38: 0x28410010  slti        $at, $v0, 0x10
    ctx->pc = 0x1a6a38u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1a6a3c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A6A3Cu;
    {
        const bool branch_taken_0x1a6a3c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6a3c) {
            ctx->pc = 0x1A6A50u;
            goto label_1a6a50;
        }
    }
    ctx->pc = 0x1A6A44u;
    // 0x1a6a44: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1a6a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1a6a48: 0xa242003c  sb          $v0, 0x3C($s2)
    ctx->pc = 0x1a6a48u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 60), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a6a4c: 0x0  nop
    ctx->pc = 0x1a6a4cu;
    // NOP
label_1a6a50:
    // 0x1a6a50: 0xc04d4a0  jal         func_135280
    ctx->pc = 0x1A6A50u;
    SET_GPR_U32(ctx, 31, 0x1A6A58u);
    ctx->pc = 0x1A6A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6A50u;
    // 0x1a6a54: 0xa251003d  sb          $s1, 0x3D($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 61), (uint8_t)GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135280u, 0x1A6A50u, 0x1A6A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6A58u;
label_1a6a58:
    // 0x1a6a58: 0xa242003f  sb          $v0, 0x3F($s2)
    ctx->pc = 0x1a6a58u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 63), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a6a5c: 0x9242003f  lbu         $v0, 0x3F($s2)
    ctx->pc = 0x1a6a5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 63)));
    // 0x1a6a60: 0x284100c0  slti        $at, $v0, 0xC0
    ctx->pc = 0x1a6a60u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)192) ? 1 : 0);
    // 0x1a6a64: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A6A64u;
    {
        const bool branch_taken_0x1a6a64 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6a64) {
            ctx->pc = 0x1A6A78u;
            goto label_1a6a78;
        }
    }
    ctx->pc = 0x1A6A6Cu;
    // 0x1a6a6c: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x1a6a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x1a6a70: 0xa242003f  sb          $v0, 0x3F($s2)
    ctx->pc = 0x1a6a70u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 63), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a6a74: 0x0  nop
    ctx->pc = 0x1a6a74u;
    // NOP
label_1a6a78:
    // 0x1a6a78: 0x9242003f  lbu         $v0, 0x3F($s2)
    ctx->pc = 0x1a6a78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 63)));
    // 0x1a6a7c: 0x2841000a  slti        $at, $v0, 0xA
    ctx->pc = 0x1a6a7cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1a6a80: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A6A80u;
    {
        const bool branch_taken_0x1a6a80 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6A80u;
        // 0x1a6a84: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6a80) {
            ctx->pc = 0x1A6A90u;
            goto label_1a6a90;
        }
    }
    ctx->pc = 0x1A6A88u;
    // 0x1a6a88: 0xa242003f  sb          $v0, 0x3F($s2)
    ctx->pc = 0x1a6a88u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 63), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a6a8c: 0x0  nop
    ctx->pc = 0x1a6a8cu;
    // NOP
label_1a6a90:
    // 0x1a6a90: 0x32620007  andi        $v0, $s3, 0x7
    ctx->pc = 0x1a6a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)7);
    // 0x1a6a94: 0xa242003e  sb          $v0, 0x3E($s2)
    ctx->pc = 0x1a6a94u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 62), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a6a98: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x1a6a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1a6a9c: 0x9243003c  lbu         $v1, 0x3C($s2)
    ctx->pc = 0x1a6a9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x1a6aa0: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x1a6aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1a6aa4: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1a6aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1a6aa8: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x1a6aa8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x1a6aac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a6aacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a6ab0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1a6ab0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1a6ab4: 0x2022821  addu        $a1, $s0, $v0
    ctx->pc = 0x1a6ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a6ab8: 0x2a620010  slti        $v0, $s3, 0x10
    ctx->pc = 0x1a6ab8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1a6abc: 0xa0a3003c  sb          $v1, 0x3C($a1)
    ctx->pc = 0x1a6abcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 60), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a6ac0: 0x9243003d  lbu         $v1, 0x3D($s2)
    ctx->pc = 0x1a6ac0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 61)));
    // 0x1a6ac4: 0xa0a3003d  sb          $v1, 0x3D($a1)
    ctx->pc = 0x1a6ac4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 61), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a6ac8: 0x9243003e  lbu         $v1, 0x3E($s2)
    ctx->pc = 0x1a6ac8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 62)));
    // 0x1a6acc: 0xa0a3003e  sb          $v1, 0x3E($a1)
    ctx->pc = 0x1a6accu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 62), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a6ad0: 0x9243003f  lbu         $v1, 0x3F($s2)
    ctx->pc = 0x1a6ad0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 63)));
    // 0x1a6ad4: 0xa0a3003f  sb          $v1, 0x3F($a1)
    ctx->pc = 0x1a6ad4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 63), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a6ad8: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x1a6ad8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x1a6adc: 0x90a3003d  lbu         $v1, 0x3D($a1)
    ctx->pc = 0x1a6adcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 61)));
    // 0x1a6ae0: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1a6ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a6ae4: 0x1440ffce  bnez        $v0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x1A6AE4u;
    {
        const bool branch_taken_0x1a6ae4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A6AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6AE4u;
        // 0x1a6ae8: 0xa0a3003d  sb          $v1, 0x3D($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 61), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6ae4) {
            ctx->pc = 0x1A6A20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a6a20;
        }
    }
    ctx->pc = 0x1A6AECu;
    // 0x1a6aec: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1a6aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1a6af0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1a6af0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6af4: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x1a6af4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
label_1a6af8:
    // 0x1a6af8: 0xc04d4a0  jal         func_135280
    ctx->pc = 0x1A6AF8u;
    SET_GPR_U32(ctx, 31, 0x1A6B00u);
    ctx->pc = 0x135280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135280u, 0x1A6AF8u, 0x1A6B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6B00u;
label_1a6b00:
    // 0x1a6b00: 0xc04d4a0  jal         func_135280
    ctx->pc = 0x1A6B00u;
    SET_GPR_U32(ctx, 31, 0x1A6B08u);
    ctx->pc = 0x1A6B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6B00u;
    // 0x1a6b04: 0x3051007f  andi        $s1, $v0, 0x7F (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    ctx->in_delay_slot = false;
    ctx->pc = 0x135280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135280u, 0x1A6B00u, 0x1A6B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6B08u;
label_1a6b08:
    // 0x1a6b08: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1a6b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a6b0c: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x1a6b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x1a6b10: 0xc04d4a0  jal         func_135280
    ctx->pc = 0x1A6B10u;
    SET_GPR_U32(ctx, 31, 0x1A6B18u);
    ctx->pc = 0x1A6B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6B10u;
    // 0x1a6b14: 0x222882d  daddu       $s1, $s1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135280u, 0x1A6B10u, 0x1A6B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6B18u;
label_1a6b18:
    // 0x1a6b18: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1a6b18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a6b1c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1a6b1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1a6b20: 0x51102d  daddu       $v0, $v0, $s1
    ctx->pc = 0x1a6b20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 17));
    // 0x1a6b24: 0x2903c  dsll32      $s2, $v0, 0
    ctx->pc = 0x1a6b24u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a6b28: 0x12903f  dsra32      $s2, $s2, 0
    ctx->pc = 0x1a6b28u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 0));
    // 0x1a6b2c: 0x12883c  dsll32      $s1, $s2, 0
    ctx->pc = 0x1a6b2cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 18) << (32 + 0));
    // 0x1a6b30: 0xae1200bc  sw          $s2, 0xBC($s0)
    ctx->pc = 0x1a6b30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 18));
    // 0x1a6b34: 0xc04d4a0  jal         func_135280
    ctx->pc = 0x1A6B34u;
    SET_GPR_U32(ctx, 31, 0x1A6B3Cu);
    ctx->pc = 0x1A6B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6B34u;
    // 0x1a6b38: 0x11883e  dsrl32      $s1, $s1, 0 (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135280u, 0x1A6B34u, 0x1A6B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6B3Cu;
label_1a6b3c:
    // 0x1a6b3c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1a6b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a6b40: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1a6b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x1a6b44: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x1a6b44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x1a6b48: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a6b48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a6b4c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1a6b4cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1a6b50: 0xc04d4a0  jal         func_135280
    ctx->pc = 0x1A6B50u;
    SET_GPR_U32(ctx, 31, 0x1A6B58u);
    ctx->pc = 0x1A6B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6B50u;
    // 0x1a6b54: 0xae0200c0  sw          $v0, 0xC0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135280u, 0x1A6B50u, 0x1A6B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6B58u;
label_1a6b58:
    // 0x1a6b58: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1a6b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a6b5c: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1a6b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x1a6b60: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x1a6b60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x1a6b64: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a6b64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a6b68: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1a6b68u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1a6b6c: 0xae0200c4  sw          $v0, 0xC4($s0)
    ctx->pc = 0x1a6b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 2));
    // 0x1a6b70: 0xc04d4a0  jal         func_135280
    ctx->pc = 0x1A6B70u;
    SET_GPR_U32(ctx, 31, 0x1A6B78u);
    ctx->pc = 0x1A6B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6B70u;
    // 0x1a6b74: 0xae1200c8  sw          $s2, 0xC8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135280u, 0x1A6B70u, 0x1A6B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6B78u;
label_1a6b78:
    // 0x1a6b78: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x1a6b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1a6b7c: 0xc04d4a0  jal         func_135280
    ctx->pc = 0x1A6B7Cu;
    SET_GPR_U32(ctx, 31, 0x1A6B84u);
    ctx->pc = 0x1A6B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6B7Cu;
    // 0x1a6b80: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135280u, 0x1A6B7Cu, 0x1A6B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6B84u;
label_1a6b84:
    // 0x1a6b84: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x1a6b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1a6b88: 0x64420080  daddiu      $v0, $v0, 0x80
    ctx->pc = 0x1a6b88u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)128);
    // 0x1a6b8c: 0xc04d4a0  jal         func_135280
    ctx->pc = 0x1A6B8Cu;
    SET_GPR_U32(ctx, 31, 0x1A6B94u);
    ctx->pc = 0x1A6B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6B8Cu;
    // 0x1a6b90: 0xa20200cd  sb          $v0, 0xCD($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 205), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135280u, 0x1A6B8Cu, 0x1A6B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6B94u;
label_1a6b94:
    // 0x1a6b94: 0x3043001f  andi        $v1, $v0, 0x1F
    ctx->pc = 0x1a6b94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1a6b98: 0x240200c0  addiu       $v0, $zero, 0xC0
    ctx->pc = 0x1a6b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x1a6b9c: 0x43102f  dsubu       $v0, $v0, $v1
    ctx->pc = 0x1a6b9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x1a6ba0: 0xc04d4a0  jal         func_135280
    ctx->pc = 0x1A6BA0u;
    SET_GPR_U32(ctx, 31, 0x1A6BA8u);
    ctx->pc = 0x1A6BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6BA0u;
    // 0x1a6ba4: 0xa20200ce  sb          $v0, 0xCE($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 206), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135280u, 0x1A6BA0u, 0x1A6BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6BA8u;
label_1a6ba8:
    // 0x1a6ba8: 0x3043001f  andi        $v1, $v0, 0x1F
    ctx->pc = 0x1a6ba8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1a6bac: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1a6bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1a6bb0: 0x43102f  dsubu       $v0, $v0, $v1
    ctx->pc = 0x1a6bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x1a6bb4: 0xc04d4a0  jal         func_135280
    ctx->pc = 0x1A6BB4u;
    SET_GPR_U32(ctx, 31, 0x1A6BBCu);
    ctx->pc = 0x1A6BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6BB4u;
    // 0x1a6bb8: 0xa20200cf  sb          $v0, 0xCF($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 207), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135280u, 0x1A6BB4u, 0x1A6BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6BBCu;
label_1a6bbc:
    // 0x1a6bbc: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x1a6bbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x1a6bc0: 0x64630006  daddiu      $v1, $v1, 0x6
    ctx->pc = 0x1a6bc0u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)6);
    // 0x1a6bc4: 0xa20300d0  sb          $v1, 0xD0($s0)
    ctx->pc = 0x1a6bc4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 208), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a6bc8: 0x920300d0  lbu         $v1, 0xD0($s0)
    ctx->pc = 0x1a6bc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x1a6bcc: 0x2861000b  slti        $at, $v1, 0xB
    ctx->pc = 0x1a6bccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x1a6bd0: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A6BD0u;
    {
        const bool branch_taken_0x1a6bd0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A6BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6BD0u;
        // 0x1a6bd4: 0x24030018  addiu       $v1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6bd0) {
            ctx->pc = 0x1A6BE0u;
            goto label_1a6be0;
        }
    }
    ctx->pc = 0x1A6BD8u;
    // 0x1a6bd8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A6BD8u;
    {
        const bool branch_taken_0x1a6bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6BD8u;
        // 0x1a6bdc: 0xa20300d0  sb          $v1, 0xD0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 208), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6bd8) {
            ctx->pc = 0x1A6BE8u;
            goto label_1a6be8;
        }
    }
    ctx->pc = 0x1A6BE0u;
label_1a6be0:
    // 0x1a6be0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1a6be0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1a6be4: 0xa20300d0  sb          $v1, 0xD0($s0)
    ctx->pc = 0x1a6be4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 208), (uint8_t)GPR_U32(ctx, 3));
label_1a6be8:
    // 0x1a6be8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1a6be8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1a6bec: 0xa20000d1  sb          $zero, 0xD1($s0)
    ctx->pc = 0x1a6becu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 209), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a6bf0: 0x2e63000a  sltiu       $v1, $s3, 0xA
    ctx->pc = 0x1a6bf0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1a6bf4: 0x1460ffc0  bnez        $v1, . + 4 + (-0x40 << 2)
    ctx->pc = 0x1A6BF4u;
    {
        const bool branch_taken_0x1a6bf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A6BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6BF4u;
        // 0x1a6bf8: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6bf4) {
            ctx->pc = 0x1A6AF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a6af8;
        }
    }
    ctx->pc = 0x1A6BFCu;
    // 0x1a6bfc: 0x10000120  b           . + 4 + (0x120 << 2)
    ctx->pc = 0x1A6BFCu;
    {
        const bool branch_taken_0x1a6bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6bfc) {
            ctx->pc = 0x1A7080u;
            goto label_1a7080;
        }
    }
    ctx->pc = 0x1A6C04u;
    // 0x1a6c04: 0x0  nop
    ctx->pc = 0x1a6c04u;
    // NOP
label_1a6c08:
    // 0x1a6c08: 0x26030050  addiu       $v1, $s0, 0x50
    ctx->pc = 0x1a6c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x1a6c0c: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x1a6c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1a6c10: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1a6c10u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a6c14: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A6C14u;
    {
        const bool branch_taken_0x1a6c14 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x1A6C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6C14u;
        // 0x1a6c18: 0x31083  sra         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6c14) {
            ctx->pc = 0x1A6C24u;
            goto label_1a6c24;
        }
    }
    ctx->pc = 0x1A6C1Cu;
    // 0x1a6c1c: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x1a6c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x1a6c20: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1a6c20u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_1a6c24:
    // 0x1a6c24: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x1a6c24u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a6c28: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x1a6c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1a6c2c: 0xa6000004  sh          $zero, 0x4($s0)
    ctx->pc = 0x1a6c2cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a6c30: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a6c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a6c34: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x1a6c34u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a6c38: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1a6c38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1a6c3c: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x1a6c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x1a6c40: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x1a6c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1a6c44: 0xa2000014  sb          $zero, 0x14($s0)
    ctx->pc = 0x1a6c44u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 20), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a6c48: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x1a6c48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x1a6c4c: 0xa2050015  sb          $a1, 0x15($s0)
    ctx->pc = 0x1a6c4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 21), (uint8_t)GPR_U32(ctx, 5));
    // 0x1a6c50: 0x34438080  ori         $v1, $v0, 0x8080
    ctx->pc = 0x1a6c50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x1a6c54: 0xa2000024  sb          $zero, 0x24($s0)
    ctx->pc = 0x1a6c54u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 36), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a6c58: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1a6c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1a6c5c: 0xa2040025  sb          $a0, 0x25($s0)
    ctx->pc = 0x1a6c5cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 37), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a6c60: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1a6c60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1a6c64: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x1a6c64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x1a6c68: 0x26040044  addiu       $a0, $s0, 0x44
    ctx->pc = 0x1a6c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x1a6c6c: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x1a6c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x1a6c70: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x1a6c70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x1a6c74: 0xc049590  jal         func_125640
    ctx->pc = 0x1A6C74u;
    SET_GPR_U32(ctx, 31, 0x1A6C7Cu);
    ctx->pc = 0x1A6C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6C74u;
    // 0x1a6c78: 0xae000040  sw          $zero, 0x40($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x1A6C74u, 0x1A6C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6C7Cu;
label_1a6c7c:
    // 0x1a6c7c: 0x10000100  b           . + 4 + (0x100 << 2)
    ctx->pc = 0x1A6C7Cu;
    {
        const bool branch_taken_0x1a6c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6c7c) {
            ctx->pc = 0x1A7080u;
            goto label_1a7080;
        }
    }
    ctx->pc = 0x1A6C84u;
    // 0x1a6c84: 0x0  nop
    ctx->pc = 0x1a6c84u;
    // NOP
label_1a6c88:
    // 0x1a6c88: 0x26030098  addiu       $v1, $s0, 0x98
    ctx->pc = 0x1a6c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 152));
    // 0x1a6c8c: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x1a6c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1a6c90: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1a6c90u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a6c94: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A6C94u;
    {
        const bool branch_taken_0x1a6c94 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x1A6C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6C94u;
        // 0x1a6c98: 0x31083  sra         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6c94) {
            ctx->pc = 0x1A6CA4u;
            goto label_1a6ca4;
        }
    }
    ctx->pc = 0x1A6C9Cu;
    // 0x1a6c9c: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x1a6c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x1a6ca0: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1a6ca0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_1a6ca4:
    // 0x1a6ca4: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x1a6ca4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a6ca8: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x1a6ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1a6cac: 0xa6000004  sh          $zero, 0x4($s0)
    ctx->pc = 0x1a6cacu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a6cb0: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x1a6cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1a6cb4: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x1a6cb4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a6cb8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1a6cb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a6cbc: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x1a6cbcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a6cc0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1a6cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1a6cc4: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1a6cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1a6cc8: 0x3c0280ff  lui         $v0, 0x80FF
    ctx->pc = 0x1a6cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33023 << 16));
    // 0x1a6ccc: 0xae060064  sw          $a2, 0x64($s0)
    ctx->pc = 0x1a6cccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 6));
    // 0x1a6cd0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1a6cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1a6cd4: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x1a6cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x1a6cd8: 0x2604008c  addiu       $a0, $s0, 0x8C
    ctx->pc = 0x1a6cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 140));
    // 0x1a6cdc: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x1a6cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x1a6ce0: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1a6ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1a6ce4: 0xa2000054  sb          $zero, 0x54($s0)
    ctx->pc = 0x1a6ce4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 84), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a6ce8: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x1a6ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1a6cec: 0xa2030055  sb          $v1, 0x55($s0)
    ctx->pc = 0x1a6cecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 85), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a6cf0: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1a6cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1a6cf4: 0xae060088  sw          $a2, 0x88($s0)
    ctx->pc = 0x1a6cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 6));
    // 0x1a6cf8: 0xa2020068  sb          $v0, 0x68($s0)
    ctx->pc = 0x1a6cf8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 104), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a6cfc: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1a6cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1a6d00: 0xa2020069  sb          $v0, 0x69($s0)
    ctx->pc = 0x1a6d00u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 105), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a6d04: 0xa2000078  sb          $zero, 0x78($s0)
    ctx->pc = 0x1a6d04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 120), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a6d08: 0xc049590  jal         func_125640
    ctx->pc = 0x1A6D08u;
    SET_GPR_U32(ctx, 31, 0x1A6D10u);
    ctx->pc = 0x1A6D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6D08u;
    // 0x1a6d0c: 0xa2030079  sb          $v1, 0x79($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 121), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x1A6D08u, 0x1A6D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6D10u;
label_1a6d10:
    // 0x1a6d10: 0x100000db  b           . + 4 + (0xDB << 2)
    ctx->pc = 0x1A6D10u;
    {
        const bool branch_taken_0x1a6d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6d10) {
            ctx->pc = 0x1A7080u;
            goto label_1a7080;
        }
    }
    ctx->pc = 0x1A6D18u;
label_1a6d18:
    // 0x1a6d18: 0x2604005c  addiu       $a0, $s0, 0x5C
    ctx->pc = 0x1a6d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 92));
    // 0x1a6d1c: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x1a6d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1a6d20: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x1a6d20u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a6d24: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A6D24u;
    {
        const bool branch_taken_0x1a6d24 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x1A6D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6D24u;
        // 0x1a6d28: 0x41883  sra         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6d24) {
            ctx->pc = 0x1A6D34u;
            goto label_1a6d34;
        }
    }
    ctx->pc = 0x1A6D2Cu;
    // 0x1a6d2c: 0x24830003  addiu       $v1, $a0, 0x3
    ctx->pc = 0x1a6d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x1a6d30: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x1a6d30u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_1a6d34:
    // 0x1a6d34: 0xa6030006  sh          $v1, 0x6($s0)
    ctx->pc = 0x1a6d34u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a6d38: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1a6d38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1a6d3c: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x1a6d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1a6d40: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x1a6d40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1a6d44: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x1a6d44u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a6d48: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x1a6d48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1a6d4c: 0xa2030002  sb          $v1, 0x2($s0)
    ctx->pc = 0x1a6d4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a6d50: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x1a6d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1a6d54: 0xa6030004  sh          $v1, 0x4($s0)
    ctx->pc = 0x1a6d54u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a6d58: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x1a6d58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x1a6d5c: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x1a6d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x1a6d60: 0x3c03453b  lui         $v1, 0x453B
    ctx->pc = 0x1a6d60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17723 << 16));
    // 0x1a6d64: 0x34648000  ori         $a0, $v1, 0x8000
    ctx->pc = 0x1a6d64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x1a6d68: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x1a6d68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x1a6d6c: 0xae040028  sw          $a0, 0x28($s0)
    ctx->pc = 0x1a6d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 4));
    // 0x1a6d70: 0x34638080  ori         $v1, $v1, 0x8080
    ctx->pc = 0x1a6d70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
    // 0x1a6d74: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1a6d74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1a6d78: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x1a6d78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x1a6d7c: 0xae040010  sw          $a0, 0x10($s0)
    ctx->pc = 0x1a6d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
    // 0x1a6d80: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a6d80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a6d84: 0xae040014  sw          $a0, 0x14($s0)
    ctx->pc = 0x1a6d84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 4));
    // 0x1a6d88: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1a6d88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1a6d8c: 0xae04001c  sw          $a0, 0x1C($s0)
    ctx->pc = 0x1a6d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 4));
    // 0x1a6d90: 0xae03004c  sw          $v1, 0x4C($s0)
    ctx->pc = 0x1a6d90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 3));
    // 0x1a6d94: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1a6d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a6d98: 0xa200002c  sb          $zero, 0x2C($s0)
    ctx->pc = 0x1a6d98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a6d9c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1a6d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a6da0: 0xa206002d  sb          $a2, 0x2D($s0)
    ctx->pc = 0x1a6da0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 45), (uint8_t)GPR_U32(ctx, 6));
    // 0x1a6da4: 0xa200003c  sb          $zero, 0x3C($s0)
    ctx->pc = 0x1a6da4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 60), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a6da8: 0xa205003d  sb          $a1, 0x3D($s0)
    ctx->pc = 0x1a6da8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 61), (uint8_t)GPR_U32(ctx, 5));
    // 0x1a6dac: 0xae040050  sw          $a0, 0x50($s0)
    ctx->pc = 0x1a6dacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 4));
    // 0x1a6db0: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x1a6db0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x1a6db4: 0x100000b2  b           . + 4 + (0xB2 << 2)
    ctx->pc = 0x1A6DB4u;
    {
        const bool branch_taken_0x1a6db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6DB4u;
        // 0x1a6db8: 0xae000058  sw          $zero, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6db4) {
            ctx->pc = 0x1A7080u;
            goto label_1a7080;
        }
    }
    ctx->pc = 0x1A6DBCu;
    // 0x1a6dbc: 0x0  nop
    ctx->pc = 0x1a6dbcu;
    // NOP
label_1a6dc0:
    // 0x1a6dc0: 0x26030070  addiu       $v1, $s0, 0x70
    ctx->pc = 0x1a6dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x1a6dc4: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x1a6dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1a6dc8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1a6dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a6dcc: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A6DCCu;
    {
        const bool branch_taken_0x1a6dcc = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x1A6DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6DCCu;
        // 0x1a6dd0: 0x31083  sra         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6dcc) {
            ctx->pc = 0x1A6DDCu;
            goto label_1a6ddc;
        }
    }
    ctx->pc = 0x1A6DD4u;
    // 0x1a6dd4: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x1a6dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x1a6dd8: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1a6dd8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_1a6ddc:
    // 0x1a6ddc: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x1a6ddcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a6de0: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1a6de0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1a6de4: 0xa2060001  sb          $a2, 0x1($s0)
    ctx->pc = 0x1a6de4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 6));
    // 0x1a6de8: 0x2402003d  addiu       $v0, $zero, 0x3D
    ctx->pc = 0x1a6de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x1a6dec: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x1a6decu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a6df0: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x1a6df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x1a6df4: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x1a6df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1a6df8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a6df8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6dfc: 0xa6020004  sh          $v0, 0x4($s0)
    ctx->pc = 0x1a6dfcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a6e00: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x1a6e00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x1a6e04: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x1a6e04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x1a6e08: 0x3c022080  lui         $v0, 0x2080
    ctx->pc = 0x1a6e08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8320 << 16));
    // 0x1a6e0c: 0x34434040  ori         $v1, $v0, 0x4040
    ctx->pc = 0x1a6e0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16448);
    // 0x1a6e10: 0x3c0280b0  lui         $v0, 0x80B0
    ctx->pc = 0x1a6e10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32944 << 16));
    // 0x1a6e14: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x1a6e14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x1a6e18: 0x34426040  ori         $v0, $v0, 0x6040
    ctx->pc = 0x1a6e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24640);
    // 0x1a6e1c: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x1a6e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1a6e20: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x1a6e20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x1a6e24: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1a6e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1a6e28: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x1a6e28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x1a6e2c: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x1a6e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x1a6e30: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x1a6e30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x1a6e34: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1a6e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a6e38: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x1a6e38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x1a6e3c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1a6e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a6e40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a6e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a6e44: 0xae030058  sw          $v1, 0x58($s0)
    ctx->pc = 0x1a6e44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 3));
    // 0x1a6e48: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x1a6e48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    // 0x1a6e4c: 0xc049590  jal         func_125640
    ctx->pc = 0x1A6E4Cu;
    SET_GPR_U32(ctx, 31, 0x1A6E54u);
    ctx->pc = 0x1A6E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6E4Cu;
    // 0x1a6e50: 0xae02006c  sw          $v0, 0x6C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x1A6E4Cu, 0x1A6E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6E54u;
label_1a6e54:
    // 0x1a6e54: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1a6e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1a6e58: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x1A6E58u;
    {
        const bool branch_taken_0x1a6e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6E58u;
        // 0x1a6e5c: 0xa2030060  sb          $v1, 0x60($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 96), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6e58) {
            ctx->pc = 0x1A7080u;
            goto label_1a7080;
        }
    }
    ctx->pc = 0x1A6E60u;
label_1a6e60:
    // 0x1a6e60: 0xa6000004  sh          $zero, 0x4($s0)
    ctx->pc = 0x1a6e60u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a6e64: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x1a6e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1a6e68: 0x2402003d  addiu       $v0, $zero, 0x3D
    ctx->pc = 0x1a6e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x1a6e6c: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x1a6e6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a6e70: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x1a6e70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a6e74: 0x260300bc  addiu       $v1, $s0, 0xBC
    ctx->pc = 0x1a6e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 188));
    // 0x1a6e78: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x1a6e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1a6e7c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1a6e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a6e80: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A6E80u;
    {
        const bool branch_taken_0x1a6e80 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x1A6E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6E80u;
        // 0x1a6e84: 0x31083  sra         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6e80) {
            ctx->pc = 0x1A6E90u;
            goto label_1a6e90;
        }
    }
    ctx->pc = 0x1A6E88u;
    // 0x1a6e88: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x1a6e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x1a6e8c: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1a6e8cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_1a6e90:
    // 0x1a6e90: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x1a6e90u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a6e94: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1a6e94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a6e98: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1a6e98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1a6e9c: 0x3c0280ff  lui         $v0, 0x80FF
    ctx->pc = 0x1a6e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33023 << 16));
    // 0x1a6ea0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1a6ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1a6ea4: 0xae060064  sw          $a2, 0x64($s0)
    ctx->pc = 0x1a6ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 6));
    // 0x1a6ea8: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x1a6ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x1a6eac: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1a6eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1a6eb0: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x1a6eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x1a6eb4: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1a6eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1a6eb8: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1a6eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1a6ebc: 0xa2000054  sb          $zero, 0x54($s0)
    ctx->pc = 0x1a6ebcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 84), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a6ec0: 0xa2020055  sb          $v0, 0x55($s0)
    ctx->pc = 0x1a6ec0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 85), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a6ec4: 0x2604008c  addiu       $a0, $s0, 0x8C
    ctx->pc = 0x1a6ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 140));
    // 0x1a6ec8: 0xae060088  sw          $a2, 0x88($s0)
    ctx->pc = 0x1a6ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 6));
    // 0x1a6ecc: 0xa2000068  sb          $zero, 0x68($s0)
    ctx->pc = 0x1a6eccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 104), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a6ed0: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1a6ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1a6ed4: 0xa2050069  sb          $a1, 0x69($s0)
    ctx->pc = 0x1a6ed4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 105), (uint8_t)GPR_U32(ctx, 5));
    // 0x1a6ed8: 0xa2000078  sb          $zero, 0x78($s0)
    ctx->pc = 0x1a6ed8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 120), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a6edc: 0xc049590  jal         func_125640
    ctx->pc = 0x1A6EDCu;
    SET_GPR_U32(ctx, 31, 0x1A6EE4u);
    ctx->pc = 0x1A6EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6EDCu;
    // 0x1a6ee0: 0xa2020079  sb          $v0, 0x79($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 121), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x1A6EDCu, 0x1A6EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6EE4u;
label_1a6ee4:
    // 0x1a6ee4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1a6ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a6ee8: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1a6ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x1a6eec: 0xae020098  sw          $v0, 0x98($s0)
    ctx->pc = 0x1a6eecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 2));
    // 0x1a6ef0: 0x3c033e80  lui         $v1, 0x3E80
    ctx->pc = 0x1a6ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16000 << 16));
    // 0x1a6ef4: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x1a6ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
    // 0x1a6ef8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1a6ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1a6efc: 0xae0400ac  sw          $a0, 0xAC($s0)
    ctx->pc = 0x1a6efcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 4));
    // 0x1a6f00: 0xae0400a4  sw          $a0, 0xA4($s0)
    ctx->pc = 0x1a6f00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 4));
    // 0x1a6f04: 0xae03009c  sw          $v1, 0x9C($s0)
    ctx->pc = 0x1a6f04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 3));
    // 0x1a6f08: 0xae0200a0  sw          $v0, 0xA0($s0)
    ctx->pc = 0x1a6f08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 2));
    // 0x1a6f0c: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x1a6f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
    // 0x1a6f10: 0xae0000c4  sw          $zero, 0xC4($s0)
    ctx->pc = 0x1a6f10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 0));
    // 0x1a6f14: 0xae0000c8  sw          $zero, 0xC8($s0)
    ctx->pc = 0x1a6f14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 0));
    // 0x1a6f18: 0xae0200cc  sw          $v0, 0xCC($s0)
    ctx->pc = 0x1a6f18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 2));
    // 0x1a6f1c: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1a6f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1a6f20: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1a6f20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1a6f24: 0xc04d4a0  jal         func_135280
    ctx->pc = 0x1A6F24u;
    SET_GPR_U32(ctx, 31, 0x1A6F2Cu);
    ctx->pc = 0x1A6F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6F24u;
    // 0x1a6f28: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135280u, 0x1A6F24u, 0x1A6F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6F2Cu;
label_1a6f2c:
    // 0x1a6f2c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1a6f2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a6f30: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x1a6f30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x1a6f34: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1a6f34u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1a6f38: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1a6f38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1a6f3c: 0xae0400b0  sw          $a0, 0xB0($s0)
    ctx->pc = 0x1a6f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 4));
    // 0x1a6f40: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x1a6f40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
    // 0x1a6f44: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x1A6F44u;
    {
        const bool branch_taken_0x1a6f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6F44u;
        // 0x1a6f48: 0xae0300b8  sw          $v1, 0xB8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6f44) {
            ctx->pc = 0x1A7080u;
            goto label_1a7080;
        }
    }
    ctx->pc = 0x1A6F4Cu;
    // 0x1a6f4c: 0x0  nop
    ctx->pc = 0x1a6f4cu;
    // NOP
label_1a6f50:
    // 0x1a6f50: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x1a6f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x1a6f54: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x1a6f54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1a6f58: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x1a6f58u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a6f5c: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A6F5Cu;
    {
        const bool branch_taken_0x1a6f5c = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x1A6F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6F5Cu;
        // 0x1a6f60: 0x41883  sra         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6f5c) {
            ctx->pc = 0x1A6F6Cu;
            goto label_1a6f6c;
        }
    }
    ctx->pc = 0x1A6F64u;
    // 0x1a6f64: 0x24830003  addiu       $v1, $a0, 0x3
    ctx->pc = 0x1a6f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x1a6f68: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x1a6f68u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_1a6f6c:
    // 0x1a6f6c: 0xa6030006  sh          $v1, 0x6($s0)
    ctx->pc = 0x1a6f6cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a6f70: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1a6f70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1a6f74: 0xa6030004  sh          $v1, 0x4($s0)
    ctx->pc = 0x1a6f74u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a6f78: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x1a6f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1a6f7c: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x1a6f7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a6f80: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1a6f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1a6f84: 0xa2030002  sb          $v1, 0x2($s0)
    ctx->pc = 0x1a6f84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a6f88: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1a6f88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1a6f8c: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x1a6f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x1a6f90: 0x24030032  addiu       $v1, $zero, 0x32
    ctx->pc = 0x1a6f90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x1a6f94: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x1a6f94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x1a6f98: 0x3c038080  lui         $v1, 0x8080
    ctx->pc = 0x1a6f98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32896 << 16));
    // 0x1a6f9c: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1a6f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1a6fa0: 0x34638080  ori         $v1, $v1, 0x8080
    ctx->pc = 0x1a6fa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
    // 0x1a6fa4: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x1A6FA4u;
    {
        const bool branch_taken_0x1a6fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6FA4u;
        // 0x1a6fa8: 0xae030014  sw          $v1, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6fa4) {
            ctx->pc = 0x1A7080u;
            goto label_1a7080;
        }
    }
    ctx->pc = 0x1A6FACu;
    // 0x1a6fac: 0x0  nop
    ctx->pc = 0x1a6facu;
    // NOP
label_1a6fb0:
    // 0x1a6fb0: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x1a6fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1a6fb4: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x1a6fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1a6fb8: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x1a6fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a6fbc: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A6FBCu;
    {
        const bool branch_taken_0x1a6fbc = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x1A6FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6FBCu;
        // 0x1a6fc0: 0x41883  sra         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6fbc) {
            ctx->pc = 0x1A6FCCu;
            goto label_1a6fcc;
        }
    }
    ctx->pc = 0x1A6FC4u;
    // 0x1a6fc4: 0x24830003  addiu       $v1, $a0, 0x3
    ctx->pc = 0x1a6fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x1a6fc8: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x1a6fc8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_1a6fcc:
    // 0x1a6fcc: 0xa6030006  sh          $v1, 0x6($s0)
    ctx->pc = 0x1a6fccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a6fd0: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x1a6fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1a6fd4: 0xa6000004  sh          $zero, 0x4($s0)
    ctx->pc = 0x1a6fd4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a6fd8: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x1a6fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1a6fdc: 0xa2040001  sb          $a0, 0x1($s0)
    ctx->pc = 0x1a6fdcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a6fe0: 0xa2030002  sb          $v1, 0x2($s0)
    ctx->pc = 0x1a6fe0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a6fe4: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1a6fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x1a6fe8: 0xae040010  sw          $a0, 0x10($s0)
    ctx->pc = 0x1a6fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
    // 0x1a6fec: 0x3c038080  lui         $v1, 0x8080
    ctx->pc = 0x1a6fecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32896 << 16));
    // 0x1a6ff0: 0xae040014  sw          $a0, 0x14($s0)
    ctx->pc = 0x1a6ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 4));
    // 0x1a6ff4: 0x34638080  ori         $v1, $v1, 0x8080
    ctx->pc = 0x1a6ff4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
    // 0x1a6ff8: 0xae040018  sw          $a0, 0x18($s0)
    ctx->pc = 0x1a6ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 4));
    // 0x1a6ffc: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1A6FFCu;
    {
        const bool branch_taken_0x1a6ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6FFCu;
        // 0x1a7000: 0xae03001c  sw          $v1, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6ffc) {
            ctx->pc = 0x1A7080u;
            goto label_1a7080;
        }
    }
    ctx->pc = 0x1A7004u;
    // 0x1a7004: 0x0  nop
    ctx->pc = 0x1a7004u;
    // NOP
label_1a7008:
    // 0x1a7008: 0x26030050  addiu       $v1, $s0, 0x50
    ctx->pc = 0x1a7008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x1a700c: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x1a700cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1a7010: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1a7010u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a7014: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A7014u;
    {
        const bool branch_taken_0x1a7014 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x1A7018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7014u;
        // 0x1a7018: 0x31083  sra         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7014) {
            ctx->pc = 0x1A7024u;
            goto label_1a7024;
        }
    }
    ctx->pc = 0x1A701Cu;
    // 0x1a701c: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x1a701cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x1a7020: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1a7020u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_1a7024:
    // 0x1a7024: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x1a7024u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a7028: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1a7028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1a702c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1a702cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1a7030: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x1a7030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1a7034: 0xa6020004  sh          $v0, 0x4($s0)
    ctx->pc = 0x1a7034u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a7038: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1a7038u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1a703c: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x1a703cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1a7040: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x1a7040u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a7044: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a7044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a7048: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x1a7048u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x1a704c: 0xa2000010  sb          $zero, 0x10($s0)
    ctx->pc = 0x1a704cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 16), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a7050: 0x3c027373  lui         $v0, 0x7373
    ctx->pc = 0x1a7050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29555 << 16));
    // 0x1a7054: 0xa2050011  sb          $a1, 0x11($s0)
    ctx->pc = 0x1a7054u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 17), (uint8_t)GPR_U32(ctx, 5));
    // 0x1a7058: 0x34437373  ori         $v1, $v0, 0x7373
    ctx->pc = 0x1a7058u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29555);
    // 0x1a705c: 0xa2000020  sb          $zero, 0x20($s0)
    ctx->pc = 0x1a705cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a7060: 0x3c022020  lui         $v0, 0x2020
    ctx->pc = 0x1a7060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8224 << 16));
    // 0x1a7064: 0xa2040021  sb          $a0, 0x21($s0)
    ctx->pc = 0x1a7064u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 33), (uint8_t)GPR_U32(ctx, 4));
    // 0x1a7068: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x1a7068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x1a706c: 0xae030044  sw          $v1, 0x44($s0)
    ctx->pc = 0x1a706cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
    // 0x1a7070: 0x26040034  addiu       $a0, $s0, 0x34
    ctx->pc = 0x1a7070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
    // 0x1a7074: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x1a7074u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x1a7078: 0xc049590  jal         func_125640
    ctx->pc = 0x1A7078u;
    SET_GPR_U32(ctx, 31, 0x1A7080u);
    ctx->pc = 0x1A707Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7078u;
    // 0x1a707c: 0xa205004d  sb          $a1, 0x4D($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x1A7078u, 0x1A7080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7080u;
label_1a7080:
    // 0x1a7080: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1a7080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a7084: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1a7084u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a7088: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a7088u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a708c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a708cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a7090: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a7090u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a7094: 0x3e00008  jr          $ra
    ctx->pc = 0x1A7094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7094u;
        // 0x1a7098: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7094u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A709Cu;
}
