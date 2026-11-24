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

// Function: sub_002EC720
// Address: 0x2ec720 - 0x2ec880
void sub_002EC720_0x2ec720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EC720_0x2ec720");
#endif

    switch (ctx->pc) {
        case 0x2ec850u: goto label_2ec850;
        default: break;
    }

    ctx->pc = 0x2ec720u;

    // 0x2ec720: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ec720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ec724: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2ec724u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x2ec728: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ec728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ec72c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2ec72cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ec730: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ec730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ec734: 0x8c850148  lw          $a1, 0x148($a0)
    ctx->pc = 0x2ec734u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x2ec738: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x2ec738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x2ec73c: 0xac830148  sw          $v1, 0x148($a0)
    ctx->pc = 0x2ec73cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 3));
    // 0x2ec740: 0x8c8306cc  lw          $v1, 0x6CC($a0)
    ctx->pc = 0x2ec740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1740)));
    // 0x2ec744: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x2ec744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x2ec748: 0xac8306cc  sw          $v1, 0x6CC($a0)
    ctx->pc = 0x2ec748u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1740), GPR_U32(ctx, 3));
    // 0x2ec74c: 0x90830821  lbu         $v1, 0x821($a0)
    ctx->pc = 0x2ec74cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x2ec750: 0x1066002d  beq         $v1, $a2, . + 4 + (0x2D << 2)
    ctx->pc = 0x2EC750u;
    {
        const bool branch_taken_0x2ec750 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x2EC754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC750u;
        // 0x2ec754: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec750) {
            ctx->pc = 0x2EC808u;
            goto label_2ec808;
        }
    }
    ctx->pc = 0x2EC758u;
    // 0x2ec758: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EC758u;
    {
        const bool branch_taken_0x2ec758 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec758) {
            ctx->pc = 0x2EC768u;
            goto label_2ec768;
        }
    }
    ctx->pc = 0x2EC760u;
    // 0x2ec760: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x2EC760u;
    {
        const bool branch_taken_0x2ec760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec760) {
            ctx->pc = 0x2EC870u;
            goto label_2ec870;
        }
    }
    ctx->pc = 0x2EC768u;
label_2ec768:
    // 0x2ec768: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x2ec768u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
    // 0x2ec76c: 0x24638e60  addiu       $v1, $v1, -0x71A0
    ctx->pc = 0x2ec76cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938208));
    // 0x2ec770: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2ec770u;
    { uint32_t bits = FAST_READ32(0x4E8E60u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ec774: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2ec774u;
    { uint32_t bits = FAST_READ32(0x4E8E64u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ec778: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2ec778u;
    { uint32_t bits = FAST_READ32(0x4E8E68u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ec77c: 0xe60206a0  swc1        $f2, 0x6A0($s0)
    ctx->pc = 0x2ec77cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1696), bits); }
    // 0x2ec780: 0xe60106a4  swc1        $f1, 0x6A4($s0)
    ctx->pc = 0x2ec780u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1700), bits); }
    // 0x2ec784: 0xe60006a8  swc1        $f0, 0x6A8($s0)
    ctx->pc = 0x2ec784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1704), bits); }
    // 0x2ec788: 0x920307d8  lbu         $v1, 0x7D8($s0)
    ctx->pc = 0x2ec788u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2008)));
    // 0x2ec78c: 0x1466000e  bne         $v1, $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x2EC78Cu;
    {
        const bool branch_taken_0x2ec78c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x2ec78c) {
            ctx->pc = 0x2EC7C8u;
            goto label_2ec7c8;
        }
    }
    ctx->pc = 0x2EC794u;
    // 0x2ec794: 0x9206083b  lbu         $a2, 0x83B($s0)
    ctx->pc = 0x2ec794u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2107)));
    // 0x2ec798: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2ec798u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2ec79c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2ec79cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ec7a0: 0x2404009b  addiu       $a0, $zero, 0x9B
    ctx->pc = 0x2ec7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 155));
    // 0x2ec7a4: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x2ec7a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x2ec7a8: 0xa206083c  sb          $a2, 0x83C($s0)
    ctx->pc = 0x2ec7a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2108), (uint8_t)GPR_U32(ctx, 6));
    // 0x2ec7ac: 0xa205083b  sb          $a1, 0x83B($s0)
    ctx->pc = 0x2ec7acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2107), (uint8_t)GPR_U32(ctx, 5));
    // 0x2ec7b0: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x2ec7b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ec7b4: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x2ec7b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ec7b8: 0xa60407f2  sh          $a0, 0x7F2($s0)
    ctx->pc = 0x2ec7b8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 4));
    // 0x2ec7bc: 0xa20007f5  sb          $zero, 0x7F5($s0)
    ctx->pc = 0x2ec7bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ec7c0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2EC7C0u;
    {
        const bool branch_taken_0x2ec7c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC7C0u;
        // 0x2ec7c4: 0xae0307ec  sw          $v1, 0x7EC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec7c0) {
            ctx->pc = 0x2EC7F8u;
            goto label_2ec7f8;
        }
    }
    ctx->pc = 0x2EC7C8u;
label_2ec7c8:
    // 0x2ec7c8: 0x9205083b  lbu         $a1, 0x83B($s0)
    ctx->pc = 0x2ec7c8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2107)));
    // 0x2ec7cc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2ec7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2ec7d0: 0x2404009c  addiu       $a0, $zero, 0x9C
    ctx->pc = 0x2ec7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 156));
    // 0x2ec7d4: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x2ec7d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x2ec7d8: 0xa205083c  sb          $a1, 0x83C($s0)
    ctx->pc = 0x2ec7d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2108), (uint8_t)GPR_U32(ctx, 5));
    // 0x2ec7dc: 0xa206083b  sb          $a2, 0x83B($s0)
    ctx->pc = 0x2ec7dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2107), (uint8_t)GPR_U32(ctx, 6));
    // 0x2ec7e0: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x2ec7e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ec7e4: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x2ec7e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ec7e8: 0xa60407f2  sh          $a0, 0x7F2($s0)
    ctx->pc = 0x2ec7e8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 4));
    // 0x2ec7ec: 0xa20007f5  sb          $zero, 0x7F5($s0)
    ctx->pc = 0x2ec7ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ec7f0: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x2ec7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
    // 0x2ec7f4: 0x0  nop
    ctx->pc = 0x2ec7f4u;
    // NOP
label_2ec7f8:
    // 0x2ec7f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ec7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ec7fc: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2EC7FCu;
    {
        const bool branch_taken_0x2ec7fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC7FCu;
        // 0x2ec800: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec7fc) {
            ctx->pc = 0x2EC870u;
            goto label_2ec870;
        }
    }
    ctx->pc = 0x2EC804u;
    // 0x2ec804: 0x0  nop
    ctx->pc = 0x2ec804u;
    // NOP
label_2ec808:
    // 0x2ec808: 0x920307d8  lbu         $v1, 0x7D8($s0)
    ctx->pc = 0x2ec808u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2008)));
    // 0x2ec80c: 0x14660006  bne         $v1, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EC80Cu;
    {
        const bool branch_taken_0x2ec80c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x2ec80c) {
            ctx->pc = 0x2EC828u;
            goto label_2ec828;
        }
    }
    ctx->pc = 0x2EC814u;
    // 0x2ec814: 0x9204083b  lbu         $a0, 0x83B($s0)
    ctx->pc = 0x2ec814u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2107)));
    // 0x2ec818: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2ec818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ec81c: 0xa204083c  sb          $a0, 0x83C($s0)
    ctx->pc = 0x2ec81cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2108), (uint8_t)GPR_U32(ctx, 4));
    // 0x2ec820: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2EC820u;
    {
        const bool branch_taken_0x2ec820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC820u;
        // 0x2ec824: 0xa203083b  sb          $v1, 0x83B($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2107), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec820) {
            ctx->pc = 0x2EC838u;
            goto label_2ec838;
        }
    }
    ctx->pc = 0x2EC828u;
label_2ec828:
    // 0x2ec828: 0x9203083b  lbu         $v1, 0x83B($s0)
    ctx->pc = 0x2ec828u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2107)));
    // 0x2ec82c: 0xa203083c  sb          $v1, 0x83C($s0)
    ctx->pc = 0x2ec82cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2108), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ec830: 0xa206083b  sb          $a2, 0x83B($s0)
    ctx->pc = 0x2ec830u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2107), (uint8_t)GPR_U32(ctx, 6));
    // 0x2ec834: 0x0  nop
    ctx->pc = 0x2ec834u;
    // NOP
label_2ec838:
    // 0x2ec838: 0x8e0306ac  lw          $v1, 0x6AC($s0)
    ctx->pc = 0x2ec838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1708)));
    // 0x2ec83c: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x2ec83cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x2ec840: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2EC840u;
    {
        const bool branch_taken_0x2ec840 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC840u;
        // 0x2ec844: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec840) {
            ctx->pc = 0x2EC870u;
            goto label_2ec870;
        }
    }
    ctx->pc = 0x2EC848u;
    // 0x2ec848: 0xc0bb194  jal         func_2EC650
    ctx->pc = 0x2EC848u;
    SET_GPR_U32(ctx, 31, 0x2EC850u);
    ctx->pc = 0x2EC650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EC650u, 0x2EC848u, 0x2EC850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC850u;
label_2ec850:
    // 0x2ec850: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x2ec850u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x2ec854: 0x2463c250  addiu       $v1, $v1, -0x3DB0
    ctx->pc = 0x2ec854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951504));
    // 0x2ec858: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2ec858u;
    { uint32_t bits = FAST_READ32(0x68C250u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ec85c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2ec85cu;
    { uint32_t bits = FAST_READ32(0x68C254u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ec860: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2ec860u;
    { uint32_t bits = FAST_READ32(0x68C258u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ec864: 0xe60206a0  swc1        $f2, 0x6A0($s0)
    ctx->pc = 0x2ec864u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1696), bits); }
    // 0x2ec868: 0xe60106a4  swc1        $f1, 0x6A4($s0)
    ctx->pc = 0x2ec868u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1700), bits); }
    // 0x2ec86c: 0xe60006a8  swc1        $f0, 0x6A8($s0)
    ctx->pc = 0x2ec86cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1704), bits); }
label_2ec870:
    // 0x2ec870: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ec870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ec874: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ec874u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ec878: 0x3e00008  jr          $ra
    ctx->pc = 0x2EC878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EC87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC878u;
        // 0x2ec87c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EC878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EC880u;
}
